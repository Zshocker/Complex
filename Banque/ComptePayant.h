#pragma once
#include "Compte.h"
namespace Banque {
    class ComptePayant : public Compte
    {
    public:
        ComptePayant(Client*, Devise*);
        bool debiter(Devise*D);
        void crediter(Devise* M);
    };
}
