#include "MAD.h"
#include<iostream>
using namespace std;
const double Banque::MAD::Ratio = 9.8;
Banque::MAD::MAD(double Val):Devise(Val/Ratio)
{
}

void Banque::MAD::afficher()const
{
	cout <<this->convert(Ratio) << " MAD" << endl;
}
