/*************************************************************************
                           point  -  description
                             -------------------
    début                : 1 févr. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Réalisation de la classe <point> (fichier point.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "point.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type point::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


long point::GetX()
// Algorithme :
//
{
	return m_x;

} //----- Fin de GetX

long point::GetY()
// Algorithme :
//
{
	return m_y;

} //----- Fin de GetY


void point::Translater( long deltaX, long deltaY )
// Algorithme :
//
{  //TODO : tester l'overflow
	m_x += deltaX;
	m_y += deltaY;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
point & point::operator = ( const point & unpoint )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
point::point ( const point & unpoint )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <point>" << endl;
#endif
    m_x = unpoint.m_x;
    m_y = unpoint.m_y;

} //----- Fin de point (constructeur de copie)

point::point ( long x1, long y1 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <point>" << endl;
#endif
    m_x = x1;
    m_y = y1;

} //----- Fin de point

point::point ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <point>" << endl;
#endif
} //----- Fin de point




point::~point ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <point>" << endl;
#endif

} //----- Fin de ~point


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
