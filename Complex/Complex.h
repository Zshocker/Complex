#pragma once
#include<iostream>
using namespace std;
class Complex
{
	double Re, Img;
	
	
public:
	Complex(double R, double I);
	static Complex& Create_Complex(double R, double I);
	void  affichage() const;
	double module() const;
	Complex& conjigue()const;
	Complex& operator+(const Complex& C)const;
	Complex& operator+(double var)const;
	Complex& operator-(const Complex& C)const;
	Complex& operator-(double var)const;
	Complex& operator*(const Complex& C)const;
	Complex& operator*(double var)const;
	Complex& operator/(const Complex& C)const;
};
inline
Complex& operator+(double r,const Complex& C) {
	return C+(double)r;
}
