#include "LinkedList.h"

Node* LinkedList::XOR (Node *a, Node *b) {
	return (Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}

void LinkedList::add(int data) {
	

	Node newNode {data};
	if(head == NULL) {
		*head = newNode;
	}		
	else {
		Node current = *head;	
		while(current.both != NULL) {
			current = *current.both;
		}
		*current.both = newNode;
	}	
	
}

Node LinkedList::get(int index) {

}
