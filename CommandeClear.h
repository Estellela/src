/*************************************************************************
                           CommandeClear  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeClear> (fichier CommandeClear.h) ------
#if ! defined ( COMMANDECLEAR_H_ )
#define COMMANDECLEAR_H_

//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeClear>
//
//
//------------------------------------------------------------------------ 

class CommandeClear : public Commande
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    ModeleGeometrique* selectionCourante;
    ModeleGeometrique* modeleElementsGeometrique;
    list<ElementGeometrique*>* sauvegardeDuModele;


};

//--------------------------- Autres d�finitions d�pendantes de <CommandeClear>

#endif // COMMANDECLEAR_H_

