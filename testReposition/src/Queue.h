/*
 * Queue.h
 *
 *
 *      Author: ROG
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "Node.h"
class Queue {
public:
    Queue();
    virtual ~Queue();


   void Enqueue(Node*&start,Node*&End, int _value);
   void Dequeue(Node*&start, Node*&End, int& _value);
    bool isEmpty(Node* start);
	Node*start;
	Node*end;

};

#endif /* QUEUE_H_ */
