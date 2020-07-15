/* Given a string, find the 
 * palindrome that can be made by
 * inserting the fewest number of 
 * characters as possible anywhere 
 * in the word. If there is more than 
 * one palindrome of minimum 
 * length that can be made, return the 
 * lexicographically earliest one 
 * (the first one alphabetically).
 *
 * For example, given the string "race", 
 * you should return "ecarace", since we 
 * can add three letters to it (which is 
 * the smallest amount to make a palindrome). 
 * There are seven other palindromes that can 
 * be made from "race" by adding three letters, 
 * but "ecarace" comes first alphabetically.
 *
 * As another example, given the string "google", 
 * you should return "elgoogle".
 * */

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

std::ostream &operator<<(std::ostream &os, const std::list<char> &obj) {
	for(const char letter : obj) {
		os << letter;
	}		
	return os;
}

std::list<char> convertToList(std::string str) {
	std::list<char> str_list;
	for(const char letter : str) {
		str_list.push_back(letter);
	}
	return str_list;
}

int main() {
	std::string first_ {"google"};
	std::string second_ {"google"};
	std::cout << convertToList(first_);
	std::reverse(second_.begin(), second_.end());
        std::cout << convertToList(second_);	
	return 0;
}
