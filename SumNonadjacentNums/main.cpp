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
#include <vector>

std::ostream &operator<<(std::ostream &os, const std::vector<int> int_vec) {
	os << "[ ";
	for(int num : int_vec) {
		os << num << " ";
	}
	os << "]";
	return os;
}

int getMax(std::vector<int> int_vec) {
	int incl = int_vec.at(0);	
	int excl = 0;

	for(size_t i {1}; i < int_vec.size(); i++) {
		incl = excl + int_vec.at(i);	
		excl = incl > excl ? incl : excl;
	}
	return ((incl > excl) ? incl : excl);
}

int main() {
	size_t n {0};
	std::cout << "Enter number of digits: ";
	std::cin >> n;	
	std::vector<int> int_vec {};
	for(size_t i {0}; i < n; i++) {
		std::cout << "Enter digit [" << i + 1 << "]: ";
		int new_num {0};
		std::cin >> new_num;
	       	int_vec.push_back(new_num);	
	}

	std::cout << "Largest sum: " << getMax(int_vec) << std::endl;
	return 0;
}
