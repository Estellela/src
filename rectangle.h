/*************************************************************************
                           rectangle  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Interface de la classe <rectangle> (fichier rectangle.h) ------
#if ! defined ( RECTANGLE_H_ )
#define RECTANGLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "point.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <rectangle>
//
//
//------------------------------------------------------------------------ 

class rectangle
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	 bool Appartient ( rectangle selection );
	// Mode d'emploi :
	//
	// Contrat :
	//

	 void Translater(long deltaX, long deltaY);
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------- Surcharge d'opérateurs
    rectangle & operator = ( const rectangle & unrectangle );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    rectangle ( const rectangle & unrectangle );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    rectangle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    rectangle (point a, point b );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~rectangle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    point m_pointA;
    point m_pointB;

};

//--------------------------- Autres définitions dépendantes de <rectangle>

#endif // RECTANGLE_H_
