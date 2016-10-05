#pragma once
/* 	Basic Doubly-Linked Node implemented in C++
	Note: I felt this implementation too trivial to bother creating an adjoining cpp file
	Alex vanKooten
	St#4789665
	Created 30/09/2016	*/

template <class E> struct Node {

	private:
		E data;				//data stored within a node (ambiguous type)
		Node* next;		//the next node in the list
		Node* prev;			//the previous node in the list

	public:
		/*Note how cool people make constructors*/
		void Node(E data) : data(data), next(NULL), prev(NULL) {}	

		void Node(const Node& primeNode) {			//copy constructor from Node
			this->data = primeNode.data;
			this->next = primeNode.next;
			this->prev = primeNode.prev;
		}

		void ~Node() {}								//destructor

		E getData() {								//return the data in the node
			return data;
		}

		Node getNext() {							//returns the next node
			return next;
		}

		Node getPrev() {							//returns the previous node
			return prev;
		}

		void setNext(Node* migi) {					//set the next node pointed to
			this->next = migi;
		}

		void setPrev(Node* hidari) {				//set the previous node pointed to
			this->prev = hidari;
		}


}; //Node.h