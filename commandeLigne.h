/*************************************************************************
                           CommandeLigne  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeLigne> (fichier CommandeLigne.h) ------
#if ! defined ( CommandeLigne_H_ )
#define CommandeLigne_H_


//--------------------------------------------------- Interfaces utilisées
#include "commande.h"
#include "point.h"
#include "ligne.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CommandeLigne>
//
//
//------------------------------------------------------------------------ 

class CommandeLigne : public Commande
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
    CommandeLigne & operator = ( const CommandeLigne & unCommandeLigne );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CommandeLigne ( const CommandeLigne & unCommandeLigne );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CommandeLigne  (string& commandeUtilisateur, ModeleGeometrique* selectionCourante, ModeleGeometrique* modeleElementsGeometrique, point* x, point* y);
    //
    // Contrat :
    //

    virtual ~CommandeLigne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

   point* x;
   point* y;
   ModeleGeometrique* selectionCourante;
   ModeleGeometrique* modeleElementsGeometrique;



};

//--------------------------- Autres définitions dépendantes de <CommandeLigne>

#endif // CommandeLigne_H_

