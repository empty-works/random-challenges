/* cons(a, b) constructs a pair, and car(pair) and 
 * cdr(pair) returns the first and last element of 
 * that pair. For example, car(cons(3, 4)) returns 
 * 3, and cdr(cons(3, 4)) returns 4.
 *
 * Given this implementation of cons:
 *
 * def cons(a, b):
 * 	def pair(f):
 * 		return f(a, b)
 * 	return pair
 *
 * Implement car and cdr.
 * */

#include <iostream>
#include <functional>

template<typename T, typename W>
std::pair<T, W> cons(T a, W b) {
	std::pair<T, W> the_pair {a, b};	
	return the_pair;
}

int car(std::pair<int, int> the_pair) {
	return the_pair.first;
}

int cdr(std::pair<int, int> the_pair) {
	return the_pair.second;
}

int main() {

	std::cout << "First element: " << car(cons(3, 4)) <<  std::endl;
	std::cout << "Second element: " << cdr(cons(3, 4)) <<  std::endl;

	return 0;
}

