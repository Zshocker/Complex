#pragma once
class Compte
{
	long numCompte;
	char nomProprietaire[25];
	double solde;
	static long numC;
public:
	Compte(char *nom,double solde);
	bool retirerArgent(double amount);
	void deposerArgent(double amount);
	void consulterSolde()const;
	bool transfererArgent(Compte& Other, double amount);

};

