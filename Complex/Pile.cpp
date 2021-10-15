#include "Pile.h"
#include<iostream>
Pile::Pile()
{
	this->sommet = -1;
}

bool Pile::PileVide()
{
	if (this->sommet == -1)return true;
	return false;
}

void Pile::afficherPile()
{
	for (int i = this->sommet; i >= 0; i--)std::cout << this->Table[i] << " ";
	std::cout << "\n";
}

int Pile::Sommet(bool debug)
{
	if (this->PileVide()) {
		if(debug)std::cout << "stack is empthy!!";
		return -9999; 
	}
	return this->Table[this->sommet];
}

void Pile::Empiler(int val)
{
	if (this->sommet != MAX) 
	{
		this->Table[++this->sommet] = val;
	}
	else std::cout << "stack overflow!!";
}

bool Pile::Depiler(bool debug)
{
	if (this->PileVide()) { 
		if(debug) std::cout << "stack is empthy!!";
		return false;
	}
	this->sommet--;
	return true;
}

Pile Pile::Invers()
{
	int te;
	int h;
	Pile pile,temp;
	do 
	{
		te = this->Sommet(false);
		if (!this->Depiler(false))break;
		pile.Empiler(te);
		temp.Empiler(te);
	} while (true);
	do
	{
		te = temp.Sommet(false);
		if (!temp.Depiler(false))break;
		this->Empiler(te);
	} while (true);
	return pile;
}
