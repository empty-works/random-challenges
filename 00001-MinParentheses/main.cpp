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

char OPEN_PAREN {'('};
char CLOSED_PAREN {')'};

bool isParen(const char character);
char switchParen(const char character);

int minRemoved(const std::string sample) {
	char currentParen {OPEN_PAREN};
	int count {0};

	for(const char in : sample){
		if(isParen(in) == true) {
			if(in == currentParen) {
				// Switch the parenthesis to other parenthesis.
				currentParen = switchParen(in);
			}	
			else {
				count++;
			}
		}	
	}
}

bool isParen(const char character) {
	if(character == OPEN_PAREN || character == CLOSED_PAREN) {
		return true;
	}
	return false;
}

char switchParen(const char character) {
	if(character == OPEN_PAREN) {
		return CLOSED_PAREN;
	}
	else {
		return OPEN_PAREN;
	}
}

int main() {

	return 0;
}
