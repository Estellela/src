/*************************************************************************
                           CommandeList  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <CommandeList> (fichier CommandeList.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeList.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type CommandeList::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
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

//----------------------------------------------------- M�thodes prot�g�es

