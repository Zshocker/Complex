#include"Compte.h"
#include<iostream>
using namespace Banque;
int main() 
{
	Client* Cl = new Client("User1", "user1", "address");
	Compte*A=new Compte(Cl,new MAD(2000));
	Compte *B=new Compte(Cl, new MAD(1000));
	Compte *C=new Compte(*A);
	A->verser(new MAD(120), *B);
	B->consulter();
}