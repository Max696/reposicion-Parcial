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
int LinkedList::Delete(int data)
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
   if(!aux||aux->value !=data)return value;
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
LinkedList LinkedList::Merge(LinkedList list1,LinkedList list2)
{
	LinkedList returnList;
	/*
	foreach(var s in list1)
	{
		returnList.add(s);
	}
	foreach(var t in list2)
	{

	}
	*/

	for(int i = 0; i<list1.size(); i++) {
			returnList.Add(list1.Delete(0));
		}
	for(int i= list1.size();i<list2.size(0);i++)
	{
		returnList.Add(list2.Delete(0));
	}

LinkedList::~LinkedList() {
	// TODO Auto-generated destructor stub
}

