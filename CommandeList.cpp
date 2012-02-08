/*************************************************************************
                           CommandeList  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeList> (fichier CommandeList.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeList.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeList::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CommandeList & CommandeList::operator = ( const CommandeList & unCommandeList )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeList::CommandeList ( const CommandeList & unCommandeList ) : Commande(unCommandeList)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeList>" << endl;
#endif
} //----- Fin de CommandeList (constructeur de copie)


CommandeList::CommandeList (string& commandeUtilisateur) : Commande(commandeUtilisateur)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CommandeList>" << endl;
#endif
} //----- Fin de CommandeList


CommandeList::~CommandeList ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeList>" << endl;
#endif
} //----- Fin de ~CommandeList


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

