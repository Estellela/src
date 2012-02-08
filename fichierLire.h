/*************************************************************************
                           fichierLire  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <fichierLire> (fichier fichierLire.h) ------
#if ! defined ( FICHIERLIRE_H_ )
#define FICHIERLIRE_H_

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

typedef enum  { CORRECT, VIDE, ERRONE } etatfichier;

//------------------------------------------------------------------------ 
// Rôle de la classe <fichierLire>
//
//
//------------------------------------------------------------------------ 

class fichierLire
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	bool LireLigne (string& ligne);
	etatfichier EtatFichier ();

//------------------------------------------------- Surcharge d'opérateurs
    fichierLire & operator = ( const fichierLire & unfichierLire );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    fichierLire ( const fichierLire & unfichierLire );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    fichierLire (  string nomdufichier );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~fichierLire ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    ifstream file;

};

//--------------------------- Autres définitions dépendantes de <fichierLire>

#endif // FICHIERLIRE_H_

