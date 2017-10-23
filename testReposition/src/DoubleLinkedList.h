/*
 * DoubleLinkedList.h
 *
 *  Created on: Oct 22, 2017
 *      Author: ROG
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_
#include "DoubleNode.h"
#include <iostream>
using namespace std;



class DoubleLinkedList {
public:
	DoubleLinkedList();
	virtual ~DoubleLinkedList();

	DoubleNode* Head = new DoubleNode();
	void Add(int _value);
	bool  deletFirstValue(int _value);
	void IsEmpty();
	int Count(int _value);
	void Turn();


};

#endif /* DOUBLELINKEDLIST_H_ */
