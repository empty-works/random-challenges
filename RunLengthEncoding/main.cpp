/* Run-length encoding is a fast and simple method of encoding 
 * strings. The basic idea is to represent repeated successive 
 * characters as a single count and character. For example, 
 * the string "AAAABBBCCDAA" would be encoded as 
 * "4A3B2C1D2A".
 *
 * Implement run-length encoding and decoding. You can assume 
 * the string to be encoded have no digits and consists solely 
 * of alphabetic characters. You can assume the string to be 
 * decoded is valid.
 * */

#include <iostream>
#include <string>

std::string encode(const std::string in_str) {
	char current {in_str[0]};
	std::string new_str {};
	int count {0};
	for(size_t i {0}; i < in_str.length(); i++) {
		if(in_str[i] != current) {
			new_str += std::to_string(count) + current;
			// Reset.
			current = in_str[i];
			count = 0;
		}
		count++;	
	}
	return new_str;
}

int main() {

	std::string new_str {encode("AAAABBBCCDAA")};	
	std::cout << new_str << std::endl;
	return 0;
}
