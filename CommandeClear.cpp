/*************************************************************************
                           CommandeClear  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <CommandeClear> (fichier CommandeClear.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeClear.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type CommandeClear::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode
void CommandeClear::Do ()
{
	sauvegardeDuModele->clear();
	list<ElementGeometrique*>::iterator it;
	list<ElementGeometrique*>* modele= modeleElementsGeometrique->getListeElementsGeometrique();
	it = modele->begin();
	while (it!=modele->end())
	{
		sauvegardeDuModele->push_back(*it); //on sauvegarde le mod�le actuel
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


//------------------------------------------------- Surcharge d'op�rateurs
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

//----------------------------------------------------- M�thodes prot�g�es

