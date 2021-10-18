#include"Complex.h"
#include"Pile.h"
using namespace std;
void main() 
{
	cout << "\nCOMPLEX\n";
	Complex Z(5.1, 4);
	//cout << "affichage :";
	//Z.affichage();
	//cout << "\nModule :" << Z.module();
	Complex Z2(46,5);
	cout << "\nZ2 :",Z2.affichage(),cout<<endl;
	Complex Z3 = (double) 2+ Z2  ;
	cout << "\Z2 after :", Z2.affichage(),cout << endl;
	cout << "affichage Z3:";
	Z3.affichage();

	cout << "\nPile\n";
	Pile MsY, other;
	MsY.Empiler(42);
	MsY.Empiler(4);
	MsY.Empiler(12);
	MsY.Empiler(48);
	cout << "\npile normal :", MsY.afficherPile();
	other = MsY.Invers();
	cout << "\npile inverser :", other.afficherPile();
	cout << "\npile normal :", MsY.afficherPile();
}