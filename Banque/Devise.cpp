#include "Devise.h"
#include  <iostream>
using namespace std;
using namespace Banque;
Devise::Devise(double val)
{
	this->valeur = val;
}

Devise& Devise::operator+(const Devise& M) const
{
	Devise* res = new Devise(this->valeur + M.valeur);
	return *res;
}

Devise& Devise::operator-(const Devise& M) const
{
	Devise* res = new Devise(this->valeur - M.valeur);
	return *res;
}

Devise& Banque::Devise::operator*(const Devise& M) const
{
	Devise* res = new Devise(this->valeur * M.valeur);
	return *res;
}

Devise& Banque::Devise::operator*(double val) const
{
	Devise* res = new Devise(this->valeur * val);
	return *res;
}

Devise& Banque::Devise::operator/(const Devise& M) const
{
	if (M.valeur!=0) {
		Devise* res = new Devise(this->valeur / M.valeur);
		return *res;
	}
}

bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}

double Banque::Devise::convert(double Ratio)const
{
	return valeur*Ratio;
}

void Banque::Devise::afficher() const
{
	cout<<valeur;
}


