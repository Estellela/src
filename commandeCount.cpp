/*************************************************************************
                           CommandeCount  -  description
                             -------------------
    d�but                : 5 f�vr. 2012
    copyright            : (C) 2012 par sylvain
*************************************************************************/

//---------- R�alisation de la classe <CommandeCount> (fichier CommandeCount.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "commandeCount.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type CommandeCount::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode
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
// Rien � faire
}


//------------------------------------------------- Surcharge d'op�rateurs
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

//----------------------------------------------------- M�thodes prot�g�es

