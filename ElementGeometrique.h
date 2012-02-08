/*************************************************************************
                           ElementGeometrique  -  description
                             -------------------
    début                : 2 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <ElementGeometrique> (fichier ElementGeometrique.h) ------
#if ! defined ( ELEMENTGEOMETRIQUE_H_ )
#define ELEMENTGEOMETRIQUE_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ElementGeometrique>
//
//
//------------------------------------------------------------------------ 

class ElementGeometrique
{
//----------------------------------------------------------------- PUBLIC

//TODO lui ajouter les mŽthodes appartient et translater en virtual, rendre la classe abstract

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
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
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <ElementGeometrique>

#endif // ELEMENTGEOMETRIQUE_H_

