/*
 * CircularLinkedList.h
 *
 *  Created on: Oct 22, 2017
 *      Author: ROG
 */

#ifndef CIRCULARLINKEDLIST_H_
#define CIRCULARLINKEDLIST_H_
#include "Node.h"

class CircularLinkedList {
public:
	CircularLinkedList();
	virtual ~CircularLinkedList();
	void Add(int v);
	    void Delete(int v);
	    bool isEmpty() { return actual == NULL; }
	    void next();
	    int actualData() { return actual->value; }
	    Node*actual;
};

#endif /* CIRCULARLINKEDLIST_H_ */
