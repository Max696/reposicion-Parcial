/*
 * Stack.cpp
 *
 *
 *      Author: ROG
 */

#include "Stack.h"

Stack::Stack() {
	// TODO Auto-generated constructor stub

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}
void Stack::Push(Node*&stack,int _value)
{
	Node* aux ;// an auxiliar node , which is going to be assigned to the stack
	aux->value=_value;// the given value is assigned to the stack
	aux->next=stack;
	stack = aux;
}
void Node::Push(int s)
{
	Push(stack,s);
}
void Stack::Pop(Node*&stack, int &_value)
{
	Node* aux;
	aux = stack; // stack node is assigned to the aux
	_value= aux->value;
	stack=aux->next;
	delete aux;// aux is deleted
}
//solucion problema 2
 Stack::replace(Node*& stack,int newint, int old)
{
	Node* aux;
	Node* temporary;
	aux=stack;
	if(aux->value== old)// search in the node the old given value  if finded it assign the new number
	{
		temporary->value=newint;
		aux->next= temporary;
	}
	else // else is just added to the list
	{
		temporary= temporary->next;
		aux=aux->next;
	}

}

void Stack::replace(int newint,int old)
{
	replace(stack,newint,old);

	}

