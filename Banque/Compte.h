#pragma once
#include"Client.h"
#include"Transaction.h"
#include "Devise.h"
#include "GC.h"
#include<vector>
using namespace std;
namespace Banque {
	class Client;
	class Compte
	{
		//attributs
	private:
		const int numcompte;
		static int count;
		Client* titulaire;
		Devise* solde;
		static Devise* plafond;
		GC* ref;
		vector<Transaction*> Trans;
		// Methodes
	public:
		Compte(Client*, Devise*);
		Compte(const Compte&);
		virtual void crediter(Devise* M);
		virtual bool debiter(Devise* M);
		bool verser(Devise* M, Compte& C);
		virtual void calculInteret()=0;
		void consulter()const;
		~Compte();
	protected:
		void add_pursontage(double D);
		bool check_moitier(Devise* D)const;
		void debiter_direct(Devise*M);
	private:
		void add_transaction(Devise* Amount,bool Type);
	};
};