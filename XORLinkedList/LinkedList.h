#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList {
	private:
		class Node {
			int data;	
			public:
				Node both;
				Node(int data): data{data};	
		};
	public:		
		void add(Node node);
		Node get(int index);
};

#endif
