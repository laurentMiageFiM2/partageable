
#include "Composant4.h"
#include "Composant3.h"
#include "Composant4Version.h"
#include "string.h"
#include <stdio.h>     
#include <stdlib.h> 

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant4(int p1, int p2)
{
	return composant3(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}


char * getComposant4Version()
{
	char* lib1 = "Composant 4 version ";
	char* version4 = COMPOSANT_VERSION_STR;
	char* lib2 = "\nComposant 3 version ";
	char * version3 = getComposant3Version();

	char *  version = (char*)malloc(80 + strlen(version4) + strlen(version3));

	strcpy(version, lib1);
	strcat(version, version4);
	strcat(version, lib2);
	strcat(version, version3);

	return version;
}




