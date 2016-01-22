
#include "Composant1.h"
#include "Composant3.h"
#include "Composant1Version.h"
#include "string.h"
#include <stdio.h>     
#include <stdlib.h> 

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return composant3(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}



char * getComposant1Version()
{
	char* lib1 = "Composant 1 version ";
	char* version1 = COMPOSANT_VERSION_STR;
	char* lib2 = "\nComposant 3 version ";
	char * version3 = getComposant3Version();

	char *  version = (char*)malloc(80 + strlen(version1) + strlen(version3));

	strcpy(version, lib1);
	strcat(version, version1);
	strcat(version, lib2);
	strcat(version, version3);

	return version;
}




