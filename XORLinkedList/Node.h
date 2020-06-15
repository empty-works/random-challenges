#ifndef NODE_H_
#define NODE_H_

class Node {
	private:
		int data;
	public:
		Node *both;
		Node(int data): data(data) {}	
};

#endif
