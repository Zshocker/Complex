#pragma once
#include<iostream>
using namespace std;
class Complex
{
	double Re, Img;
public:
	Complex(double R, double I);
	void affichage();
	double module();
	Complex& conjigue()const;
	Complex& operator+(Complex& C);
	Complex& operator+(double var);
	Complex& operator-(Complex& C);
	Complex& operator-(double var);
	Complex& operator*(Complex& C);
	Complex& operator*(double var);
};

