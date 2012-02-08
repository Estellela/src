/*************************************************************************
                           point  -  description
                             -------------------
    début                : 1 févr. 2012
    copyright            : (C) 2012 par estelle
*************************************************************************/

//---------- Interface de la classe <point> (fichier point.h) ------
#if ! defined ( POINT_H_ )
#define POINT_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <point>
//
//
//------------------------------------------------------------------------ 

class point
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	//bool Appartient(rectangle *selection);
	// Mode d'emploi :
	//
	// Contrat :
	//

	long GetX ();
	// Mode d'emploi :
	//
	// Contrat :
	//


	long GetY ();
	// Mode d'emploi :
	//
	// Contrat :
	//
    void Translater( long deltaX, long deltaY );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    point & operator = ( const point & unpoint );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    point ( const point & unpoint );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    point ();
       // Mode d'emploi :
       //
       // Contrat :
       //


    point (long x1, long y1 );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~point ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    long m_x;
    long m_y;

};

//--------------------------- Autres définitions dépendantes de <point>

#endif // POINT_H_
