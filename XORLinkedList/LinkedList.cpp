#include "LinkedList.h"

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
