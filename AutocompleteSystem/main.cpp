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

std::vector<std::string> getResults(std::string search_str, std::vector<std::string> ref_vec) {
	std::vector<std::string> result_vec {};
	std::copy_if(ref_vec.begin(), ref_vec.end(), result_vec.begin(), [](){});	
	return result_vec;
}

int main() {
	
	return 0;
}
