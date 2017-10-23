/*
 * LinkedList.cpp
 *
 *
 *      Author: ROG
 */

#include "LinkedList.h"



LinkedList::LinkedList() {
	// TODO Auto-generated constructor stub

}
void LinkedList::Add(int data )
{
	Node*Last;


   // if is empty, it assign the first value to the list, been it first element the actual list
   if(isEmpty() || First->value > data) {

      First = new Node(data,First);
   }
   //else it assign
   else {
	   Last=First;
	   while(Last->next && (Last->next)->value <= data)
	            Last = Last ->next;
	   Node* r;

	   Last->next = new Node(data, Last->next);
	   size++;

   }
}
void LinkedList::Delete(int data)
{
 Node *last;
	 Node *aux;
int value = First->value;
   aux = First;
   aux = NULL;
   while(aux&& aux->value <data)
   {
     last=aux;
     aux=aux-> next;
   }
   if(!aux||aux->value !=data)return ;
   else {
      if(!last)
      {
        First=aux->next;
      }
      else
         last->next = aux->next;

      delete aux;
      size--;
      return value;

   }
}

void LinkedList::Show()
{
   Node *aux;

   aux = First;
   while(aux) {

      cout << aux->value << "-> ";
      aux = aux-> next;
   }

   cout << endl;
}
void LinkedList::top()
{
  Actual = First;
}
void LinkedList::next()
{
	 if(Actual) Actual = Actual->next;
}

void LinkedList::last()
{
	Actual =First;
	   if(!isEmpty())
	      while(Actual->value) next();
	}
int LinkedList::getsize()
{
	return size;
}

//v2.0 with recursion
LinkedList LinkedList::Merge(LinkedList list1,LinkedList list2)
{
	LinkedList returnlist;
	if (list1.size = 0 || list2.size =0)
	{
	  return returnList	;
	}

	else if (list1->First->value < list2->First->value )
	{
		returnlist.Add(list1.Value)
				list1.Delete(list1->First->value);
		Merge(list1,list20;)

	}
	else if (list->First->value)
	{
		returnlist.Add(list2->First->value);
				list2.Delete(list2->First->Value);
				Merge(list1,list2);
	}

	else
	{
		return returnlist;
	}
	}
}


LinkedList::~LinkedList() {
	// TODO Auto-generated destructor stub
}

