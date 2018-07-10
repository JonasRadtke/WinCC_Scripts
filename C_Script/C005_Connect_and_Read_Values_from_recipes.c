#pragma code ("ccuacapi.dll") // Wird fuer  benötigt
#include "ccuacapi.h"		// Wird fuer  benötigt
#pragma code()			// Wird fuer  benötigt



UAHCONNECT rezeptHandle; // Handler auf Rezeptdatenbank allgemein
UAHARCHIVE archiveHandle; // Handler auf Rezept

char stringarray[100] = "test";

LPSTR pszString;
LONG testLong;



// Verbindung zu einer Rezeptur aufbauen
if (uaConnect(&rezeptHandle)) {	// Verbindung zur Rezeptdatenbank
	printf("Verbindung aufgebaut\n"); 
}
else
{
	printf("Verbindung konnte nicht aufgebaut werden\n");
	return;
}

if (uaQueryArchive ( rezeptHandle, 1, &archiveHandle )) { // Anfrage ob Rezept da ist (Rezept mit der Nummer 1, siehe Rezepturen)
	printf("Query erfolgreich\n"); 
}
else
{
	printf("Query Fehlgeschlagen\n"); 
	return;
}

if (uaArchiveOpen (archiveHandle )) { // Rezept öffnen
	printf("Open erfolgreich\n"); 
}
else
{
	printf("Open fehlgeschlagen\n"); 
	return;
}

uaArchiveMoveNext ( archiveHandle ); // zum nächsten Rezeptdatensatz gehen, Anfangs Stelle 0 = ungültig. Muss mindestens einmal ausgeführt werden

// Ab hier können Daten aus dem Rezeptdatensatz gelesen/geschrieben werden



pszString = &stringarray[0];

if (uaArchiveGetFieldValueLong(archiveHandle,4, &testLong)) { // Liest einen Integer aus dem Rezept, die Zahl gibt die Spalte an, ID = 0
	printf("Lesen Integer erfolgreich\n"); 
}
else
{
	printf("Integer konnte nicht gelesen werden\n"); 
	return;
}


if (uaArchiveGetFieldValueString ( archiveHandle, 1, pszString, 50 )) { // Liest einen String aus dem Rezept, die Zahl gibt die Spalte an, ID = 0, brauch eine maximal Länge
	printf("Lesen String erfolgreich\n"); 
}
else
{
	printf("String konnte nicht gelesen werden\n"); 
	return;
}

// Testdaten ausgeben
//printf("Wert aus Feld 4: %ld\n", testLong);
//printf("Rezeptname 1: %s\n", stringarray);
// Testdaten in interne Variable schreiben
//SetTagChar("rezeptname1", stringarray);

//SetPropertyByConstant ("002_Start", "Kombinationsfeld_1", "CountVisibleItems", "250");
//SetPropertyByConstant ("002_Start", "Kombinationsfeld_1", "SelectedIndex", "15");
//SetPropertyByConstant ("002_Start", "Kombinationsfeld_1", "SelectedText", stringarray);

//uaDisconnect(rezeptHandle);

// Verbindung beenden
if (uaArchiveClose(archiveHandle)) { // Archiv schliessen
	printf("Archiv schliessen erfolgreich\n"); 
}
else
{
	printf("Archiv konnte nicht geschlossen werden\n"); 
	return;
}

if (uaReleaseArchive(archiveHandle)) { // Archiv lösen
	printf("Archiv released\n"); 
}
else
{
	printf("Archiv konnte nicht released werden\n"); 
	return;
}

if (uaDisconnect(rezeptHandle)) { // Archiv trennen
	printf("Archiv getrennt\n"); 
}
else
{
	printf("Archiv konnte nicht getrennt werden\n"); 
	return;
}