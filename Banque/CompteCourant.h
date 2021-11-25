#pragma once
#include "Compte.h"
namespace Banque {
    class CompteCourant :public Compte
    {
        bool Payon;
    public:
        CompteCourant(Client*, Devise*,bool);
        void crediter(Devise* D);
        bool debiter(Devise* D);
    };
}
