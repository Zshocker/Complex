#include "Dollar.h"
#include"MAD.h"
#include<iostream>
using namespace std;
using namespace Banque;
const double Banque::Dollar::Ratio = 1;
const double Banque::Dollar::RatioToMAD = 1;
Banque::Dollar::Dollar(double Val) :Devise(Val / Ratio)
{
}

Banque::Dollar::Dollar(const Dollar& Val) : Devise(Val)
{
}

void Banque::Dollar::afficher() const
{
	cout << this->convert(Ratio) << " Dollar" << endl;
}

Devise* Banque::Dollar::Clone() const
{
	return new Dollar(*this);
}

Devise* Banque::Dollar::Clone_no_convert(double val) const
{
	return new Dollar(val*Ratio);
}

Dollar* Banque::Dollar::ConverToDollar() const
{
	return new Dollar(*this);
}

MAD* Banque::Dollar::ConverToMAD() const
{
	return new MAD(this->convert(RatioToMAD));
}

double Banque::Dollar::value() const
{
	return this->convert(Ratio);
}
