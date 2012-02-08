/*************************************************************************
                           ModeleGeometrique  -  description
                             -------------------
    début                : 2 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <ModeleGeometrique> (fichier ModeleGeometrique.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ModeleGeometrique.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ModeleGeometrique::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void ModeleGeometrique::AjouterElementGeometrique (ElementGeometrique* elementAAJouter)
{
	  listeElementsGeometrique->push_back(elementAAJouter);

}

void ModeleGeometrique::SupprimerElementGeometrique (ElementGeometrique* elementASupprimer)
{
	listeElementsGeometrique->remove(elementASupprimer);
}

void ModeleGeometrique::ClearList()
{
	listeElementsGeometrique->clear();
}
list<ElementGeometrique*>* ModeleGeometrique::getListeElementsGeometrique()
{
	return listeElementsGeometrique;
}



//------------------------------------------------- Surcharge d'opérateurs
ModeleGeometrique & ModeleGeometrique::operator = ( const ModeleGeometrique & unModeleGeometrique )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ModeleGeometrique::ModeleGeometrique ( const ModeleGeometrique & unModeleGeometrique )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ModeleGeometrique>" << endl;
#endif
} //----- Fin de ModeleGeometrique (constructeur de copie)


ModeleGeometrique::ModeleGeometrique ( )
// Algorithme :
//
{
	listeElementsGeometrique = new list<ElementGeometrique*>();

#ifdef MAP
    cout << "Appel au constructeur de <ModeleGeometrique>" << endl;
#endif
} //----- Fin de ModeleGeometrique


ModeleGeometrique::~ModeleGeometrique ( )
// Algorithme :
//
{
	list<ElementGeometrique*>::iterator it;

	it = listeElementsGeometrique->begin();
	while (it!=listeElementsGeometrique->end())
	{
		delete(*it);
	}


#ifdef MAP
    cout << "Appel au destructeur de <ModeleGeometrique>" << endl;
#endif
} //----- Fin de ~ModeleGeometrique


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

