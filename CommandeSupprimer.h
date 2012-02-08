/*************************************************************************
                           CommandeSupprimer  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeSupprimer> (fichier CommandeSupprimer.h) ------
#if ! defined ( COMMANDESUPPRIMER_H_ )
#define COMMANDESUPPRIMER_H_

//--------------------------------------------------- Interfaces utilisées
#include "commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeSupprimer>
//
//
//------------------------------------------------------------------------ 

class CommandeSupprimer : public Commande
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
    CommandeSupprimer & operator = ( const CommandeSupprimer & unCommandeSupprimer );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeSupprimer ( const CommandeSupprimer & unCommandeSupprimer );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeSupprimer(string& commandeUtilisateur,ModeleGeometrique* selectionCourante, ModeleGeometrique* modeleElementsGeometrique);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CommandeSupprimer ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    list<ElementGeometrique*>* sauvegardeElementsSupprimes;
    ModeleGeometrique* selectionCourante;
    ModeleGeometrique* modeleElementsGeometrique;
};

//--------------------------- Autres définitions dépendantes de <CommandeSupprimer>

#endif // COMMANDESUPPRIMER_H_

