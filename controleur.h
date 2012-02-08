/*************************************************************************
                           controleur  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <controleur> (fichier controleur.h) ------
#if ! defined ( CONTROLEUR_H_ )
#define CONTROLEUR_H_
#include "commande.h"

//--------------------------------------------------- Interfaces utilis�es
#include "point.h"
#include "commandeLigne.h"
#include "commandeCount.h"
#include "CommandeUndo.h"
#include "CommandeClear.h"
#include "ElementGeometrique.h"
#include "ModeleGeometrique.h"
#include "Application.h"
#include <list>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <controleur>
//
//
//------------------------------------------------------------------------ 

class controleur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void GetCommande(string& commandeLu);
    // Mode d'emploi :
    // R�cup�re la commande tap�e au clavier
    // Contrat :
    //

	void TraitementCommande(string& commandeLu);
    // Mode d'emploi :
    // Prend la commande tap�e au clavier et file la classe commande associ�e
    // Contrat :
    //




//------------------------------------------------- Surcharge d'op�rateurs
    controleur & operator = ( const controleur & uncontroleur );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    controleur ( const controleur & uncontroleur );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    controleur (Application* application);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~controleur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    Application* monApplication;

};

//--------------------------- Autres d�finitions d�pendantes de <controleur>

#endif // CONTROLEUR_H_

