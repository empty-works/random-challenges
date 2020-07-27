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
#include <algorithm>

template<typename T>
class NewStack {
	std::deque<T> dec;
	public:
	void push(const T &val);	
	T pop();
	T max();
};

template<typename T>
void NewStack<T>::push(const T &val) {
	dec.push_back(val);
}

template<typename T>
T NewStack<T>::pop() {
	T val = dec.at(0);
	dec.pop_front();	
	return val;
}

template<typename T>
T NewStack<T>::max() {	
	T max {dec.at(0)};
	for(T val : dec) {
		if(max < val) {
			max = val;
		}		
	}
	return max;
}

int main() {

	NewStack<int> ns;
	ns.push(1);
	ns.push(2);
	ns.push(3);
	std::cout << ns.pop() << std::endl;
	std::cout << ns.max() << std::endl;
	return 0;
}
