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

std::list<char> organize(std::string str) {
	std::list<char> str_list;
	for(const char letter : str) {
		str_list.push_back(letter);
	}
	return str_list;
}

int main() {
		
	return 0;
}
