/*************************************************************************
                           CommandeSupprimer  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeSupprimer> (fichier CommandeSupprimer.h) ------
#if ! defined ( COMMANDESUPPRIMER_H_ )
#define COMMANDESUPPRIMER_H_

//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeSupprimer>
//
//
//------------------------------------------------------------------------ 

class CommandeSupprimer : public Commande
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s
    list<ElementGeometrique*>* sauvegardeElementsSupprimes;
    ModeleGeometrique* selectionCourante;
    ModeleGeometrique* modeleElementsGeometrique;
};

//--------------------------- Autres d�finitions d�pendantes de <CommandeSupprimer>

#endif // COMMANDESUPPRIMER_H_

