/*
 * DoubleLinkedList.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: ROG
 */

#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList() {
	// TODO Auto-generated constructor stub

}
void DoubleLinkedList::Add(int _value) {
	if (Head->Next == NULL)// if is empty a new list is created
	{
		DoubleNode* aux;
		aux->Value = _value;
		Head->Next = aux;
		aux->Previous = Head;
	}
	else
	{
		DoubleNode* Temporary; // else a temprary node is set
		Temporary = Head;

		while (Temporary->Next != NULL) //and while the list isnt null temporary is assigned to the next of the head
		{
			Temporary = Temporary->Next;
		}

		DoubleNode* aux2;
		Temporary->Next = aux2;// a new node is placed and set
		aux2->Value = _value;
		aux2->Previous = Temporary;
	}
}
bool DoubleLinkedList::deletFirstValue(int _value){
	if (Head->Next != NULL)
		{ // it search for the value until is found and deleted
		DoubleNode* Temporary;
			Temporary = Head->Next;
			while (true)
			{
				if (Temporary->Value == _value)
				{

					if (Temporary->Next != NULL)
					{
						Temporary->Previous->Next = Temporary->Next;
						Temporary->Next->Previous = Temporary->Previous;
						delete(Temporary);
						return true;
					}
					else
					{
						Temporary->Previous->Next = Temporary->Next;
						delete(Temporary);
						return true;
					}
				}
				else if (Temporary->Next == NULL)
				{
					return false;
				}
				else
				{
					Temporary = Temporary->Next;
				}
			}
		}
		else
		{
			return false;
		}

}

int DoubleLinkedList::Count(int _value)
{
	if (Head->Next != NULL)
		{
			DoubleNode* Temporary ;
			Temporary = Head->Next;
			int Items = 0;
//go trough the list and ad 1 if the  element is found
			while (true)
			{
				if (Temporary->Value == _value)
				{
					Items++;
					if (Temporary->Next != NULL)
					{
						Temporary = Temporary->Next;
					}
					else
					{
						return Items;
					}
				}
				else if (Temporary->Next == NULL)
				{
					return Items;
				}
				else
				{
					Temporary = Temporary->Next;
				}
			}
		}
		else
		{
			return 0;
		}
}

DoubleLinkedList::~DoubleLinkedList() {
	// TODO Auto-generated destructor stub
}

