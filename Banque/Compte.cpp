#include "Compte.h"
#include<iostream>
using namespace std;
using namespace Banque;
MAD* Compte::plafond = new MAD(2000);
int Compte::count = 0;

Banque::Compte::Compte(Client* titu, MAD* sol) :numcompte(++count)
{
	this->ref = new GC(1);
	this->titulaire = titu;
	this->solde = sol;
}

void Banque::Compte::crediter(MAD* M)
{
	*(this->solde) = *(this->solde) + *M;
}

bool Banque::Compte::debiter(MAD* M)
{
	if (*(this->solde) >= *M && *M <= *(Compte::plafond))
	{
		*(this->solde) = *(this->solde) - *M;
		return true;
	}
	return false;
}

Banque::Compte::Compte(const Compte& c) :numcompte(c.numcompte)
{
	this->ref = c.ref;
	this->ref->incre();
	this->solde = c.solde;
	this->titulaire = c.titulaire;
}

bool Banque::Compte::verser(MAD* M, Compte& C)
{
	if (this->debiter(M) == true) {
		C.crediter(M);
		return true;
	}
	return false;
}


void Banque::Compte::consulter() const
{
	cout << "num compte=" << this->numcompte << endl;
	this->solde->afficher();
	cout << "titulaire " << endl;
	this->titulaire->Afficher();
}

Compte::~Compte() {

	int t = this->ref->decr();
	if (this->titulaire != NULL && t == 0)
	{
		delete this->titulaire;
		this->titulaire = NULL;
	}
	if (this->solde != NULL && t == 0)
	{
		delete this->solde;
		this->solde = NULL;
	}
}