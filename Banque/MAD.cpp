#include "MAD.h"
#include<iostream>
using namespace std;
const double Banque::MAD::Ratio = 8;
Banque::MAD::MAD(double Val):Devise(Val/Ratio)
{
}

void Banque::MAD::afficher()const
{
	cout <<this->convert(Ratio) << " MAD" << endl;
}

Banque::MAD::MAD(const MAD& Val):Devise(Val)
{
}

Banque::Devise* Banque::MAD::Clone() const
{
	return new MAD(*this);
}
Banque::Devise* Banque::MAD::Clone_no_convert(double val) const
{
	return new MAD(val*Ratio);
}

double Banque::MAD::value() const
{
	return this->convert(Ratio);
}
