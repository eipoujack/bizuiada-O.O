//Feito por Info_Inside

#if defined _Intro_included
	#endinput
#endif
#define _Intro_included

	new PlayerText:TempoRoubo[MAX_PLAYERS];
	new PlayerText:ClockRoubo[MAX_PLAYERS];
	new PlayerText:BoxRoubo[MAX_PLAYERS];
	new PlayerText:NickReg[MAX_PLAYERS];

stock CreateRoubo(playerid) {
	BoxRoubo[playerid] = CreatePlayerTextDraw(playerid, 596.553161, 141.500030, "usetimer");
	PlayerTextDrawLetterSize(playerid, BoxRoubo[playerid], 0.000000, 2.023699);
	PlayerTextDrawTextSize(playerid, BoxRoubo[playerid], 507.751464, 0.000000);
	PlayerTextDrawAlignment(playerid, BoxRoubo[playerid], 1);
	PlayerTextDrawColor(playerid, BoxRoubo[playerid], 0);
	PlayerTextDrawUseBox(playerid, BoxRoubo[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxRoubo[playerid], 180);
	PlayerTextDrawSetShadow(playerid, BoxRoubo[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxRoubo[playerid], 0);
	PlayerTextDrawFont(playerid, BoxRoubo[playerid], 0);

	ClockRoubo[playerid] = CreatePlayerTextDraw(playerid, 510.426879, 140.833343, "ld_grav:timer");
	PlayerTextDrawLetterSize(playerid, ClockRoubo[playerid], 0.499998, 0.352499);
	PlayerTextDrawTextSize(playerid, ClockRoubo[playerid], 18.736480, 17.749977);
	PlayerTextDrawAlignment(playerid, ClockRoubo[playerid], 1);
	PlayerTextDrawColor(playerid, ClockRoubo[playerid], -1);
	PlayerTextDrawUseBox(playerid, ClockRoubo[playerid], true);
	PlayerTextDrawBoxColor(playerid, ClockRoubo[playerid], 0);
	PlayerTextDrawSetShadow(playerid, ClockRoubo[playerid], -158);
	PlayerTextDrawSetOutline(playerid, ClockRoubo[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ClockRoubo[playerid], 65535);
	PlayerTextDrawFont(playerid, ClockRoubo[playerid], 4);
	PlayerTextDrawSetProportional(playerid, ClockRoubo[playerid], 1);

	TempoRoubo[playerid] = CreatePlayerTextDraw(playerid, 537.393737, 142.916702, "00:00");
	PlayerTextDrawLetterSize(playerid, TempoRoubo[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, TempoRoubo[playerid], 1);
	PlayerTextDrawColor(playerid, TempoRoubo[playerid], -1);
	PlayerTextDrawSetShadow(playerid, TempoRoubo[playerid], 0);
	PlayerTextDrawSetOutline(playerid, TempoRoubo[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, TempoRoubo[playerid], 51);
	PlayerTextDrawFont(playerid, TempoRoubo[playerid], 1);
	PlayerTextDrawSetProportional(playerid, TempoRoubo[playerid], 1);
}
stock MostrarRoubo(playerid) {
            PlayerTextDrawShow(playerid, BoxRoubo[playerid]);
            PlayerTextDrawShow(playerid, ClockRoubo[playerid]);
            PlayerTextDrawShow(playerid, TempoRoubo[playerid]);
}
stock EsconderRoubo(playerid) {
            PlayerTextDrawHide(playerid, BoxRoubo[playerid]);
            PlayerTextDrawHide(playerid, ClockRoubo[playerid]);
            PlayerTextDrawHide(playerid, TempoRoubo[playerid]);
}