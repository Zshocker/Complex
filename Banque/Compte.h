#pragma once
#include"Client.h"
#include"MAD.h"
namespace Banque {
	class Compte
	{
		const long numCompte;
		Client* titulaire;
		MAD* solde;
		static MAD* Plafond;
		static long numC;
	public:
		Compte(char* nom, double solde);
		bool retirerArgent(double amount);
		void deposerArgent(double amount);
		void consulterSolde()const;
		bool transfererArgent(Compte& Other, double amount);

	};

}