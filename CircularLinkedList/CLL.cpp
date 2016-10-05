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
	void CLL(const CLL& primeList) {
		this->size = primeList.size;
		/*check if list to be copied is empty*/
		if (primeList.size == 0) {
			this->head = NULL;
			return;
		}
		else {	//list has 1 or more nodes to be copied
			this->head = new Node(primeList.head->getData());	//create a new head 
			//this->setNext(head.getNext());						//set heads next node
			//this->setPrev(head.getPrev());						//set heads previous node
			Node* primeList_currentNode = primeList.head();
			Node* this_currentNode = this->head();				//set current nodes

			for (int i = 0; i < primeList.size; i++) {
				/*create a new successor node*/
				Node* nextNode = new Node(primeList_currentNode->getNext()->getData());
				/*set the successor of the current node as the next node*/
				this_currentNode->setNext(nextNode);	
				/*set the predecessor of the next node as the current node*/
				this_currentNode.getNext()->setPrev(this_currentNode);	
				this_currentNode = this_currentNode->getNext();	//set current node to the next node
				primeList_currentNode = primeList_currentNode->getNext(); //go to the next node on the previous list as well
			}
		}
	}

	/*destructor*/
	void ~CLL() {

	}

	/*clear all data from list*/
	void clear() {
		Node tempNode = new Node();
		while (this->size > 0) {
			tempNode->setNext(this->getNext());
			this
			this->size--;
		}
	}

	/*add data to the linked-list at pointer*/
	void insert(E data) {
		if (size == 0) {
			this->head = new Node(E data);
			head.setRight(head);
			head.setLeft(head);
		}
	}

	/*move the pointer clockwise*/
	void next() {
		
	}

	/*move the pointer counter-clockwise*/
	void prev() {

	}

	/*return the data at the pointer*/
	E get() {

	}

	/*remove and return the Node at pointer*/
	Node remove() {

	}

}; //CLL.cpp