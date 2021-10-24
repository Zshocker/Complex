#include "MAD.h"
#include  <iostream>
using namespace std;
using namespace Banque;
MAD::MAD(double val)
{
	this->valeur = val;
}

MAD& MAD::operator+(const MAD& M) const
{
	MAD* res = new MAD(this->valeur + M.valeur);
	return *res;
}

MAD& MAD::operator-(const MAD& M) const
{
	MAD* res = new MAD(this->valeur - M.valeur);
	return *res;
}

bool MAD::operator<=(const MAD& M) const
{
	return this->valeur <= M.valeur;
}

bool MAD::operator>=(const MAD& M) const
{
	return this->valeur >= M.valeur;
}

void MAD::afficher() const
{
	cout << "le solde est : " << this->valeur << "MAD" << endl;
}

