/*************************************************************************
                           CommandeMove  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeMove> (fichier CommandeMove.h) ------
#if ! defined ( COMMANDEMOVE_H_ )
#define COMMANDEMOVE_H_

//--------------------------------------------------- Interfaces utilisées
#include "commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeMove>
//
//
//------------------------------------------------------------------------ 

class CommandeMove : public Commande
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
    CommandeMove & operator = ( const CommandeMove & unCommandeMove );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeMove ( const CommandeMove & unCommandeMove );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeMove (string& commandeUtilisateur,ModeleGeometrique* selectionCourante, long deltaX, long deltaY);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CommandeMove ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    ModeleGeometrique* selectionCourante;
    long deltaX;
    long deltaY;
};

//--------------------------- Autres définitions dépendantes de <CommandeMove>

#endif // COMMANDEMOVE_H_

