#include "Compte.h"
#include<iostream>
using namespace std;
using namespace Banque;
Devise* Compte::plafond = new Devise(2000);
int Compte::count = 0;

Banque::Compte::Compte(Client* titu, Devise* sol) :numcompte(++count)
{
	this->ref = new GC(1);
	this->titulaire = titu;
	this->solde = sol;
	this->titulaire->add_Compte(this);
}

void Banque::Compte::crediter(Devise* M)
{
	*(this->solde) = *(this->solde) + *M;
	this->add_transaction(M, true);
}

bool Banque::Compte::debiter(Devise* M)
{
	if (*M <= *(Compte::plafond))
	{
		*(this->solde) = *(this->solde) - *M;
		this->add_transaction(M, false);
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

bool Banque::Compte::verser(Devise* M, Compte& C)
{
	if (this->debiter(M) == true) {
		C.crediter(M);
		return true;
	}
	return false;
}

void Banque::Compte::add_pursontage(double D)
{
	*solde = *solde + *solde * (D/100);
}

bool Banque::Compte::check_moitier(Devise* D) const
{
	if (*solde / Devise(2) >= *D)return true;
	return false;
}

void Banque::Compte::debiter_direct(Devise* M)
{
	*(this->solde) = *(this->solde) - *M;
	this->add_transaction(M, false);
}

void Banque::Compte::add_transaction(Devise * Amount, bool Type)
{
	Trans.push_back(new Transaction(Amount, Type));
}
void Banque::Compte::consulter() const
{
	cout << "num compte=" << this->numcompte << endl;
	this->solde->afficher();
	cout << "titulaire " << endl;
	this->titulaire->Afficher();
}

Compte::~Compte() {
	/*if (this->ref) {
		int t = this->ref->decr();
		if (this->titulaire != NULL && t == 0)
		{
			delete this->titulaire;
			this->titulaire = NULL;
			delete this->ref;
			this->ref = NULL;
		}
		if (this->solde != NULL && t == 0)
		{
			delete this->solde;
			this->solde = NULL;
		}
	}
	*/
}