/*
 * Given an arry of integers, find the first missing positive integer
 * in linear time and constant space. In other words, find the lowest 
 * positive integer that does not exist in the array. The array can 
 * contain duplicates and negative numbers as well.
 *
 * For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] 
 * should give 3.
 *
 * You can modify the input array in-place.
 * */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

std::ostream &operator<<(std::ostream &os, const std::vector<int> &int_vec) {
	os << "[ ";
	for(auto num : int_vec) {
		os << num << " ";
	}	
	os << "]";
	return os;
}

void findLowestInt(std::vector<int>::iterator &, std::vector<int> &);

int main() {
	std::vector<int> int_vec {1, 2, 0};		
	std::cout << "Input vector: " << int_vec << std::endl;	
	std::sort(int_vec.begin(), int_vec.end());		
	auto it = std::find_if(int_vec.begin(), int_vec.end(), [](int x){return x > 0;});
	findLowestInt(it, int_vec);
	return 0;
}

void findLowestInt(std::vector<int>::iterator &it, std::vector<int> &int_vec) {
	if(*it > 1) {
		std::cout << --*it << std::endl;
	}
	else {
		int lastInt {*it};
		bool numFound = false;
		while(it != int_vec.end()) {
			++it;
			if(lastInt != *it && ++lastInt != *it) { // Screen out repeated numbers.
				std::cout << lastInt << std::endl;
				numFound = true;
				break;
			}
		}
		if(!numFound) {
			std::cout << int_vec << std::endl;
			std::cout << int_vec.size() << std::endl;
		}	
	}
}
