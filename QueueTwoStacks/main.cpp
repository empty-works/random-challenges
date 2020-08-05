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
	public:
	std::vector<T> vec1;
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
	vec1.pop_back();
	std::cout << "Popping: " << vec2.at(vec2.size() - 1);
	vec2.pop_back();
}

int main() {
	MyQueue<std::string> mq;
	mq.enqueue("Hello");
	mq.enqueue("There");
	mq.enqueue("Nope");
	mq.enqueue("Yup");
	std::cout << mq.vec1 << std::endl;
	std::cout << mq.vec2 << std::endl;	
	return 0;
}
