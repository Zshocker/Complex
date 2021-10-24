#pragma once
#include"Client.h"
#include "MAD.h"
#include "GC.h"
namespace Banque {
	class Compte
	{
		//attributs
	private:
		const int numcompte;
		static int count;
		Client* titulaire;
		MAD* solde;
		static MAD* plafond;
		GC* ref;
		// Methodes
	public:
		Compte(Client*, MAD*); // avec parametres
		Compte(const Compte&);
		void crediter(MAD* M);
		bool debiter(MAD* M);
		bool verser(MAD* M, Compte& C);
		void consulter()const;
		~Compte();



	};

};