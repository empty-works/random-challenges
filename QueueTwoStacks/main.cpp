/* Implement a queue using two stacks. Recall that a queue 
 * is a FIFO (first-in, first-out) data structure with the 
 * following methods: enqueue, which inserts an element into 
 * the queue, and dequeue, which removes it.
 * */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

template<typename T>
std::ostream &operator<<(std::ostream &os, std::vector<T> &vec) {
	for(auto obj : vec) {
		os << obj;
	}
	return os;
}

template<typename T>
class MyQueue {
	std::vector<T> vec1;
	public:
	std::vector<T> vec2;
	void enqueue(T obj);
	void dequeue();
};

template<typename T>
void MyQueue<T>::enqueue(T obj) {
	vec1.push_back(obj);
	vec2.clear();
	for(size_t i {0}; i < vec1.size(); i++) {
		vec2.push_back(vec1.at(i));	
	}
	std::reverse(vec2.begin(), vec2.end());	
}

template<typename T>
void MyQueue<T>::dequeue() {
	if(vec1.size() > 0 && vec2.size() > 0) {
		vec1.pop_back();
		std::cout << "Popping: " << vec1.at(0) << std::endl;
		vec2.pop_back();
	}
}

int main() {
	MyQueue<std::string> mq;
	mq.enqueue("Hello");
	std::cout << mq.vec2 << std::endl;
	mq.enqueue("There");
	std::cout << mq.vec2 << std::endl;
	mq.enqueue("Nope");
	std::cout << mq.vec2 << std::endl;
	mq.enqueue("Yup");
	std::cout << mq.vec2 << std::endl;
	mq.dequeue();
	std::cout << mq.vec2 << std::endl;
	return 0;
}
