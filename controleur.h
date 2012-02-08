/*************************************************************************
                           controleur  -  description
                             -------------------
    dÈbut                : 1 févr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <controleur> (fichier controleur.h) ------
#if ! defined ( CONTROLEUR_H_ )
#define CONTROLEUR_H_
#include "commande.h"

//--------------------------------------------------- Interfaces utilisÈes
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
// RÙle de la classe <controleur>
//
//
//------------------------------------------------------------------------ 

class controleur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- MÈthodes publiques
    // type MÈthode ( liste des paramËtres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void GetCommande(string& commandeLu);
    // Mode d'emploi :
    // Récupère la commande tapée au clavier
    // Contrat :
    //

	void TraitementCommande(string& commandeLu);
    // Mode d'emploi :
    // Prend la commande tapée au clavier et file la classe commande associée
    // Contrat :
    //




//------------------------------------------------- Surcharge d'opÈrateurs
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
//----------------------------------------------------- MÈthodes protÈgÈes

//----------------------------------------------------- Attributs protÈgÈs

    Application* monApplication;

};

//--------------------------- Autres dÈfinitions dÈpendantes de <controleur>

#endif // CONTROLEUR_H_

