/*************************************************************************
                           controleur  -  description
                             -------------------
    début                : 1 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <controleur> (fichier controleur.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "controleur.h"
#include "point.h"



//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type controleur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


void controleur::GetCommande(string& commandeLu)
{
	cin >> commandeLu;
}

void controleur::TraitementCommande(string& commandeLu)
{

	//TODO appel ˆ la classe validator/factory maker pour vŽrifier les donnŽes, ce dernier retourne une commande

	//TODO si appel ok on execute, sinon affichage message erreur

	long p1 = 10;
	long p2 = 20;
	long p3 = 30;
	long p4 = 40;

	point* pointA = new point(p1,p2);
	point* pointB = new point(p3,p4);

	commandeLu ="plouf";


	CommandeLigne* maCommandeLigne = new CommandeLigne(commandeLu, monApplication->getSelectionCourante(), monApplication->getModeleElementsGeometrique(),pointA,pointB);

	maCommandeLigne->Do();
	monApplication->AjouterCommande(maCommandeLigne);
	maCommandeLigne->Do();
	monApplication->AjouterCommande(maCommandeLigne);



	CommandeCount* macommandeCount = new CommandeCount(commandeLu, monApplication->getModeleElementsGeometrique()->getListeElementsGeometrique());
	macommandeCount->Do();
	monApplication->AjouterCommande(maCommandeLigne);


	CommandeUndo* macommandeUndo = new CommandeUndo(commandeLu, monApplication->AnnulerCommande());

	//macommandeUndo->Do();
	monApplication->AjouterCommande(macommandeUndo);

	CommandeClear* macommandeClear = new CommandeClear(commandeLu, monApplication->getSelectionCourante(), monApplication->getModeleElementsGeometrique());
	macommandeClear->Do();

	macommandeClear->Undo();

	macommandeCount->Do();



}




//------------------------------------------------- Surcharge d'opérateurs
controleur & controleur::operator = ( const controleur & uncontroleur )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
controleur::controleur ( const controleur & uncontroleur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <controleur>" << endl;
#endif
} //----- Fin de controleur (constructeur de copie)


controleur::controleur (Application* application)
// Algorithme :
//
{
	this->monApplication=application;
#ifdef MAP
    cout << "Appel au constructeur de <controleur>" << endl;
#endif
} //----- Fin de controleur


controleur::~controleur ( )
// Algorithme :
//
{
	//TPDP supprimer la selection courante, vider tout le monde...Etc
#ifdef MAP
    cout << "Appel au destructeur de <controleur>" << endl;
#endif
} //----- Fin de ~controleur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

