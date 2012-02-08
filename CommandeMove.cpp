/*************************************************************************
                           CommandeMove  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeMove> (fichier CommandeMove.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeMove.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeMove::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void CommandeMove::Do ()
{
	list<ElementGeometrique*>* selectionCouranteAparcourir= selectionCourante->getListeElementsGeometrique();
	list<ElementGeometrique*>::iterator it;
	it = selectionCouranteAparcourir->begin();
		while (it!=selectionCouranteAparcourir->end())
		{
			//TODO : ajouter commande move quand ce sera ajoutŽ ˆ element geometrique

			it++;
		}



}
void CommandeMove::Undo ()
{
	long deltaMoinsX= deltaX * (-1);
	long deltaMoinsY= deltaY * (-1);


//TODO verifier que la selection courante soit bien la bonne sinon la sauvegarder
	list<ElementGeometrique*>* selectionCouranteAparcourir= selectionCourante->getListeElementsGeometrique();
	list<ElementGeometrique*>::iterator it;
	it = selectionCouranteAparcourir->begin();
		while (it!=selectionCouranteAparcourir->end())
		{
			//TODO : ajouter commande move quand ce sera ajoutŽ ˆ element geometrique

			it++;
		}


}




//------------------------------------------------- Surcharge d'opérateurs
CommandeMove & CommandeMove::operator = ( const CommandeMove & unCommandeMove )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeMove::CommandeMove ( const CommandeMove & unCommandeMove ) : Commande(unCommandeMove)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeMove>" << endl;
#endif
} //----- Fin de CommandeMove (constructeur de copie)


CommandeMove::CommandeMove (string& commandeUtilisateur,ModeleGeometrique* selectionCourante, long deltaX, long deltaY) : Commande(commandeUtilisateur)
// Algorithme :
//
{
	this->selectionCourante=selectionCourante;
	this->deltaX=deltaX;
	this->deltaY=deltaY;
#ifdef MAP
    cout << "Appel au constructeur de <CommandeMove>" << endl;
#endif
} //----- Fin de CommandeMove


CommandeMove::~CommandeMove ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeMove>" << endl;
#endif
} //----- Fin de ~CommandeMove


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

