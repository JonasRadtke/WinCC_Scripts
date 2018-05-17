#pragma code ("useadmin.dll") // Wird fuer Benutzer benötigt
#include "PWRT_api.h"		// Wird fuer Benutzer benötigt
#pragma code()			// Wird fuer Benutzer benötigt

// Prüfe auf Berechigung 1 (Benutzerverwaltung)
if (PWRTCheckPermission( 1 , TRUE)){ 
	SetTagBit("Berechtigung_Benutzerverwaltung", 1);
}
else{
	SetTagBit("Berechtigung_Benutzerverwaltung", 0);
}


// Prüfe auf Berechigung 2 (Beobachten)
if (PWRTCheckPermission( 2 , TRUE)){ 
	SetTagBit("Berechtigung_Beobachten", 1);
}
else{
	SetTagBit("Berechtigung_Beobachten", 0);
}


// Prüfe auf Berechigung 3 (Bedienen)
if (PWRTCheckPermission( 3 , TRUE)){ 
	SetTagBit("Berechtigung_Bedienen", 1);
}
else{
	SetTagBit("Berechtigung_Bedienen", 0);
}


// Prüfe auf Berechigung 4 (Settings)
if (PWRTCheckPermission( 4 , TRUE)){ 
	SetTagBit("Berechtigung_Settings", 1);
}
else{
	SetTagBit("Berechtigung_Settings", 0);
}


// Prüfe auf Berechigung 8 (Grenzen)
if (PWRTCheckPermission( 8 , TRUE)){ 
	SetTagBit("Berechtigung_Grenzen", 1);
}
else{
	SetTagBit("Berechtigung_Grenzen", 0);
}


// Prüfe auf Berechigung 9 (Simulation)
if (PWRTCheckPermission( 9 , TRUE)){ 
	SetTagBit("Berechtigung_Simulation", 1);
}
else{
	SetTagBit("Berechtigung_Simulation", 0);
}