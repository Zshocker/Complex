#include"Complex.h"
using namespace std;
void main() 
{
	Complex Z(5.1, 4);
	cout << "affichage :";
	Z.affichage();
	cout << "\n module :" << Z.module();
	Complex Z2 = Z.conjigue();
	cout << "\n Conjugue :",Z2.affichage();

}