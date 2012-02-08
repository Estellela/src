/*************************************************************************
                           Application  -  description
                             -------------------
    début                : 4 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <Application> (fichier Application.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Application.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Application::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
ModeleGeometrique* Application::getSelectionCourante()
{
	return selectionCourante;
}
ModeleGeometrique* Application::getModeleElementsGeometrique()
{
	return modeleElementsGeometrique;
}
void Application::AjouterCommande(Commande* commandeAAjouter)
{
	//TODO Tester si a marche vraiment

	if (itDeque!=listeDesCommandes->end())
	{
		itDeque++;
		if (itDeque==listeDesCommandes->end())
		{
			itDeque--;   // on Žtait bien ˆ la fin de la deque, on peut ajouter notre nouvelle commande
			//TODO : vŽrifier que cela marche bien et qu'il ne fasse pas faire un reverse d'it
		}
		else
		{
			// Il faut supprimer toutes les commandes aprs
			while (itDeque!=listeDesCommandes->end())
			{
				listeDesCommandes->erase(itDeque);
			}

		}

	}
	itDeque = listeDesCommandes->insert(itDeque,commandeAAjouter);
}


Commande* Application::AnnulerCommande()
{
	Commande* commandeARetourner = NULL;
	if (itDeque != listeDesCommandes->begin() || *itDeque!=NULL)
	{
		commandeARetourner = *itDeque;
		itDeque--;
	}
	else
	{
		return commandeARetourner;
	}
}
deque<Commande*>* Application::getListeDesCommandes()
{
	return listeDesCommandes;
}




//------------------------------------------------- Surcharge d'opérateurs
Application & Application::operator = ( const Application & unApplication )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Application::Application ( const Application & unApplication )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Application>" << endl;
#endif
} //----- Fin de Application (constructeur de copie)


Application::Application ( )
// Algorithme :
//
{
	selectionCourante = new ModeleGeometrique();
	modeleElementsGeometrique = new ModeleGeometrique();
	listeDesCommandes = new deque<Commande*>;
	itDeque = listeDesCommandes->begin();

#ifdef MAP
    cout << "Appel au constructeur de <Application>" << endl;
#endif
} //----- Fin de Application


Application::~Application ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Application>" << endl;
#endif
} //----- Fin de ~Application


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

