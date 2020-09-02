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
std::string currentPattern {""};

bool isParen(const char character);
char switchParen(const char character);
bool isPatternGood(const char character);

int minRemoved(const std::string sample) {
	int count {0};
	char current_char {};

	for(const char in : sample){
		if(currentPattern == "" && in == '(') {
			currentPattern += in;
		}
		else if(isPatternGood(in) == false) {
			count++;
		}
		current_char = in;
	}
	if(current_char == '(') {
		count++;
	}
	return count;
}

bool isParen(const char character) {
	if(character == OPEN_PAREN || character == CLOSED_PAREN) {
		return true;
	}
	return false;
}

bool isPatternGood(const char character) {
	if(currentPattern == "(" && character == ')') {
		currentPattern = "";
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

	std::string test_str {")("};
	int num_removed = minRemoved(test_str);
	std::cout << "Number of parentheses removed: " << num_removed << std::endl;
	return 0;
}
