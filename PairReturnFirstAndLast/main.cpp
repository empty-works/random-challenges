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

std::pair<int, int> cons(int a, int b) {
	std::pair<int, int> the_pair {a, b};	
	return the_pair;
}


int car(std::function<std::pair<int, int>(int, int)> func) {
	return obj.first;
}

int cdr(std::pair<int, int> the_pair) {
	return the_pair.second;
}

int main() {

		
	return 0;
}

