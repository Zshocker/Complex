#pragma once
#include <string>
#include<list>
using namespace std;
namespace Banque {
	class Compte;
	class Client
	{

		// attributs
	private:
		string nom;
		string prenom;
		string adresse;
		list<Compte*> Comptes;
	public:
		Client(string, string, string);
		void add_Compte(Compte*);
		void Afficher()const;
	};
};
