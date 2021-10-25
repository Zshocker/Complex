#pragma once

namespace Algo {
	typedef int T;
	class Stack
	{
	public:
		void push(T* E);
		void pop();
		bool empty() const;
		T* top() const;
		static Stack *createur();
		static void garbage(Stack *s );
	private: 
		Stack();
		~Stack();
		class Node *head; //si on peut pas l'utiliser � l'exterieur, on peut la d�clarer � l'interieur de la classe pour garder la s�curit�
	};

}