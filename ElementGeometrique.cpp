/*************************************************************************
                           ElementGeometrique  -  description
                             -------------------
    début                : 2 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <ElementGeometrique> (fichier ElementGeometrique.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ElementGeometrique.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ElementGeometrique::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
ElementGeometrique & ElementGeometrique::operator = ( const ElementGeometrique & unElementGeometrique )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ElementGeometrique::ElementGeometrique ( const ElementGeometrique & unElementGeometrique )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ElementGeometrique>" << endl;
#endif
} //----- Fin de ElementGeometrique (constructeur de copie)


ElementGeometrique::ElementGeometrique ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ElementGeometrique>" << endl;
#endif
} //----- Fin de ElementGeometrique


ElementGeometrique::~ElementGeometrique ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ElementGeometrique>" << endl;
#endif
} //----- Fin de ~ElementGeometrique


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

