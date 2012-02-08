/**************************************************************************
                           ligne  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Interface de la classe <ligne> (fichier ligne.h) ------
#if ! defined ( LIGNE_H_ )
#define LIGNE_H_

//--------------------------------------------------- Interfaces utilisées
#include "point.h"
#include "ElementGeometrique.h"
#include "rectangle.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ligne>
//
//
//------------------------------------------------------------------------ 

class ligne : public ElementGeometrique
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	virtual bool Appartient(rectangle *selection);
	// Mode d'emploi :
	//
	//Contrat :
	//

	virtual void Translater ( long deltaX, long deltaY);
	// Mode d'emploi :
	//
	// Contrat :
	//


//------------------------------------------------- Surcharge d'opérateurs
    ligne & operator = ( const ligne & unligne );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ligne ( const ligne & unligne );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ligne(string commandeEntree, point *pointA, point *pointB);
    // Mode d'emploi :
    //
    //Contrat :
    //

    virtual ~ligne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés$
    point *m_pointA;
    point *m_pointB;
};

//--------------------------- Autres définitions dépendantes de <ligne>

#endif // LIGNE_H_
