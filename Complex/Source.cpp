#include"Complex.h"
#include"Pile.h"
using namespace std;
int main() 
{
	cout << "\nCOMPLEX\n";
	Complex Z(5.1, 4);
	//cout << "affichage :";
	//Z.affichage();
	//cout << "\nModule :" << Z.module();
	Complex Z2(46,5);
	cout << "\nZ2 :",Z2.affichage(),cout<<endl;
	Complex Z3 =  (double)5 + Z2 ;
	cout << "\nZ2 after :", Z2.affichage(),cout << endl;
	cout << "affichage Z3:";
	Z3.affichage();
}