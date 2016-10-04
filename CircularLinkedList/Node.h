#pragma once
/* 	Basic Doubly-Linked Node implemented in C++
	Note: I felt this implementation too trivial to bother creating an adjoining cpp file
	Alex vanKooten
	St#4789665
	Created 30/09/2016	*/

template <class E> struct Node {

	private:
		E data;				//data stored within a node (ambiguous type)
		Node* right;		//the next node in the list
		Node* left;			//the previous node in the list

	public:
		/*Note how cool people make constructors*/
		void Node(E data) : data(data), right(NULL), left(NULL) {}	

		void Node(const Node& primeNode) {			//copy constructor from Node
			this->data = primeNode.data;
			this->right = primeNode.right;
			this->left = primeNode.left;
		}

		void ~Node() {}								//destructor
		E getData() {								//return the data in the node
			return data;
		}

		Node getRight() {							//returns the next node
			return right;
		}

		Node getLeft() {							//returns the previous node
			return left;
		}

		void setRight(Node* migi) {					//set the next node pointed to
			this->right = migi;
		}

		void setLeft(Node* hidari) {				//set the previous node pointed to
			this->left = hidari;
		}


}; //Node.h