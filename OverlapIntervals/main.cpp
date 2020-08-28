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
	bool first_check = false;
	bool second_check = false;
	for(size_t i {1}; i <= vec.size() - 1; i++) {
		// Checking previous
		if(i - 1 >= 0) {
			if(vec.at(i - 1).second >= vec.at(i).first) {
				first_check = true;	
			}	
		}
		// Checking next pair.
		if(i + 1 < vec.size()){
			if(vec.at(i).second >= vec.at(i + 1).first) {
				second_check = true;
			}			
		}
	}	
	return new_vec;
}

int main() {
	return 0;
}
