#include "ComptePayant.h"

Banque::ComptePayant::ComptePayant(Client*C, Devise*D):Compte(C,D)
{
}

bool Banque::ComptePayant::debiter(Devise *D)
{
	if(!this->Compte::debiter(D)) return false;
	Devise E(*D);
	E = E * 0.05;
	this->debiter_direct(&E);
}

void Banque::ComptePayant::crediter(Devise* M)
{
	this->crediter(M);
	Devise E(*M);
	E = E * 0.05;
	this->debiter_direct(&E);
}
