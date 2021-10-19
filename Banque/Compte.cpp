#include "Compte.h"
#include<iostream>
#include<string>
long Compte::numC = 0;
Compte::Compte(char* nom, double solde)
{
    Compte::numC++;
    this->numCompte = Compte::numC;
    strcpy_s(this->nomProprietaire, nom);
    this->solde = solde;
}

bool Compte::retirerArgent(double amount)
{
    if (this->solde >= amount) {
        this->solde -= amount;
        return true;
    }
    return false;
}

void Compte::deposerArgent(double amount)
{
    this->solde += amount;
}

void Compte::consulterSolde()const
{
    std::cout << "solde de "<<this->nomProprietaire <<" :" << this->solde<<std::endl;
}

bool Compte::transfererArgent(Compte& Other, double amount)
{   
    if (this->retirerArgent(amount)) 
    {
        Other.deposerArgent(amount);
        return true;
    }
    return false;
}
