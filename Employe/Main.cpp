#include <iostream>
#include "Employe.h"

int main()
{
	Employe Emp1("be52810", "Oufakir", "Tarek", "Homme", "IT", 15000);
	Emp1.show();

	Employe *Emp2;
	Emp2 = new Employe("bk45686", "Oufakir", "Tarek", "Homme", "IT", 20000);
	Emp2.show();

	Employe Emp3(Emp1);
	Emp3.show();

	Emp2->~Employe();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
