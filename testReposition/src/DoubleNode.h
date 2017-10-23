/*
 * DoubleNode.h
 *
 *  Created on: Oct 22, 2017
 *      Author: ROG
 */

#ifndef DOUBLENODE_H_
#define DOUBLENODE_H_
#include <iostream>
using namespace std;

class DoubleNode {
public:
	DoubleNode();
	virtual ~DoubleNode();
	int Value;
		DoubleNode* Previous;
		DoubleNode* Next;
};

#endif /* DOUBLENODE_H_ */
