#include "Compte.h"
#include<iostream>
#include<string>
Compte::Compte(long numCom, char* nom, double solde)
{
    this->numCompte = numCom;
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

void Compte::consulterSolde()
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
