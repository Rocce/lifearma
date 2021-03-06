#include "..\..\script_macros.hpp"
#include "..\..\dialog\guiIds_macros.hpp"
/*
    File: fn_p_updateMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Updates the player menu (Virtual Interaction Menu)
*/
private ["_inv","_lic","_licenses","_near","_near_units","_mstatus","_shrt","_side","_struct"];
disableSerialization;

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[ID_xe_playerMenu_buttonAdminMenu,false];
};

_side = switch (playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_inv = CONTROL(ID_xe_playerMenu,2005);
_near = CONTROL(ID_xe_playerMenu,2022);
_near_i = CONTROL(ID_xe_playerMenu,2023);
_mstatus = CONTROL(ID_xe_playerMenu,ID_xe_playerMenu_moneyInfo);
lbClear _inv;
lbClear _near;
lbClear _near_i;

//Near players
_near_units = [];
{ if (player distance _x < 10) then {_near_units pushBack _x};} forEach playableUnits;
{
    if (!isNull _x && alive _x && player distance _x < 10 && !(_x isEqualTo player)) then {
        _near lbAdd format ["%1 - %2",_x getVariable ["realname",name _x], side _x];
        _near lbSetData [(lbSize _near)-1,str(_x)];
        _near_i lbAdd format ["%1 - %2",_x getVariable ["realname",name _x], side _x];
        _near_i lbSetData [(lbSize _near)-1,str(_x)];
    };
} forEach _near_units;

_mstatus ctrlSetStructuredText parseText format [
    "<img size='1.3' image='icons\ico_bank.paa'/> <t size='0.8px'>$%1</t><br/><img size='1.2' image='icons\ico_money.paa'/> <t size='0.8'>$%2</t><br/><img size='1.3' image='icons\xeicons\income.paa'/> <t size='0.8px'>$%3 / %4 min</t>",
    [BANK] call life_fnc_numberText,
    [CASH] call life_fnc_numberText,
    str(call life_paycheck),
    str(getNumber(missionConfigFile >> "Life_Settings" >> "paycheck_period"))
];

ctrlSetText[ID_xe_playerMenu_playersName,format ["Spazio: %1 / %2", life_carryWeight, life_maxWeight]];

{
    if (ITEM_VALUE(configName _x) > 0) then {
        _inv lbAdd format ["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
        _inv lbSetData [(lbSize _inv)-1,configName _x];
        _icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
        if (!(_icon isEqualTo "")) then {
            _inv lbSetPicture [(lbSize _inv)-1,_icon];
        };
    };
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

[] call life_fnc_xe_playerMenuStaus;