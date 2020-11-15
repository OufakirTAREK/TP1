#include "Employe.h"
#include<iostream>
using namespace std;

Employe::Employe(string CIN, string nom, string prenom, string sexe, string departement, double salaire)
{
	cout << "\nVous avez appeler un constructeur d'initialisation" << endl;

	this->CIN = CIN;
	this->nom = nom;
	this->prenom = prenom;
	this->sexe = sexe;
	this->departement = departement;
	this->salaire = salaire;
}

Employe::Employe(const Employe& Em)
{
	cout << "\nVous avez appeler un constructeur de copie" << endl;

	this->CIN = Em.CIN;
	this->nom = Em.nom;
	this->prenom = Em.prenom;
	this->sexe = Em.sexe;
	this->departement = Em.departement;
	this->salaire = Em.salaire;
}

Employe::~Employe()
{
	delete this;
}

void Employe::show()
{

	cout << "CIN : " << this->CIN << endl;
	cout << "NOM : " << this->nom << endl;
	cout << "PRENOM : " << this->prenom << endl;
	cout << "SEXE : " << this->sexe << endl;
	cout << "DEPARTEMENT : " << this->departement << endl;
	cout << "SALAIRE : " << this->salaire << endl;
}
