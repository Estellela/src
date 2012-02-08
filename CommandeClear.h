/*************************************************************************
                           CommandeClear  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeClear> (fichier CommandeClear.h) ------
#if ! defined ( COMMANDECLEAR_H_ )
#define COMMANDECLEAR_H_

//--------------------------------------------------- Interfaces utilisées
#include "commande.h"
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeClear>
//
//
//------------------------------------------------------------------------ 

class CommandeClear : public Commande
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
    CommandeClear & operator = ( const CommandeClear & unCommandeClear );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeClear ( const CommandeClear & unCommandeClear );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeClear(string& commandeUtilisateur,ModeleGeometrique* selectionCourante, ModeleGeometrique* modeleElementsGeometrique) ;
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CommandeClear ( );
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
    list<ElementGeometrique*>* sauvegardeDuModele;


};

//--------------------------- Autres définitions dépendantes de <CommandeClear>

#endif // COMMANDECLEAR_H_

