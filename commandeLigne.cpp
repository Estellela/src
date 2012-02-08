/*************************************************************************
                           CommandeLigne  -  description
                             -------------------
    d�but                : 1 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <CommandeLigne> (fichier CommandeLigne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "commandeLigne.h"
#include "ligne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type CommandeLigne::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode
void CommandeLigne::Do ()
{
	ligne* objetLigne = new ligne(x, y);
	modeleElementsGeometrique->AjouterElementGeometrique(objetLigne);
	selectionCourante->ClearList();
	selectionCourante->AjouterElementGeometrique(objetLigne);
	listElementGeometriqueDeLaCommande->AjouterElementGeometrique(objetLigne);
	cout << "ok "<< commandeUtilisateur<<endl;
}

void CommandeLigne::Undo()
{
	//TODO supprimer les �lements de modele geometrique avec la liste element de la commande (erase) puis faire

	list<ElementGeometrique*>::iterator it;
	it = listElementGeometriqueDeLaCommande->getListeElementsGeometrique()->begin(); //TODO v�rifier qu'on r�cup�re bien le premier
	modeleElementsGeometrique->SupprimerElementGeometrique(*it);

	listElementGeometriqueDeLaCommande->ClearList();

	//TODO rajouter un delete points dans le destructeur de ligne

}




//------------------------------------------------- Surcharge d'op�rateurs
CommandeLigne & CommandeLigne::operator = ( const CommandeLigne & unCommandeLigne )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeLigne::CommandeLigne (const CommandeLigne & unCommandeLigne ) : Commande (unCommandeLigne)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeLigne>" << endl;
#endif
} //----- Fin de CommandeLigne (constructeur de copie)


CommandeLigne::CommandeLigne (string& commandeUtilisateur, ModeleGeometrique* selectionCourante, ModeleGeometrique* modeleElementsGeometrique, point* x, point* y) : Commande(commandeUtilisateur)
// Algorithme :
//

{
	this->x=x;
	this->y=y;
	this->selectionCourante=selectionCourante;
	this->modeleElementsGeometrique=modeleElementsGeometrique;

#ifdef MAP
    cout << "Appel au constructeur de <CommandeLigne>" << endl;
#endif
} //----- Fin de CommandeLigne


CommandeLigne::~CommandeLigne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeLigne>" << endl;
#endif
} //----- Fin de ~CommandeLigne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

