/*************************************************************************
                           CommandeMove  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeMove> (fichier CommandeMove.h) ------
#if ! defined ( COMMANDEMOVE_H_ )
#define COMMANDEMOVE_H_

//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeMove>
//
//
//------------------------------------------------------------------------ 

class CommandeMove : public Commande
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s
    ModeleGeometrique* selectionCourante;
    long deltaX;
    long deltaY;
};

//--------------------------- Autres d�finitions d�pendantes de <CommandeMove>

#endif // COMMANDEMOVE_H_

