#include "ComptePayant.h"

Banque::ComptePayant::ComptePayant(Client*C, Devise*D, Devise*E):CompteCourant(C,D,E)
{
}

bool Banque::ComptePayant::debiter(Devise *D)
{
	if(!this->CompteCourant::debiter(D)) return false;
	Devise E(*D);
	E = E * 0.05;
	this->debiter_direct(&E);
}

void Banque::ComptePayant::crediter(Devise* M)
{
	this->CompteCourant::crediter(M);
	Devise E(*M);
	E = E * 0.05;
	this->debiter_direct(&E);
}
