#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "Node.h"

class LinkedList {
	private:
		Node *head {NULL};
	public:		
		Node* XOR (Node *a, Node *b);
		void add(int data);
		Node get(int index);
};

#endif
