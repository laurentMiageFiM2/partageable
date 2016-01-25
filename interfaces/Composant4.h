#pragma once
#ifndef COMPOSANT4_H
#define COMPOSANT4_H

#ifdef COMPOSANT4_EXPORTS
	#define COMPOSANT4_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT4_INTERFACE __declspec(dllimport)
#endif



// interface du composant4
COMPOSANT4_INTERFACE int composant1(int p1, int p2);

COMPOSANT4_INTERFACE char * getComposant1Version(void);
#endif

