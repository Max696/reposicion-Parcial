//============================================================================
// Name        : testReposition.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "DoubleLinkedList.h"
#include "CircularLinkedList.h"

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
// The solution of the problemas are in the nedded structures (list for example)
	//tests
	LinkedList prueba ;
	Stack prueba1 ;
	/*
	DoubleLinkedList q;
	CircularLinkedList n;
	*/
	prueba1.push(4);
     prueba.push(5);
     prueba.push(6);
     prueba.replace(7,6);


	prueba.Add(5);
	prueba.Delete(5);
	LinkedList prueba2;
	prueb2.Add(10);
	prueba2.Add(15);
	prueba.Add(20);
	prueba.Add(25);
	LinkedList preubamerge;
	pruebamerge =prueba.merge(prueba,prueba2);
	pruebamerge.show(); //problem3





	return 0;
}
