#include"Compte.h"
#include<iostream>
int main() {
	Compte A((long)50003,(char*)"User1 user1",80050.175);
	Compte C((long)50002, (char*)"User2 user2", 10);
	A.deposerArgent(12000);
	std::cout << "before transfer" << std::endl;
	A.consulterSolde();
	C.consulterSolde();
	A.transfererArgent(C, 10000);
	std::cout << "after transfer" << std::endl;
	A.consulterSolde();
	C.consulterSolde();
	return 1;
}