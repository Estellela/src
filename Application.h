/*************************************************************************
                           Application  -  description
                             -------------------
    d�but                : 4 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <Application> (fichier Application.h) ------
#if ! defined ( APPLICATION_H_ )
#define APPLICATION_H_

//--------------------------------------------------- Interfaces utilis�es
#include "ModeleGeometrique.h"
#include <deque>
#include "commande.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Application>
//
//
//------------------------------------------------------------------------ 

class Application
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
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

//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    ModeleGeometrique* selectionCourante;
    ModeleGeometrique* modeleElementsGeometrique;
    deque<Commande*> *listeDesCommandes;
    deque<Commande*>::iterator itDeque;

};

//--------------------------- Autres d�finitions d�pendantes de <Application>

#endif // APPLICATION_H_

