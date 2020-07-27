/* Implement a stack that has the following methods:
 *
 * - push(val), which pushes an element onto the stack
 * - pop(), which pops off and returns the topmost 
 *   element of the stack. If there are no elements 
 *   in the stack, then it should throw an error or 
 *   return null.
 * - max(), which returns the maximum value in the 
 *   stack currently. If there are no elements in the 
 *   stack, then it should throw an error or return 
 *   null.
 *
 * Each method should run in constant time.
 * */

#include <iostream>
#include <vector>
#include <deque>

template<typename T>
class NewStack {
	std::deque<T> dec;
	public:
	void push(T val);	
	T pop();
	T max();
};

template<typename T>
void NewStack<T>::push(T val) {
	dec.push_back(val);
}

template<typename T>
T NewStack<T>::pop() {
	return dec.pop_front();	
}

int main() {
	return 0;
}
