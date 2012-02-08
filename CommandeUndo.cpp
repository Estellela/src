/*************************************************************************
                           CommandeUndo  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeUndo> (fichier CommandeUndo.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeUndo.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeUndo::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void CommandeUndo::Do ()
{
  if (commandeAAnuler!=NULL)
  {
	  commandeAAnuler->Undo();
	  cout << "OK UNDO"<<endl;
  }
  else
  {
	  cout << "#ERR UNDO"<<endl;
  }

}
void CommandeUndo::Undo ()
{
// TODO : comment faire ?
}



//------------------------------------------------- Surcharge d'opérateurs
CommandeUndo & CommandeUndo::operator = ( const CommandeUndo & unCommandeUndo )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeUndo::CommandeUndo ( const CommandeUndo & unCommandeUndo ) : Commande (unCommandeUndo)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeUndo>" << endl;
#endif
} //----- Fin de CommandeUndo (constructeur de copie)


CommandeUndo::CommandeUndo (string& commandeUtilisateur, Commande* commandeAAnnuler) : Commande(commandeUtilisateur)
// Algorithme :
//
{
	this->commandeAAnuler=commandeAAnnuler;
#ifdef MAP
    cout << "Appel au constructeur de <CommandeUndo>" << endl;
#endif
} //----- Fin de CommandeUndo


CommandeUndo::~CommandeUndo ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeUndo>" << endl;
#endif
} //----- Fin de ~CommandeUndo


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

