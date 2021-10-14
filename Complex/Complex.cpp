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

Complex Complex::conjigue()
{
	return Complex(this->Re,-this->Img);
}
