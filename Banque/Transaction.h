#pragma once
#include"Devise.h"
#include<iostream>
using namespace std;
namespace Banque {
	class Transaction
	{
		static long incr;
		const long numT;
		string date;
		string heure;
		Devise* Val;
		bool Type;//false: out ,true: in
	public:
		Transaction(Devise* Val, bool);
		void Print();
	};
}