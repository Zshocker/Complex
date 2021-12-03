#pragma once
#include "Devise.h"
namespace Banque {
    class MAD : public Devise
    {
        const static double Ratio;
        const static double RatioToDollar;
    public:
        MAD(double Val);
        MAD(const MAD& Val);
        void afficher()const override;
        Devise* Clone() const;
        Devise* Clone_no_convert(double val) const;
        Dollar* ConverToDollar()const;
        MAD* ConverToMAD()const;
        double value() const;
    };
}
