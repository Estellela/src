/*************************************************************************
                           cercle  -  description
                             -------------------
    début                : 31 janv. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Interface de la classe <cercle> (fichier cercle.h) ------
#if ! defined ( CERCLE_H_ )
#define CERCLE_H_

//--------------------------------------------------- Interfaces utilisées
# include "point.h"
# include "rectangle.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <cercle>
//
//
//------------------------------------------------------------------------ 

class cercle
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool Appartient (rectangle selection);
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Translater(long deltaX,long deltaY);
    // Mode d'emploi :
    //
    // Contrat :
    //




//------------------------------------------------- Surcharge d'opérateurs
    //cercle & operator = ( const cercle & uncercle );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    cercle ( const cercle & uncercle );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    cercle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    cercle (long radius, point centre );
      // Mode d'emploi :
      //
      // Contrat :
      //


    virtual ~cercle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    point m_centre;
    unsigned long m_rayon;
};

//--------------------------- Autres définitions dépendantes de <cercle>

#endif // CERCLE_H_
