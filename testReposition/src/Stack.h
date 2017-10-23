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
	void Push(int s );
	void Pop(Node*&,int&);
	void replace(Node*& node1,int newInt, int old);//problema 2
	void replace(int newint, int old);
	void isEmpty;
};

#endif /* STACK_H_ */
