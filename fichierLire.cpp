/*************************************************************************
                           fichierLire  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <fichierLire> (fichier fichierLire.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <fstream>
//#include <ifstream>
#include <string>
using namespace std;

//------------------------------------------------------ Include personnel
#include "fichierLire.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type fichierLire::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

bool fichierLire::LireLigne (string& ligne)
//Algorithme :
// Si la ligne commence par un # on ne s'en occupe pas
{
	ligne = "";

	do
	{
		getline(file, ligne);
	}while((ligne[0]=='#') &&(!file.eof()));  // On ne prend pas une ligne qui commence par #

	if ((file.eof()) && (ligne == ""))
	{
		return false;
	}

	return true;

}

etatfichier fichierLire::EtatFichier()
// Algorithme :
//
{ //TODO : tester dans un nouveau projet pour tester juste le type enum
/*
	if (file.fail())
		{
			return ERRONE;
		}
	else if (file.peek()==-1)
	{
		return VIDE;
	}
	else
	{
		return CORRECT;
	}
	return CORRECT;
*/
}

//------------------------------------------------- Surcharge d'opérateurs
fichierLire & fichierLire::operator = ( const fichierLire & unfichierLire )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
fichierLire::fichierLire ( const fichierLire & unfichierLire )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <fichierLire>" << endl;
#endif
} //----- Fin de fichierLire (constructeur de copie)


fichierLire::fichierLire ( string nomdufichier )
// Algorithme :
//
{

	file.open(nomdufichier.c_str());
#ifdef MAP
    cout << "Appel au constructeur de <fichierLire>" << endl;
#endif
} //----- Fin de fichierLire


fichierLire::~fichierLire ( )
// Algorithme :
//
{
	file.close();
#ifdef MAP
    cout << "Appel au destructeur de <fichierLire>" << endl;
#endif
} //----- Fin de ~fichierLire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

