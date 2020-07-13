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

std::string sortStrings(std::vector<char> vec) {
	std::string r_str {};
	std::string g_str {};
	std::string b_str {};

	for(char letter : vec) {
		if(letter == 'R') {
			r_str += letter;
		}
		else if(letter == 'G') {
			g_str += letter;
		}
		else if(letter == 'B') {
			b_str += letter;
		}
	}
	return r_str + g_str + b_str;
}

int main() {
	std::vector<char> vec {'G', 'B', 'R', 'R', 'B', 'R', 'G'};
	std::string new_str {sortStrings(};
	std::cout << new_str << std::endl;
	return 0;
}
