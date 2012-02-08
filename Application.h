/*************************************************************************
                           Application  -  description
                             -------------------
    début                : 4 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <Application> (fichier Application.h) ------
#if ! defined ( APPLICATION_H_ )
#define APPLICATION_H_

//--------------------------------------------------- Interfaces utilisées
#include "ModeleGeometrique.h"
#include <deque>
#include "commande.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Application>
//
//
//------------------------------------------------------------------------ 

class Application
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	ModeleGeometrique* getSelectionCourante();
	ModeleGeometrique* getModeleElementsGeometrique();
	void AjouterCommande(Commande* commandeAAjouter);
	Commande* AnnulerCommande();
	// Annule la commande et la revoit
	deque<Commande*>* getListeDesCommandes();

//------------------------------------------------- Surcharge d'opérateurs
    Application & operator = ( const Application & unApplication );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Application ( const Application & unApplication );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Application ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Application ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    ModeleGeometrique* selectionCourante;
    ModeleGeometrique* modeleElementsGeometrique;
    deque<Commande*> *listeDesCommandes;
    deque<Commande*>::iterator itDeque;

};

//--------------------------- Autres définitions dépendantes de <Application>

#endif // APPLICATION_H_

