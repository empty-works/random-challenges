/* Implement a queue using two stacks. Recall that a queue 
 * is a FIFO (first-in, first-out) data structure with the 
 * following methods: enqueue, which inserts an element into 
 * the queue, and dequeue, which removes it.
 * */

#include <iostream>
#include <vector>

template<typename T>
class MyQueue {
	std::vector<T> vec1;
	std::vector<T> vec2;
	public:
	void enqueue(T obj);
	void dequeue();
};

template<typename T>
void MyQueue<T>::enqueue(T obj) {
	vec1.push_back(obj);
	vec2.clear();
	for(size_t i {vec1.size() - 1}; i >= 0; i--) {
		vec2.push_back(vec1.at(i));	
	}
}

int main() {

	return 0;
}
