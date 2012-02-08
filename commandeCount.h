/*************************************************************************
                           CommandeCount  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeCount> (fichier CommandeCount.h) ------
#if ! defined ( CommandeCount_H_ )
#define CommandeCount_H_

//--------------------------------------------------- Interfaces utilisées
#include "commande.h"
#include <string>
#include <list>
#include "ElementGeometrique.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeCount>
//
//
//------------------------------------------------------------------------ 

class CommandeCount : public Commande
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
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    list<ElementGeometrique*>* listeElementsGeometrique;
    list<ElementGeometrique*>::iterator itList;
};

//--------------------------- Autres définitions dépendantes de <CommandeCount>

#endif // CommandeCount_H_

