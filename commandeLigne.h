/*************************************************************************
                           CommandeLigne  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <CommandeLigne> (fichier CommandeLigne.h) ------
#if ! defined ( CommandeLigne_H_ )
#define CommandeLigne_H_


//--------------------------------------------------- Interfaces utilis�es
#include "commande.h"
#include "point.h"
#include "ligne.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CommandeLigne>
//
//
//------------------------------------------------------------------------ 

class CommandeLigne : public Commande
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

   point* x;
   point* y;
   ModeleGeometrique* selectionCourante;
   ModeleGeometrique* modeleElementsGeometrique;



};

//--------------------------- Autres d�finitions d�pendantes de <CommandeLigne>

#endif // CommandeLigne_H_

