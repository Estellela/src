/*************************************************************************
                           fichierLire  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Interface de la classe <fichierLire> (fichier fichierLire.h) ------
#if ! defined ( FICHIERLIRE_H_ )
#define FICHIERLIRE_H_

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

typedef enum  { CORRECT, VIDE, ERRONE } etatfichier;

//------------------------------------------------------------------------ 
// R�le de la classe <fichierLire>
//
//
//------------------------------------------------------------------------ 

class fichierLire
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	bool LireLigne (string& ligne);
	etatfichier EtatFichier ();

//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

    ifstream file;

};

//--------------------------- Autres d�finitions d�pendantes de <fichierLire>

#endif // FICHIERLIRE_H_

