#include <iostream>
#include "Complex.h"
#include<math.h>
Complex::Complex(double R, double I)
{
	this->Re = R;
	this->Img = I;
}

Complex& Complex::Create_Complex(double R, double I)
{
	Complex* W =new Complex(R,I);
	return *W;
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
	 Complex *z=new Complex(this->Re,-this->Img);
	 return *z;
}

Complex& Complex::operator+(const Complex& C)
{
	 Complex *W=new Complex(this->Re + C.Re, this->Img + C.Img);
	 return *W;;
}

Complex& Complex::operator+(double var)
{
	Complex *W=new Complex(this->Re + var,this->Img);
	return *W;;
}

Complex& Complex::operator-(const Complex& C)
{
	Complex *W=new Complex(this->Re - C.Re, this->Img - C.Img);
	return *W;;
}

Complex& Complex::operator-(double var)
{
	Complex *W=new Complex(this->Re - var, this->Img);
	return *W;;
}

Complex& Complex::operator*(const Complex& C)
{
	Complex *W=new Complex(this->Re * C.Re - this->Img * C.Img, this->Re * C.Img + C.Re * this->Img);
	return *W;;
}

Complex& Complex::operator*(double var)
{
	Complex *W=new Complex(this->Img * var,this->Re * var);
	return *W;;
}

Complex& Complex::operator/(const Complex& C)
{
	double z = (this->Re * C.Re + this->Img * C.Img) / (pow(C.Re,2)+pow(C.Img,2));
	double s = (this->Img * C.Re - this->Re * C.Img) / (pow(C.Re, 2) + pow(C.Img, 2));
	Complex *W=new Complex(z,s);
	return *W;;
}
