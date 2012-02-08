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
point rectangle::GetPointA()
// Algoritme :
//
{
	return *m_pointA;
} //----- Fin GetPointA

point rectangle::GetPointB()
// Algoritme :
//
{
	return *m_pointB;
} //----- Fin GetPointB

bool rectangle::Appartient(rectangle *selection)
// Algorithme :
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

void rectangle::Translater(long deltaX, long deltaY)
// Algorithme :
//
{
	m_pointA->Translater(deltaX,deltaY);
	m_pointB->Translater(deltaX,deltaY);

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
   // m_pointA = unrectangle.m_pointA;
//    m_pointB = unrectangle.m_pointB;

} //----- Fin de rectangle (constructeur de copie)


rectangle::rectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <rectangle>" << endl;
#endif
} //----- Fin de rectangle

rectangle::rectangle (point *a , point *b  )
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
    delete(m_pointA);
    delete(m_pointB);
} //----- Fin de ~rectangle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
