#include "Transaction.h"
using namespace Banque;
long Transaction::incr = 0;
Banque::Transaction::Transaction(Devise* Val, Compte*c) :numT(++incr)
{
	this->Val = Val;
	this->date = __DATE__;
	this->heure = __TIME__;
	this->E = c;
}

void Banque::Transaction::Print()
{
	cout << "Date : " << date << ", Heure : " << heure << endl;
	cout << "Transaction num: " << numT << endl;
	cout << "Montant ";
	Val->afficher();
	cout << endl;
}