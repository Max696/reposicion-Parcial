/*
 * LinkedList.h
 *
 *
 *      Author: ROG
 */
#include "Node.h"
#include <iostream>
using namespace std;
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef Node *n;

class LinkedList {
public:
	  void Add(int v);
		    int Delete(int v);
		    bool isEmpty() { return First == NULL; } ;
		    void Show();
		    void next();
		    void top();
		    void last();
		    int getsize();
		    LinkedList Merge(LinkedList list1, LinkedList list2);
	LinkedList();
	virtual ~LinkedList();

private:
	    n First;
	    n Actual;
	    int size;

	    };

#endif /* LINKEDLIST_H_ */
