#pragma once
#include<iostream>
using namespace std;
class Complex
{
	double Re, Img;
	
private:Complex(double R, double I);
public:
	static Complex& Create_Complex(double R, double I);
	void affichage();
	double module();
	Complex& conjigue()const;
	Complex& operator+(const Complex& C);
	Complex& operator+(double var);
	Complex& operator-(const Complex& C);
	Complex& operator-(double var);
	Complex& operator*(const Complex& C);
	Complex& operator*(double var);
	Complex& operator/(const Complex& C);
};

