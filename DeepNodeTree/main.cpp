/*Given the root of a binary tree, return 
 * a deepest node. For example, in the 
 * following tree, return d.
 *
 *         a
 *        / \
 *       b   c
 *      /
 *     d
 **/

#include <iostream>
#include <string>

class MyBinarySearchTree {
 	public:	
	class MyBinarySearchTree::MyNode {
		int key;
		std::string value;
		MyNode left, right;

		public:
		MyNode(int key, std::string value) {
			this.key = key;
			this.value = value;		
		}

		MyNode min() {
			if(left == null) {
				return this;
			}
			else {
				return left.min();
			}
		}
	};
};

int main() {
	return 0;
}
