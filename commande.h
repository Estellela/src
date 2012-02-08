/*************************************************************************
                           Commande  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <Commande> (fichier Commande.h) ------
#if ! defined ( Commande_H_ )
#define Commande_H_

//--------------------------------------------------- Interfaces utilisées
#include "ElementGeometrique.h"
#include "ModeleGeometrique.h"
#include <list>
#include <string>


//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Commande>
//
//
//------------------------------------------------------------------------ 

class Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	virtual void Do ()=0;

	//TODO enlever tous les elements geometrique de la list
	virtual void Undo ()=0;

	ModeleGeometrique* getListElementGeometriqueDeLaCommande ();


//------------------------------------------------- Surcharge d'opérateurs
    Commande & operator = ( const Commande & unCommande );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Commande ( const Commande & unCommande );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Commande (string& commandeEntree);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Commande ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    string commandeUtilisateur;
	ModeleGeometrique* listElementGeometriqueDeLaCommande;

};

//--------------------------- Autres définitions dépendantes de <Commande>

#endif // Commande_H_

