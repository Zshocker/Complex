#include "CompteCourant.h"
Banque::CompteCourant::CompteCourant(Client*A, Devise*V, bool pay):Compte(A,V)
{
	this->Payon = pay;
}

void Banque::CompteCourant::crediter(Devise* D)
{
	this->Compte::crediter(D);
	if(Payon)this->debiter_direct(D);
}

bool Banque::CompteCourant::debiter(Devise* D)
{
	if (!this->Compte::debiter(D)) return false;
	if (Payon)this->debiter_direct(D);
	return true;
}
