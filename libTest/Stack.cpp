#include "pch.h"
#include "Stack.h"
#include <assert.h>

namespace Algo {
	class Node
	{
	private:
		T* data;
		Node* nest;
	public:
		//il faut jaais travailler avec les get/set
		/*T* getData() const //pour accéder à une information privée
		{
			return this->data;
		}
		void setData(T* s)// pour modifier une information privée
		{
			this->data = s;
		}*/
		friend Stack;// solution à la place de get/set
	};
}
using namespace Algo;
void Algo::Stack::push(T* E)
{
	Node* newNode = new Node();
    //newNode->setData(E); // à eviter
	assert(newNode != 0); //(en mode débogage) si la condition est vrai on passe pour terminer l'execution, si non on sort
	//try catch// mode relese c-a-d chez le client
	newNode->data = E;
	newNode->nest = this->head;
	this->head = newNode;
}

void Algo::Stack::pop()
{
	assert(!this->empty());
	Node* supp = this->head;
	this->head = this->head->nest;
	delete supp;
	supp = 0;
}

bool Algo::Stack::empty() const
{
	bool res = (this->head==0);
	return res;
}

T* Algo::Stack::top() const
{
	assert(!this->empty());
	return this->head->data;
}

Stack *Algo::Stack::createur()
{
	Stack* s = new Stack();
	assert(s);
	return s;
}

void Algo::Stack::garbage(Stack* s)
{
	assert(s);// if(s) 
	delete s; // delete il fait appel automatiquement au destructeur
}

Algo::Stack::Stack()
{

}

Algo::Stack::~Stack()
{
	while (this->head) this->pop();
}
