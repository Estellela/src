/*************************************************************************
                           Commande  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <Commande> (fichier Commande.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Commande.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Commande::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
ModeleGeometrique* Commande::getListElementGeometriqueDeLaCommande ()
{
	return listElementGeometriqueDeLaCommande;
}

//------------------------------------------------- Surcharge d'opérateurs
Commande & Commande::operator = ( const Commande & unCommande )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Commande::Commande ( const Commande & unCommande )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Commande>" << endl;
#endif
} //----- Fin de Commande (constructeur de copie)


Commande::Commande (string& commandeEntree)
// Algorithme :
//
{
	this->commandeUtilisateur = commandeEntree;
	this->listElementGeometriqueDeLaCommande = new ModeleGeometrique();

#ifdef MAP
    cout << "Appel au constructeur de <Commande>" << endl;
#endif
} //----- Fin de Commande


Commande::~Commande ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Commande>" << endl;
#endif
} //----- Fin de ~Commande


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

