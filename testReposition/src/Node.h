/*
 * Node.h
 *
 *  Created on: Oct 22, 2017
 *      Author: ROG
 */
#include <iostream>
using namespace std;
#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node(int s, Node * t);
	virtual ~Node();
	 int value;
     Node *next;


};

#endif /* NODE_H_ */
