/*************************************************************************
                           cercle  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Réalisation de la classe <cercle> (fichier cercle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "cercle.h"
#include "point.h"
#include "rectangle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type cercle::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
//TODO appartient cercle
bool cercle::Appartient(rectangle selection)
// Algorithme :
//
{

} //----- Fin de Méthode

void cercle::Translater(long deltaX, long deltaY)
// Algorithme :
//
{
	m_centre.Translater(deltaX, deltaY)
} //----- Fin de Translater

//------------------------------------------------- Surcharge d'opérateurs
cercle & cercle::operator = ( const cercle & uncercle )
// Algorithme :
//
//{
//} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
cercle::cercle ( const cercle & uncercle )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <cercle>" << endl;
#endif
} //----- Fin de cercle (constructeur de copie)


cercle::cercle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <cercle>" << endl;
#endif
} //----- Fin de cercle

cercle::cercle (long radius, point centre )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <cercle>" << endl;
#endif
    m_rayon = radius;
    m_centre = centre;


} //----- Fin de cercle


cercle::~cercle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <cercle>" << endl;
#endif
} //----- Fin de ~cercle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
