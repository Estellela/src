/*************************************************************************
                           polyligne  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Réalisation de la classe <polyligne> (fichier polyligne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <list>

//------------------------------------------------------ Include personnel
#include "polyligne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type polyligne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
//void polyligne::Translater(long deltaX, long deltaY)
// Algorithme :
//
//{
//}

//------------------------------------------------- Surcharge d'opérateurs
polyligne & polyligne::operator = ( const polyligne & unpolyligne )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
polyligne::polyligne ( const polyligne & unpolyligne ) : ElementGeometrique(unpolyligne)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <polyligne>" << endl;
#endif
} //----- Fin de polyligne (constructeur de copie)


polyligne::polyligne ( ) : ElementGeometrique()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <polyligne>" << endl;
#endif
} //----- Fin de polyligne

polyligne::polyligne (list<point> *listeDesPoints)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <polyligne>" << endl;
#endif

    m_listeDesPoints = listeDesPoints;

} //----- Fin de polyligne


polyligne::~polyligne ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <polyligne>" << endl;
#endif
    delete (m_listeDesPoints);
} //----- Fin de ~polyligne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
