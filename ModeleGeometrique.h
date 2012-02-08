/*************************************************************************
                           ModeleGeometrique  -  description
                             -------------------
    d�but                : 2 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <ModeleGeometrique> (fichier ModeleGeometrique.h) ------
#if ! defined ( MODELEGEOMETRIQUE_H_ )
#define MODELEGEOMETRIQUE_H_

//--------------------------------------------------- Interfaces utilis�es
#include "ElementGeometrique.h"
#include <list>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <ModeleGeometrique>
//
//
//------------------------------------------------------------------------ 

class ModeleGeometrique
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	//TODO g�rer le cas o� la liste est pleine ou erreur ajout dans la liste
	void AjouterElementGeometrique (ElementGeometrique* elementAAJouter);
	void SupprimerElementGeometrique (ElementGeometrique* elementASupprimer);
	void ClearList();
	list<ElementGeometrique*>* getListeElementsGeometrique();

//------------------------------------------------- Surcharge d'op�rateurs
    ModeleGeometrique & operator = ( const ModeleGeometrique & unModeleGeometrique );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ModeleGeometrique ( const ModeleGeometrique & unModeleGeometrique );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ModeleGeometrique ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ModeleGeometrique ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s


      list<ElementGeometrique*>* listeElementsGeometrique;

};

//--------------------------- Autres d�finitions d�pendantes de <ModeleGeometrique>

#endif // MODELEGEOMETRIQUE_H_

