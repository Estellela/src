/*************************************************************************
                           CommandeLigne  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeLigne> (fichier CommandeLigne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeLigne.h"
#include "ligne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeLigne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
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
	//TODO supprimer les Žlements de modele geometrique avec la liste element de la commande (erase) puis faire

	list<ElementGeometrique*>::iterator it;
	it = listElementGeometriqueDeLaCommande->getListeElementsGeometrique()->begin(); //TODO vŽrifier qu'on rŽcupre bien le premier
	modeleElementsGeometrique->SupprimerElementGeometrique(*it);

	listElementGeometriqueDeLaCommande->ClearList();

	//TODO rajouter un delete points dans le destructeur de ligne

}




//------------------------------------------------- Surcharge d'opérateurs
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

//----------------------------------------------------- Méthodes protégées

