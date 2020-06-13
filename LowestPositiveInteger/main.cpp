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

int main() {
	std::vector<int> int_vec {3, 4, -1, 1};		
	std::sort(int_vec.begin(), int_vec.end());		
	int lastElement = int_vec.at(int_vec.size() - 1);
	return 0;
}

