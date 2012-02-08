/*************************************************************************
                           ElementGeometrique  -  description
                             -------------------
    d�but                : 2 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <ElementGeometrique> (fichier ElementGeometrique.h) ------
#if ! defined ( ELEMENTGEOMETRIQUE_H_ )
#define ELEMENTGEOMETRIQUE_H_

//--------------------------------------------------- Interfaces utilis�es
#include <string>
#include"rectangle.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <ElementGeometrique>
//
//
//------------------------------------------------------------------------ 

class ElementGeometrique
{
//----------------------------------------------------------------- PUBLIC

//TODO lui ajouter les m�thodes appartient et translater en virtual, rendre la classe abstract

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	virtual bool Appartient(rectangle *selection);
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual void Translater ( long deltaX, long deltaY );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'op�rateurs
    ElementGeometrique & operator = ( const ElementGeometrique & unElementGeometrique );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ElementGeometrique ( const ElementGeometrique & unElementGeometrique );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ElementGeometrique ( );
    // Mode d'emploi :
    //
    // Contrat :
    //


    virtual ~ElementGeometrique ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s
    string m_commandeEntree;
};

//--------------------------- Autres d�finitions d�pendantes de <ElementGeometrique>

#endif // ELEMENTGEOMETRIQUE_H_

