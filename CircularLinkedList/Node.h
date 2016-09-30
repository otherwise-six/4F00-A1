#pragma once
/* 	Basic Node implemented in C++
	Note: I felt this implementation too trivial to bother creating an adjoining cpp file
	Alex vanKooten
	St#4789665
	Created 30/09/2016	*/

template <class E> struct Node {

	private:
		E data;				//data stored within a node (ambiguous type)
		Node* next;			//the next node in the list
		//maybe implement back node too

	public:
		void Node(E data) : data(data), next(NULL) {}	//apparently this is how cool people make constructors
		void Node(const Node& nodely) {					//copy constructor from Node
			this->data = nodely.data;
			this->next = nodely.next;
		}
		void ~Node() {}								//destructor
		E getData() {								//return the data in the node
			return data;
		}
		Node getNext() {							//returns the next node
			return next;
		}
		void setNext(Node* nextly) {				//set the next node pointed to
			this->next = nextly;
		}

}; //Node.h