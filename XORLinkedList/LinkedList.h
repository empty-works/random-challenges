#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList {
	private:
		class Node {
			int data;	
			public:
				Node *both;
				Node(int data): data(data) {}	
		};
		Node head;
	public:		
		void add(int data);
		Node get(int index);
};

#endif
