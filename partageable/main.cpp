#define WINDOWS_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>

#include "composant1.h"
#include "composant2.h"
#include "composant3.h"
#include "composant4.h"

int main(int argc, char * argv)
{
	int data1=3;
	int data2=5;

	int valeur4;
	int valeur2;

	valeur4=composant4(data1,data2);

	valeur2=composant2(data1,data2);

	std::cout << getComposant4Version() << std::endl;
	std::cout << "valeur 1 :" << valeur4 << " valeur 2 :" << valeur2 << std::endl;
	Sleep(1000);
	system("pause");
}
