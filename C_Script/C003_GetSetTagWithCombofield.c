// temp Variablen deklarieren
int Ventil_1 = 0;
int Ventil_2 = 0;
int Ventil_3 = 0;
int Ventil_4 = 0;

// Switch Case für rechts
// In Cleannummer_rechts steht die anzuzeigende Zahl 1-5
switch(GetTagSWord("Cleannummer_rechts")) {

	case 1: 
		Ventil_1 = GetTagSWord("Ventile_CV111.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV112.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV113.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV114.Status_Ventil");
	break;
	case 2:
		Ventil_1 = GetTagSWord("Ventile_CV121.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV122.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV123.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV124.Status_Ventil");
	break;
	case 3:
		Ventil_1 = GetTagSWord("Ventile_CV131.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV132.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV133.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV134.Status_Ventil");
	break;
	case 4:
		Ventil_1 = GetTagSWord("Ventile_CV141.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV142.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV143.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV144.Status_Ventil");
	break;
	case 5:
		Ventil_1 = GetTagSWord("Ventile_CV151.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV152.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV153.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV154.Status_Ventil");
	break;
	default:
		Ventil_1 = 0;
	 	Ventil_2 = 0;
		Ventil_3 = 0;
		Ventil_4 = 0;
	break;
}

SetTagSWord("Cleaner_Ventil_Status_1X1_rechts" , Ventil_1);
SetTagSWord("Cleaner_Ventil_Status_1X2_rechts" , Ventil_2);
SetTagSWord("Cleaner_Ventil_Status_1X3_rechts" , Ventil_3);
SetTagSWord("Cleaner_Ventil_Status_1X4_rechts" , Ventil_4);

// Switch Case für links
// In Cleannummer_rechts steht die anzuzeigende Zahl 1-5
switch(GetTagSWord("Cleannummer_links")) {

	case 1: 
		Ventil_1 = GetTagSWord("Ventile_CV111.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV112.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV113.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV114.Status_Ventil");
	break;
	case 2:
		Ventil_1 = GetTagSWord("Ventile_CV121.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV122.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV123.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV124.Status_Ventil");
	break;
	case 3:
		Ventil_1 = GetTagSWord("Ventile_CV131.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV132.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV133.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV134.Status_Ventil");
	break;
	case 4:
		Ventil_1 = GetTagSWord("Ventile_CV141.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV142.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV143.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV144.Status_Ventil");
	break;
	case 5:
		Ventil_1 = GetTagSWord("Ventile_CV151.Status_Ventil");
		Ventil_2 = GetTagSWord("Ventile_CV152.Status_Ventil");
		Ventil_3 = GetTagSWord("Ventile_CV153.Status_Ventil");
		Ventil_4 = GetTagSWord("Ventile_CV154.Status_Ventil");
	break;
	default:
		Ventil_1 = 0;
	 	Ventil_2 = 0;
		Ventil_3 = 0;
		Ventil_4 = 0;
	break;
}

SetTagSWord("Cleaner_Ventil_Status_1X1_links" , Ventil_1);
SetTagSWord("Cleaner_Ventil_Status_1X2_links" , Ventil_2);
SetTagSWord("Cleaner_Ventil_Status_1X3_links" , Ventil_3);
SetTagSWord("Cleaner_Ventil_Status_1X4_links" , Ventil_4);