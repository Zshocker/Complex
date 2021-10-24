#pragma once
#include <string>
#include <iostream>
using namespace std;
namespace Banque {
	class Client
	{

		// attributs
	private:
		string nom;
		string prenom;
		string adresse;

	public:
		Client(string, string, string);
		void Afficher()const;

	};
};
