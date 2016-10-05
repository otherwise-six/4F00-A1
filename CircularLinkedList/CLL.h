#pragma once

/* 	Basic Circular Linked List implemented in C++
	Header file for CLL.cpp
	Alex vanKooten
	St#4789665
	Created 30/09/2016	*/

#include <iostream>
#include "Node.h"

using namespace std;

template <class E> struct CLL {

	private:
		int size;						//number of Nodes in the list
		Node<E> head;					//number of the top data on the stack

	public:
		void CLL();							//constructor
		void CLL(const CLL&);				//copy constructor
		void ~CLL();						//destructor
		void clear();						//clear all data from list
		void insert(E);						//add data to the linked-list at pointer
		void next();						//move the pointer clockwise
		void prev();						//move the pointer counter-clockwise
		E get();							//return data at pointer
		Node remove();						//remove and return data at pointer

}; //CLL.h