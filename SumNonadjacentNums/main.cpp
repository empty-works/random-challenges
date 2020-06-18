/* Given a list of integers, write a function 
 * that returns the largest sum of 
 * non-adjacent numbers. Numbers can be 0 or 
 * negative.
 *
 * For example,
 * [2, 4, 6, 2, 5] should return 13, since we 
 * pick 2, 6, and 5. [5, 1, 1, 5] should 
 * return 10, since we pick 5 and 5.
 *
 * Follow-up: can you do this in O(N) time 
 * and constant space?
 * */

#include <iostream>

int main() {
	size_t n {0};
	std::cout << "Enter number of digits: ";
	std::cin >> n;	
	int *int_arr = new int[n];
	for(size_t i {0}; i < n; i++) {
		std::cout << "Enter digit [" << i + 1 << "]: ";
		std::cin >> int_arr[i];
	}
	delete [] int_arr;
	return 0;
}
