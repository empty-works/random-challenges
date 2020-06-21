/* Implement an autocomplete system. That is, 
 * given a query string s and a set of all 
 * possible query strings, return all 
 * strings in the set that have s as a prefix.
 *
 * For example, given the query string de and 
 * the set of strings [dog, deer, deal], 
 * return [deer, deal].
 *
 * Hint: try preprocessing the dictionary into 
 * a more efficient data structure to speed up 
 * queries.
 * */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> getResult(std::string str, std::vector<std::string> ref_vec) {
	std::vector<std::string> new_vec {};
	for(size_t i {0}; i < ref_vec.size(); i++) {
		bool isMatch{true};
		for(size_t j {0}; j < str.length(); j++) {
				
		}	
		if(isMatch) {
		}
	}
}

int main() {
	
	return 0;
}
