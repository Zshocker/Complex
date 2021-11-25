#include"CompteCourant.h"
#include"CompteEpargne.h"
#include"ComptePayant.h"
#include"Client.h"
#include "MAD.h"
#include<iostream>
using namespace Banque;
int main() 
{
	Client* Cl=new Client ("User1", "user1", "address");
	ComptePayant A(Cl,new MAD(2000));
	CompteCourant B(Cl, new MAD(1000),new MAD(1000));
	A.verser(new MAD(120), B);
	B.consulter();
}