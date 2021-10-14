#pragma once
#define MAX 100
class Pile
{
	int Table[MAX];
	int sommet;
public:
	Pile();
	bool PileVide();
	void afficherPile();
	int Sommet(bool debug=true);
	void Empiler(int val);
	bool Depiler(bool debug=true);
	Pile Invers();
};

