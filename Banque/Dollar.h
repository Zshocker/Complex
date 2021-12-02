#pragma once
#include "Devise.h"
namespace Banque {
    class Dollar :public Devise
    {
        const static double Ratio;
    public:
        Dollar(double Val);
        Dollar(const Dollar& Val);
        void afficher()const override;
        Devise* Clone() const;
        Devise* Clone_no_convert(double val) const;
        double value() const;
    };
}
