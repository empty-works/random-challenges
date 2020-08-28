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
		if(first_check == true && second_check == true) {
			new_vec.push_back(vec.at(i));
		}
	}	
	return new_vec;
}

int main() {

	std::vector<std::pair<int, int>> vec {std::make_pair(1, 3), std::make_pair(5, 8), 
	std::make_pair(4, 10), std::make_pair(20, 25)};

	std::vector<std::pair<int, int>> new_vec = getList(vec); 
	for(int i {0}; i < new_vec.size(); i++) {
		std::cout << new_vec.at(i).first << " " << new_vec.at(i).second << std::endl;
	}
	return 0;
}
