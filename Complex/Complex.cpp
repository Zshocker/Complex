#include <iostream>
#include "Complex.h"
#include<math.h>
Complex::Complex(double R, double I)
{
	this->Re = R;
	this->Img = I;
}

void Complex::affichage()
{
	if(this->Img>0)std::cout << this->Re << " + " << this->Img<< "i";
	else std::cout << this->Re << " " << this->Img << "i";
}

double Complex::module()
{
	return sqrt(pow(this->Re, 2) + pow(this->Img, 2));
}

Complex& Complex::conjigue()const
{
	 Complex z(this->Re,-this->Img);
	 return z;
}

Complex& Complex::operator+(const Complex& C)
{
	 Complex W(this->Re + C.Re, this->Img + C.Img);
	 return W;
}

Complex& Complex::operator+(double var)
{
	Complex W(this->Re + var,this->Img);
	return W;
}

Complex& Complex::operator-(const Complex& C)
{
	Complex W(this->Re - C.Re, this->Img - C.Img);
	return W;
}

Complex& Complex::operator-(double var)
{
	Complex W(this->Re - var, this->Img);
	return W;
}

Complex& Complex::operator*(const Complex& C)
{
	Complex W(this->Re * C.Re - this->Img * C.Img, this->Re * C.Img + C.Re * this->Img);
	return W;
}

Complex& Complex::operator*(double var)
{
	Complex W(this->Img * var,this->Re * var);
	return W;
}

Complex& Complex::operator/(const Complex& C)
{
	double z = (this->Re * C.Re + this->Img * C.Img) / (pow(C.Re,2)+pow(C.Img,2));
	double s = (this->Img * C.Re - this->Re * C.Img) / (pow(C.Re, 2) + pow(C.Img, 2));
	Complex W(z,s);
	return W;
}
