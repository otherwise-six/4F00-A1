#pragma once

/* 	Basic Circular Linked List implemented in C++
	Alex vanKooten
	St#4789665
	Created 30/09/2016	*/

#include <iostream>
#include "CLL.h"

using namespace std;

template <class E> struct CLL {

	/*this is how cool kids make constructors apparently*/
	void CLL() : head(NULL), size(0) {}

	/*copy constructor*/
	void CLL(const CLL& listly) {
		/*check if list to be copied is empty*/
		if (listly.size == 0) {
			this->head = NULL;
			this->size = 0;
			return;
		}
		else {	//list has 1 or more nodes to be copied
			this->head = new Node(listly.head->getData());		//create a new head 
			Node* listly_currentNode = listly.head();
			Node* this_currentNode = this->head();				//set current nodes

			while (list_currentNode->getNext()) {
				/*create a new successor node*/
				Node* nextNode = new Node(list_currentNode->getNext()->getData());
				this_currentNode->setNext(nextNode);	//set the successor as the next node for the current node
				this_currentNode = this_currentNode->getNext();
				listly_currentNode = listly_currentNode->getNext();
			}
		}
	}

	/*destructor*/
	void ~CLL() {

	}

	/*clear all data from list*/
	void clear() {

	}

	/*add data to the linked-list at pointer*/
	void insert(E data) {

	}

	/*move the pointer clockwise*/
	void next() {

	}

	/*move the pointer counter-clockwise*/
	void back() {

	}

	/*return the data at the pointer*/
	E get() {

	}

	/*remove and return the Node at pointer*/
	Node remove() {

	}

}; //CLL.cpp