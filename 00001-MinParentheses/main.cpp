/* Given a string of parentheses, write a 
 * funtion to compute the minimum number of 
 * parentheses to be removed to make the 
 * string valid (i.e. each open parenthesis 
 * is eventually closed).
 *
 * For example, given the string "()())()", 
 * you should return 1. Given the string 
 * ")(", you should return 2, since we must 
 * remove all of them.
 * */

#include <iostream>
#include <string>

std::string OPEN_PAREN {"("};
std::string CLOSED_PAREN {")"};

int minRemoved(const std::string sample) {
	std::string currentParen {OPEN_PAREN};
	int count {0};

	for(const char in : sample){
			
	}
}

bool isParen(const char character) {
	if(character == OPEN_PAREN || character == CLOSED_PAREN) {
		return true;
	}
	return false;
}

int main() {

	return 0;
}
