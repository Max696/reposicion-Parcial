/*
 * Stack.h
 *
 *
 *      Author: ROG
 */

#ifndef STACK_H_
#define STACK_H_
#include "Node.h"
class Stack {
public:
	Stack();
	virtual ~Stack();
	Node*stack;
	void Push(Node*&, int);
	void Pop(Node*&,int&);
	Node replace(Node*& node1,int newInt, int old);//problema 2
};

#endif /* STACK_H_ */
