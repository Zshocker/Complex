#pragma once
#include"CompteCourant.h"
#include"CompteEpargne.h"
#include"ComptePayant.h"
#include"Client.h"
#include "MAD.h"
#include<iostream>
namespace Banque {
	class AppBanque
	{
		vector<Client*> Clients;
		int i = 0;
	public:
		void Mymain()
		{
			Client* Cl = new Client("User1", "user1", "address");
			ComptePayant A(Cl, new MAD(2000), new MAD(100));
			int choix;
			double Val;
			MAD* VAL;
			do
			{
				cout << "0-exit" << endl;
				cout << "1-retrait" << endl;
				cout << "2-crediter" << endl;
				cout << "3-consuler" << endl;
				cout << "4-history" << endl;
				cout << "donner votre choix:";
				cin >> choix;
				cout << "------------------------------------------" << endl;
				switch (choix)
				{
				case 1:
					cout << "donner la valeur en MAD:";
					cin >> Val;
					if (A.debiter(new MAD(Val)))cout << "Done!" << endl;
					else cout << "Not Enough money" << endl;
					break;
				case 2:
					cout << "donner la valeur en MAD:";
					cin >> Val;
					A.crediter(new MAD(Val));
					break;
				case 3:
					A.consulter();
					break;
				case 4:
					A.consulter_with_history();
					break;
				default:
					exit(1);
				}
				cout << "------------------------------------------" << endl;
			} while (1);
		}
	};
}
