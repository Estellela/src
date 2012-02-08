/*************************************************************************
                           CommandeUndo  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <CommandeUndo> (fichier CommandeUndo.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeUndo.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type CommandeUndo::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode
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



//------------------------------------------------- Surcharge d'op�rateurs
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

//----------------------------------------------------- M�thodes prot�g�es

