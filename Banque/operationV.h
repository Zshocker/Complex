#pragma once
#include "Transaction.h"

namespace Banque {
    class Compte;
    class operationV :public Transaction
    {
    public:
        operationV(Devise*E,Compte*c);
    private:
        static string libel;
    };
}
