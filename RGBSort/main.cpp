/* Given an array of strictly the 
 * Characters 'R', 'G', 'B', segregate
 * the values of the array so that all 
 * the Rs come first, the Gs come 
 * second, and the Bs come last. You 
 * can only swap elements of the array. 
 *
 * Do this in linear time and in-place.
 *
 * For example, given the array ['G', 
 * 'B', 'R', 'R', 'B', 'R', 'G'], it 
 * should become ['R', 'R', 'R', 'G', 
 * 'G', 'B', 'B'].
 * */

#include <iostream>
#include <vector>
#include <decque>

void sortDecque(std::vector<char> vec) {
	std::decque<char> dec;
	for(char &letter : vec) {
		if(letter == 'R') {
						
		}			
	}
}

void sortStrings(std::vector<char> vec) {
	std::string r_str {};
	std::string g_str {};
	std::string b_str {};

	for(char letter : vec) {

	}
}

int main() {
	return 0;
}
