#pragma once
#include "CompteCourant.h"
namespace Banque {
    class ComptePayant : public CompteCourant
    {
    public:
        ComptePayant(Client*, Devise*, Devise*);
        bool debiter(Devise*D);
        void crediter(Devise* M);
    };
}
