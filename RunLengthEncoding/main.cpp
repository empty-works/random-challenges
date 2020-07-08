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
	char current {};
	for(size_t i {0}; i < in_str.length(); i++) {
		if(in_str[i] != current) {
			current = in_str[i];
		}
		
	}
}

int main() {

	
	return 0;
}
