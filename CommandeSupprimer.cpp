/*************************************************************************
                           CommandeSupprimer  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeSupprimer> (fichier CommandeSupprimer.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeSupprimer.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeSupprimer::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
//TODO a tester, ˆ priori c'est comme clear
void CommandeSupprimer::Do ()
{
	sauvegardeElementsSupprimes->clear();
	long nbObjets = 0;
	list<ElementGeometrique*>::iterator it;
	list<ElementGeometrique*>* selectionCouranteAparcourir= selectionCourante->getListeElementsGeometrique();
	it = selectionCouranteAparcourir->begin();
	while (it!=selectionCouranteAparcourir->end())
	{
		nbObjets++;
		sauvegardeElementsSupprimes->push_back(*it); //on sauvegarde le modle actuel
		modeleElementsGeometrique->SupprimerElementGeometrique(*it);
		it++;
	}
	selectionCourante->ClearList();
	cout << nbObjets <<endl;

}
void CommandeSupprimer::Undo ()
{
	list<ElementGeometrique*>::iterator it;
	it = sauvegardeElementsSupprimes->begin();
	selectionCourante->ClearList();
	while (it!=sauvegardeElementsSupprimes->end())
	{
		selectionCourante->AjouterElementGeometrique(*it);
		modeleElementsGeometrique->AjouterElementGeometrique(*it);
		it++;
	}
	sauvegardeElementsSupprimes->clear();

}

//------------------------------------------------- Surcharge d'opérateurs
CommandeSupprimer & CommandeSupprimer::operator = ( const CommandeSupprimer & unCommandeSupprimer )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeSupprimer::CommandeSupprimer ( const CommandeSupprimer & unCommandeSupprimer ) : Commande(unCommandeSupprimer)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeSupprimer>" << endl;
#endif
} //----- Fin de CommandeSupprimer (constructeur de copie)


CommandeSupprimer::CommandeSupprimer(string& commandeUtilisateur,ModeleGeometrique* selectionCourante, ModeleGeometrique* modeleElementsGeometrique) : Commande (commandeUtilisateur)
// Algorithme :
//
{
	this->selectionCourante=selectionCourante;
	this->modeleElementsGeometrique=modeleElementsGeometrique;
	this->sauvegardeElementsSupprimes= new list<ElementGeometrique*>();

#ifdef MAP
    cout << "Appel au constructeur de <CommandeSupprimer>" << endl;
#endif
} //----- Fin de CommandeSupprimer


CommandeSupprimer::~CommandeSupprimer ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeSupprimer>" << endl;
#endif
} //----- Fin de ~CommandeSupprimer


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

