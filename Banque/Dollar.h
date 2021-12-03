#pragma once
#include "Devise.h"
namespace Banque {
    class Dollar :public Devise
    {
        const static double RatioToMAD;
        const static double Ratio;
    public:
        Dollar(double Val);
        Dollar(const Dollar& Val);
        void afficher()const override;
        Devise* Clone() const;
        Devise* Clone_no_convert(double val) const;
        Dollar* ConverToDollar()const;
        MAD* ConverToMAD()const;
        double value() const;
    };
}
