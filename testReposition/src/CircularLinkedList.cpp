/*
 * CircularLinkedList.cpp
 *
 *
 *      Author: ROG
 */

#include "CircularLinkedList.h"

CircularLinkedList::CircularLinkedList() {
	// TODO Auto-generated constructor stub

}

void CircularLinkedList::Add(int _value)
{
	Node* aux;
	aux->value=_value;

	   if(isEmpty())// if is empty it create a new list
	   {
		   actual = aux;
	   }

	   else // else the aux is set to the next actual node
		   {
		   aux->next = actual->next;
		   }

	   actual->next = aux;
}
void CircularLinkedList::Delete(int _value)
{
	 Node* aux;

	   aux = actual;


	   do
	   {
	      if(actual->next->value != _value) actual = actual->next;  // if the actual node(head or tail) value is the same as the searched value actual is equal to his next
	   }
	   while(actual->next->value !=_value && actual != aux);

	   if(actual->next->value = _value) {// if the value match is deleted and actual is set to null

		   if(actual == actual->next) {

		           delete actual;
		           actual = NULL;
		        }
	      else
	      {
	         aux = actual->next;//else the aux is set to the next node and the next of the actual node is set to the next of the acual so the aux can be deleted
	         actual->next = aux->next;
	         delete aux;
	      }
	   }
}

void CircularLinkedList::next()
{

	   if(actual) actual = actual->next;

}
CircularLinkedList::~CircularLinkedList() {
	// TODO Auto-generated destructor stub
}

