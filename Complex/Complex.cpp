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
	std::cout << this->Re << " + i" << this->Img<<endl;
}

double Complex::module()
{
	return sqrt(pow(this->Re, 2) + pow(this->Img, 2));
}

Complex Complex::conjigue()
{
	return Complex(this->Re,-this->Img);
}
