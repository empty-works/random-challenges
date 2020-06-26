/* Given an array of integers and a number k, 
 * where 1 <= k <= length of the array, compute the 
 * maximum values of each subarray of length k.
 *
 * For example, given array = [10, 5, 2, 7, 8, 7] and 
 * k = 3, we should get: 
 * [10, 7, 8, 8], since: 
 *
 * - 10 = max(10, 5, 2)
 * -  7 = max(5, 2, 7)
 * -  8 = max(2, 7, 8)
 * -  8 = max(7, 8, 7)
 *
 * Do this in O(n) time and O(k) space. You can 
 * modify the input array in-place and you do not 
 * need to store the results. You can simply print them 
 * out as you compute them.
 * */

#include <iostream>
#include <algorithm>
#include <vector>

void showMax(std::vector<int> int_vec, int k) {
	std::cout << "[ ";
	for(size_t i {0}; i < int_vec.size(); i++) {
		if(i + k <= int_vec.size()) {
			std::cout << "((" << int_vec.at(i) << " " << int_vec.at(i + 1) << " " << int_vec.at(i + (k -1)) << "))";
			auto it = std::max_element(int_vec.begin() + i, int_vec.begin() + i + (k - 1));
			std::cout << *it << " ";	
		}
	}
	std::cout << "]" << std::endl;
}

int main() {
	
	std::vector<int> int_vec {10, 5, 2, 7, 8, 7};
	showMax(int_vec, 3);
	return 0;
}
