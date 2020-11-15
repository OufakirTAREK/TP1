#pragma once
#include<string>
using namespace std;

class Employe
{
private:
	string CIN;
	string nom;
	string prenom;
	string sexe;
	string departement;
	double salaire;

public:
	Employe() {};

	Employe(string CIN, string nom, string prenom, string sexe, string departement, double salaire);

	Employe(const Employe& Em);

	~Employe();

	void show();
};

