/*************************************************************************
                           CommandeCount  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeCount> (fichier CommandeCount.h) ------
#if ! defined ( CommandeCount_H_ )
#define CommandeCount_H_

//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"
#include <string>
#include <list>
#include "ElementGeometrique.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeCount>
//
//
//------------------------------------------------------------------------ 

class CommandeCount : public Commande
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
    CommandeCount & operator = ( const CommandeCount & unCommandeCount );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeCount ( const CommandeCount & unCommandeCount );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeCount(string commandeLu, list<ElementGeometrique*>* listeElementsGeometrique);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CommandeCount ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    list<ElementGeometrique*>* listeElementsGeometrique;
    list<ElementGeometrique*>::iterator itList;
};

//--------------------------- Autres d�finitions d�pendantes de <CommandeCount>

#endif // CommandeCount_H_

