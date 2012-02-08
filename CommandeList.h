/*************************************************************************
                           CommandeList  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeList> (fichier CommandeList.h) ------
#if ! defined ( COMMANDELIST_H_ )
#define COMMANDELIST_H_

//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeList>
//
//
//------------------------------------------------------------------------ 

class CommandeList : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	//TODO : a faire

//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <CommandeList>

#endif // COMMANDELIST_H_

