/*************************************************************************
                           CommandeCount  -  description
                             -------------------
    début                : 5 fŽvr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- Réalisation de la classe <CommandeCount> (fichier CommandeCount.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CommandeCount.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CommandeCount::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void CommandeCount::Do ()
{
	long nbObjet = 0;
	itList = listeElementsGeometrique->begin();

	while (itList!=listeElementsGeometrique->end())
	{
		nbObjet++;
		itList++;
	}
	cout << nbObjet <<endl;


}
void CommandeCount::Undo ()
{
// Rien ˆ faire
}


//------------------------------------------------- Surcharge d'opérateurs
CommandeCount & CommandeCount::operator = ( const CommandeCount & unCommandeCount )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CommandeCount::CommandeCount ( const CommandeCount & unCommandeCount ) : Commande (unCommandeCount)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CommandeCount>" << endl;
#endif
} //----- Fin de CommandeCount (constructeur de copie)


CommandeCount::CommandeCount(string commandeLu, list<ElementGeometrique*>* listeElementsGeometrique) : Commande (commandeLu)
// Algorithme :
//
{
	this->listeElementsGeometrique=listeElementsGeometrique;
	itList = listeElementsGeometrique->begin();

#ifdef MAP
    cout << "Appel au constructeur de <CommandeCount>" << endl;
#endif
} //----- Fin de CommandeCount


CommandeCount::~CommandeCount ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CommandeCount>" << endl;
#endif
} //----- Fin de ~CommandeCount


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

