char Bildfenstername[] = "Bildfenster_Ventil_1"; // Name des Bildfensters, welches geöffnet werden soll
double x_pos; // X positon (Left)
double y_pos; // Y Position (Top)
BOOL vis;


// Ventil Position als double ermitteln
x_pos = GetPropDouble(screenName, objectName, "Left");
y_pos = GetPropDouble(screenName, objectName, "Top");
// Offset einstellen für mitte Ventil
x_pos = x_pos + 16;
y_pos = y_pos + 22;
// Errechnete Position an Bildfenster schreiben
SetPropDouble(screenName, Bildfenstername, "Left", x_pos );
SetPropDouble(screenName, Bildfenstername, "Top", y_pos );

//Lese Sichtbarkeit des Fensters zurück
vis = GetPropBOOL(screenName, Bildfenstername, "Visible");

if (vis == 1) {
	// Bildfenster Unsichtbar schalten
	SetPropertyByConstant (screenName, Bildfenstername, "Visible", "0");
}
else {
	// Bildfenster Sichtbar schalten
	SetPropertyByConstant (screenName, Bildfenstername, "Visible", "1");
}