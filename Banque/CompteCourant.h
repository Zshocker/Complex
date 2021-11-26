#pragma once
#include "Compte.h"
namespace Banque {
    class CompteCourant :public Compte
    {
        Devise* decouvert;
    public:
        CompteCourant(Client*, Devise*,Devise*);
        bool debiter(Devise* D);
    };
}
