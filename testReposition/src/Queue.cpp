*/*
 * Queue.cpp
 *
 *
 *      Author: ROG
 */

#include "Queue.h"

Queue::Queue() {
	// TODO Auto-generated constructor stub


}

bool Queue::isEmpt y(Node*start){
	if (start==NULL)//if the start value is pointing to nothing its empty
	{
		return true;
	}

	else//otherwise is true
	{
		return false;
	}
}
void Queue::Enqueue(Node*&start,Node*&end,int _value)
{
	Node* aux = new Node(_value, NULL);//create a new Node with the given value


   if(Empty(start)) // if the  queue is empty the given value now its the first value of the queue
   {
	   start=aux;
   }
   else// else aux pointer (which have the given value) is pointed to the next value
   {
	   end->next=aux;
   }

}
void Queue::Dequeue(Node*& start, Node*& end, int&_value)
{
	_value=start->value;//the given reference value is converted into the first element in queue
	Node*aux;// create a new node
	aux = start;
	if(start==end) //if the list just have one element is set null(empty list)
	{
		start=NULL;
		end=NULL;
	}
	else // else the next node of the first element is converted into the first
	{
		start=start->next;
	}
	delete aux;// delete the  start node;

}
Queue::~Queue() {
	// TODO Auto-generated destructor stub
}

