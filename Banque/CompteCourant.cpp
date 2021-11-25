#include "CompteCourant.h"
#include<assert.h>
Banque::CompteCourant::CompteCourant(Client*A, Devise*V, Devise*E):Compte(A,V)
{
	assert(*V >= *E);
	decouvert = new Devise(*E);
}

void Banque::CompteCourant::crediter(Devise* D)
{
	this->Compte::crediter(D);
}

bool Banque::CompteCourant::debiter(Devise* D)
{
	if (!check_Solde_sup(*D + *decouvert))return false;
	if (!this->Compte::debiter(D)) return false;
	return true;
}
