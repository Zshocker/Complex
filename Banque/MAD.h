#pragma once
#include "Devise.h"
namespace Banque {
    class MAD : public Devise
    {
        const static double Ratio;
    public:
        MAD(double Val);
        void afficher()const override;
    };
}
