#pragma once
class Compte
{
	long numCompte;
	char nomProprietaire[25];
	double solde;
public:
	Compte(long numCom,char *nom,double solde);
	bool retirerArgent(double amount);
	void deposerArgent(double amount);
	void consulterSolde();
	bool transfererArgent(Compte& Other, double amount);

};

