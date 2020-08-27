/* Given a list of possibly overlapping 
 * intervals, return a new list of 
 * intervals where all overlapping intervals 
 * have been merged.
 *
 * The input list is not necessarily ordered 
 * in any way.
 *
 * For example, given [(1, 3), (5, 8), (4, 10), 
 * (20, 25)], you should return [(1, 3), (4, 10), 
 * (20, 25)].
 * */

#include <iostream>
#include <vector>

auto getList(const std::vector<std::pair<int, int>> &vec) {
	
	std::vector<std::pair<int, int>> new_vec {};
	int first;
	int second;
        int third;	
	for(size_t i {1}; i <= vec.size() - 1; i++) {
		// Checking previous
		if(i - 1 >= 0) {

		}
		// Checking next pair.
		if(i + 1 < vec.size()){
				
		}
	}	
	return new_vec;
}

int main() {
	return 0;
}
