/*************************************************************************
                           polyligne  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Interface de la classe <polyligne> (fichier polyligne.h) ------
#if ! defined ( POLYLIGNE_H_ )
#define POLYLIGNE_H_

//--------------------------------------------------- Interfaces utilisées
#include "point.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Type
struct listeDePoint
{
	list(point);
};
//------------------------------------------------------------------------ 
// Rôle de la classe <polyligne>
//
//
//------------------------------------------------------------------------ 

class polyligne
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    polyligne & operator = ( const polyligne & unpolyligne );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    polyligne ( const polyligne & unpolyligne );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    polyligne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    polyligne (listeDesPoints);
	// Mode d'emploi :
	//
	// Contrat :
	//


    virtual ~polyligne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    listeDePoint m_listedDesPoints;
};

//--------------------------- Autres définitions dépendantes de <polyligne>

#endif // POLYLIGNE_H_
