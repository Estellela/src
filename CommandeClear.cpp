/*************************************************************************
                           CommandeClear  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeClear> (fichier CommandeClear.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeClear.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeClear::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void CommandeClear::Do ()
{
	sauvegardeDuModele->clear();
	list<ElementGeometrique*>::iterator it;
	list<ElementGeometrique*>* modele= modeleElementsGeometrique->getListeElementsGeometrique();
	it = modele->begin();
	while (it!=modele->end())
	{
		sauvegardeDuModele->push_back(*it); //on sauvegarde le modle actuel
		it++;
	}

	selectionCourante->ClearList();
	modeleElementsGeometrique->ClearList();
	cout << "OK CLEAR" <<endl;


}
void CommandeClear::Undo ()
{
	list<ElementGeometrique*>::iterator it;
	it = sauvegardeDuModele->begin();
	selectionCourante->ClearList();
	while (it!=sauvegardeDuModele->end())
	{
		selectionCourante->AjouterElementGeometrique(*it);
		modeleElementsGeometrique->AjouterElementGeometrique(*it);
		it++;
	}

	sauvegardeDuModele->clear();

}


//------------------------------------------------- Surcharge d'opérateurs
CommandeClear & CommandeClear::operator = ( const CommandeClear & unCommandeClear )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeClear::CommandeClear ( const CommandeClear & unCommandeClear ) : Commande (unCommandeClear)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeClear>" << endl;
#endif
} //----- Fin de CommandeClear (constructeur de copie)


CommandeClear::CommandeClear(string& commandeUtilisateur,ModeleGeometrique* selectionCourante, ModeleGeometrique* modeleElementsGeometrique) : Commande (commandeUtilisateur)
// Algorithme :
//
{
	this->selectionCourante=selectionCourante;
	this->modeleElementsGeometrique=modeleElementsGeometrique;
	this->sauvegardeDuModele= new list<ElementGeometrique*>();
#ifdef MAP
    cout << "Appel au constructeur de <CommandeClear>" << endl;
#endif
} //----- Fin de CommandeClear


CommandeClear::~CommandeClear ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeClear>" << endl;
#endif
} //----- Fin de ~CommandeClear


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

