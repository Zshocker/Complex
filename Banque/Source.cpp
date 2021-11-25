#include"Compte.h"
#include"Client.h"
#include<iostream>
using namespace Banque;
int main() 
{
	Client* Cl=new Client ("User1", "user1", "address");
	Compte A(Cl,new Devise(2000));
	Compte B(Cl, new Devise(1000));
	//Compte C(A);
	A.verser(new Devise(120), B);
	B.consulter();
}