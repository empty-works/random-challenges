#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "Node.h"

class LinkedList {
	private:
		Node *head {NULL};
	public:		
		void add(int data);
		Node get(int index);
};

#endif
