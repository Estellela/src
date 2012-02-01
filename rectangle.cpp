/*************************************************************************
                           rectangle  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Réalisation de la classe <rectangle> (fichier rectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "rectangle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type rectangle::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
//TODO implementer appaartient rectangle
bool rectangle::Appartient(rectangle selection)
// Algorithme :
//
{
} //----- Fin de Appartient

void rectangle::Translater(long deltaX, long deltaY)
// Algorithme :
//
{
	m_pointA.Translater(deltaX,deltaY);
	m_pointB.Translater(deltaX,deltaY);

}//----- Fin de Translater



//------------------------------------------------- Surcharge d'opérateurs
rectangle & rectangle::operator = ( const rectangle & unrectangle )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
rectangle::rectangle ( const rectangle & unrectangle )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <rectangle>" << endl;
#endif
} //----- Fin de rectangle (constructeur de copie)


rectangle::rectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <rectangle>" << endl;
#endif
} //----- Fin de rectangle

rectangle::rectangle (point a , point b  )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <rectangle>" << endl;
#endif
    m_pointA = a;
    m_pointB = b;
} //----- Fin de rectangle


rectangle::~rectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <rectangle>" << endl;
#endif
} //----- Fin de ~rectangle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
