/*************************************************************************
                           CommandeUndo  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeUndo> (fichier CommandeUndo.h) ------
#if ! defined ( COMMANDEUNDO_H_ )
#define COMMANDEUNDO_H_

//--------------------------------------------------- Interfaces utilisées
#include "commande.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeUndo>
//
//
//------------------------------------------------------------------------ 

class CommandeUndo : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	virtual void Do ();
	virtual void Undo ();

//------------------------------------------------- Surcharge d'opérateurs
    CommandeUndo & operator = ( const CommandeUndo & unCommandeUndo );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeUndo ( const CommandeUndo & unCommandeUndo );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeUndo (string& commandeUtilisateur, Commande* commandeAAnnuler);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CommandeUndo ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    Commande* commandeAAnuler;

};

//--------------------------- Autres définitions dépendantes de <CommandeUndo>

#endif // COMMANDEUNDO_H_

