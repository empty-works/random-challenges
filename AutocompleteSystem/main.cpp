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

std::ostream &operator<<(std::ostream &os, std::vector<std::string> new_vec) {
	os << "[ ";
	for(std::string word : new_vec) {
		os << word << " ";
	}
	os << "]";
	return os;
}

std::vector<std::string> getResult(std::string str, std::vector<std::string> ref_vec) {
	std::vector<std::string> new_vec {};
	for(size_t i {0}; i < ref_vec.size(); i++) {
		bool isMatch{true};
		for(size_t j {0}; j < str.length(); j++) {
			if(str[j] != ref_vec.at(i)[j]) {
				isMatch = false;
				break;
			}	
		}	
		if(isMatch) {
			new_vec.push_back(ref_vec.at(i));
		}
	}
	return new_vec;
}

int main() {
	std::vector<std::string> ref_vec{"dog", "deer", "deal"};	
	std::vector<std::string> result_vec {getResult("de", ref_vec)}; 
	std::cout << "Result: " << result_vec << std::endl; 
	return 0;
}
