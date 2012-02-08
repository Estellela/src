/*************************************************************************
                           ModeleGeometrique  -  description
                             -------------------
    dÈbut                : 2 févr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <ModeleGeometrique> (fichier ModeleGeometrique.h) ------
#if ! defined ( MODELEGEOMETRIQUE_H_ )
#define MODELEGEOMETRIQUE_H_

//--------------------------------------------------- Interfaces utilisÈes
#include "ElementGeometrique.h"
#include <list>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// RÙle de la classe <ModeleGeometrique>
//
//
//------------------------------------------------------------------------ 

class ModeleGeometrique
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- MÈthodes publiques
    // type MÈthode ( liste des paramËtres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	//TODO gérer le cas où la liste est pleine ou erreur ajout dans la liste
	void AjouterElementGeometrique (ElementGeometrique* elementAAJouter);
	void SupprimerElementGeometrique (ElementGeometrique* elementASupprimer);
	void ClearList();
	list<ElementGeometrique*>* getListeElementsGeometrique();

//------------------------------------------------- Surcharge d'opÈrateurs
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
//----------------------------------------------------- MÈthodes protÈgÈes

//----------------------------------------------------- Attributs protÈgÈs


      list<ElementGeometrique*>* listeElementsGeometrique;

};

//--------------------------- Autres dÈfinitions dÈpendantes de <ModeleGeometrique>

#endif // MODELEGEOMETRIQUE_H_

