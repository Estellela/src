/*************************************************************************
                           ElementGeometrique  -  description
                             -------------------
    d�but                : 2 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <ElementGeometrique> (fichier ElementGeometrique.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include "ElementGeometrique.h"

#include <iostream>

//------------------------------------------------------ Include personnel
void ElementGeometrique::Translater(long deltaX, long deltaY)
// Algorithme :
//
{
}
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type ElementGeometrique::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode

//----- Fin de M�thode

bool ElementGeometrique::Appartient(rectangle *selection )
// Algorithme :
//
{
} //----- Fin de M�thode

//------------------------------------------------- Surcharge d'op�rateurs
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

ElementGeometrique::ElementGeometrique ( string commandeEntree)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ElementGeometrique>" << endl;
#endif
    m_commandeEntree = commandeEntree;
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

//----------------------------------------------------- M�thodes prot�g�es

