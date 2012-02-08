/*************************************************************************
                           fichierEcrire  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <fichierEcrire> (fichier fichierEcrire.h) ------
#if ! defined ( FICHIERECRIRE_H_ )
#define FICHIERECRIRE_H_
#include <string>
using namespace std;

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <fichierEcrire>
//
//
//------------------------------------------------------------------------ 

class fichierEcrire
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	bool save(string& nomDuFichier, string& texteAAJouter);


//------------------------------------------------- Surcharge d'opérateurs
    fichierEcrire & operator = ( const fichierEcrire & unfichierEcrire );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    fichierEcrire ( const fichierEcrire & unfichierEcrire );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    fichierEcrire ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~fichierEcrire ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés



};

//--------------------------- Autres définitions dépendantes de <fichierEcrire>

#endif // FICHIERECRIRE_H_

