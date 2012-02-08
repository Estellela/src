/*************************************************************************
                           fichierEcrire  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <fichierEcrire> (fichier fichierEcrire.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <string>
#include <fstream>

//------------------------------------------------------ Include personnel
#include "fichierEcrire.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type fichierEcrire::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

bool fichierEcrire::save(string& nomDuFichier, string& texteAAJouter)
{

  ofstream fichier(nomDuFichier.c_str(), ios::out | ios::trunc);  //dŽclaration du flux et ouverture du fichier
  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	 // supprime tout ce qui peut exister dans le fichier

    if(fichier)  // si l'ouverture a rŽussi
    {
    		fichier << texteAAJouter;
            fichier.close();
            return true;
    }
    else
            cout << "# Erreur dans save"<<endl;
    return false;

}


//------------------------------------------------- Surcharge d'opérateurs
fichierEcrire & fichierEcrire::operator = ( const fichierEcrire & unfichierEcrire )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
fichierEcrire::fichierEcrire ( const fichierEcrire & unfichierEcrire )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <fichierEcrire>" << endl;
#endif
} //----- Fin de fichierEcrire (constructeur de copie)


fichierEcrire::fichierEcrire ( )
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au constructeur de <fichierEcrire>" << endl;
#endif
} //----- Fin de fichierEcrire


fichierEcrire::~fichierEcrire ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <fichierEcrire>" << endl;
#endif
} //----- Fin de ~fichierEcrire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

