//============================================================================
// Name        : polymorphismeTP.cpp
// Author      : Bourgin Sylvain
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "fichierEcrire.h"
#include "fichierLire.h"
#include "controleur.h"
#include "Application.h"
#include <fstream>
#include <string>
using namespace std;

int main() {







	string macommande = "plif";

	Application* monApplication = new Application();

	controleur* monControleur = new controleur(monApplication);

	monControleur->TraitementCommande(macommande);



//	monControleur->GetCommande(macommande);

	//cout << macommande << endl;













/*
 *
	bool ok = false;
	string pluf ="";
	fichierLire* monfichierLire = new fichierLire("test.txt");

	ok = monfichierLire->LireLigne(pluf);
	cout << pluf<<endl;



	fichierEcrire* save = new fichierEcrire();

	string machaine = "coucou \n je vais bien \n patatez";
	string nomfich = "a.txt";

	ok = save->save(nomfich,machaine);

	if (ok==true)
	{
		cout << "ecriture ok" <<endl;
	}
*/

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
