/*************************************************************************
                           Commande  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <Commande> (fichier Commande.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "commande.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type Commande::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode
ModeleGeometrique* Commande::getListElementGeometriqueDeLaCommande ()
{
	return listElementGeometriqueDeLaCommande;
}

//------------------------------------------------- Surcharge d'op�rateurs
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

//----------------------------------------------------- M�thodes prot�g�es

