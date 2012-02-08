/*************************************************************************
                           CommandeList  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeList> (fichier CommandeList.h) ------
#if ! defined ( COMMANDELIST_H_ )
#define COMMANDELIST_H_

//--------------------------------------------------- Interfaces utilisées
#include "commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeList>
//
//
//------------------------------------------------------------------------ 

class CommandeList : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	//TODO : a faire

//------------------------------------------------- Surcharge d'opérateurs
    CommandeList & operator = ( const CommandeList & unCommandeList );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeList ( const CommandeList & unCommandeList );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeList (string& commandeUtilisateur );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CommandeList ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <CommandeList>

#endif // COMMANDELIST_H_

