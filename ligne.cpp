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

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ligne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
bool ligne::Appartient(rectangle *selection)
//Algorithme :
//
{
	bool pointAAppartient = false;
	bool pointBAppartient = false;
	bool appartient = false;

	long x1 = selection->GetPointA().GetX();
	long y1 = selection->GetPointA().GetY();
	long x2 = selection->GetPointB().GetX();
	long y2 = selection->GetPointB().GetY();

	// test si le point A est dans le rectangle de selection
	if((x1 <= m_pointA->GetX()) && (m_pointA->GetX() <= x2))
	{
		if ((y1 < m_pointA->GetY()) && (m_pointA->GetY() < y2))
		{
			pointAAppartient = true;
		}
	}
	else if ((x2 < m_pointA->GetX()) && (m_pointA->GetX() < x1))
	{
		if ((y2 < m_pointA->GetY()) && (m_pointA->GetY() < y1))
		{
			pointAAppartient = true;
		}
	}

	// test si le point B est dans le rectangle de selection
	if((x1 < m_pointB->GetX()) && (m_pointB->GetX() < x2))
	{
		if ((y1 < m_pointB->GetY()) && (m_pointB->GetY() < y2))
		{
			pointBAppartient = true;
		}
	}
	else if ((x2 < m_pointB->GetX()) && (m_pointB->GetX() < x1))
	{
		if ((y2 < m_pointB->GetY()) && (m_pointB->GetY() < y1))
		{
			pointBAppartient = true;
		}
	}

	// test si les 2 points appartienent au rectangle de selection
	if ((pointAAppartient) && (pointBAppartient))
	{
		appartient = true;
	}
	return appartient;
} //----- Fin de Appartient


void ligne::Translater(long deltaX, long deltaY)
//Algorithme :
//
{
	m_pointA->Translater(deltaX, deltaY);
	m_pointB->Translater(deltaX,deltaY);
} //----- Fin de Translater


//------------------------------------------------- Surcharge d'opérateurs
ligne & ligne::operator = ( const ligne & unligne )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ligne::ligne ( const ligne & unligne ) : ElementGeometrique(unligne)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ligne>" << endl;
#endif
} //----- Fin de ligne (constructeur de copie)



ligne::ligne (string commandeEntree, point *pointA,point *pointB) : ElementGeometrique(commandeEntree)
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au constructeur de <ligne>" << endl;
#endif
    m_pointA = pointA;
    m_pointB = pointB;
} //----- Fin de ligne



ligne::~ligne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ligne>" << endl;
#endif
    delete (m_pointA);
    delete (m_pointB);

} //----- Fin de ~ligne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
