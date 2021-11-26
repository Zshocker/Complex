#include "operationV.h"
string Banque::operationV::libel = "+";
Banque::operationV::operationV(Devise* E, Compte* c):Transaction(E,c)
{
}
