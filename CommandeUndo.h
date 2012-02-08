/*************************************************************************
                           CommandeUndo  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeUndo> (fichier CommandeUndo.h) ------
#if ! defined ( COMMANDEUNDO_H_ )
#define COMMANDEUNDO_H_

//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeUndo>
//
//
//------------------------------------------------------------------------ 

class CommandeUndo : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	virtual void Do ();
	virtual void Undo ();

//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    Commande* commandeAAnuler;

};

//--------------------------- Autres d�finitions d�pendantes de <CommandeUndo>

#endif // COMMANDEUNDO_H_

