/*************************************************************************
                           Commande  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <Commande> (fichier Commande.h) ------
#if ! defined ( Commande_H_ )
#define Commande_H_

//--------------------------------------------------- Interfaces utilis�es
#include "ElementGeometrique.h"
#include "ModeleGeometrique.h"
#include <list>
#include <string>


//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Commande>
//
//
//------------------------------------------------------------------------ 

class Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	virtual void Do ()=0;

	//TODO enlever tous les elements geometrique de la list
	virtual void Undo ()=0;

	ModeleGeometrique* getListElementGeometriqueDeLaCommande ();


//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    string commandeUtilisateur;
	ModeleGeometrique* listElementGeometriqueDeLaCommande;

};

//--------------------------- Autres d�finitions d�pendantes de <Commande>

#endif // Commande_H_

