/*************************************************************************
                           fichierEcrire  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <fichierEcrire> (fichier fichierEcrire.h) ------
#if ! defined ( FICHIERECRIRE_H_ )
#define FICHIERECRIRE_H_
#include <string>
using namespace std;

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <fichierEcrire>
//
//
//------------------------------------------------------------------------ 

class fichierEcrire
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	bool save(string& nomDuFichier, string& texteAAJouter);


//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s



};

//--------------------------- Autres d�finitions d�pendantes de <fichierEcrire>

#endif // FICHIERECRIRE_H_

