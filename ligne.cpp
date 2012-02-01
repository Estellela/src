/*************************************************************************
                           ligne  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Réalisation de la classe <ligne> (fichier ligne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
//------------------------------------------------------ Include personnel
#include "ligne.h"
#include "point.h"
#include "rectangle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ligne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//TODO implementer appartient ligne
bool ligne::Appartient ( rectangle selection)
// Algorithme :
//
{
} //----- Fin de Méthode

void ligne::Translater(long deltaX, long int deltaY)
// Algorithme :
//
{
	m_pointA.Translater(deltaX,deltaY);
	m_pointB.Translater(deltaX,deltaY);
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
ligne & ligne::operator = ( const ligne & unligne )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ligne::ligne ( const ligne & unligne )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ligne>" << endl;
#endif
} //----- Fin de ligne (constructeur de copie)


ligne::ligne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ligne>" << endl;
#endif
} //----- Fin de ligne

ligne::ligne (point a, point b)
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au constructeur de <ligne>" << endl;
#endif
    m_pointA = a;
    m_pointB = b;
} //----- Fin de ligne



ligne::~ligne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ligne>" << endl;
#endif
} //----- Fin de ~ligne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
