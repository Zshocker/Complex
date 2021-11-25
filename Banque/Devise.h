#pragma once
namespace Banque {
	class Devise
	{
	private:
		double valeur;
	public:
		Devise(double val);
		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		Devise& operator*(double val) const;
		Devise& operator/(const Devise& M) const;
		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		double convert(double Ratio)const;
		virtual void afficher() const;
	};
};
