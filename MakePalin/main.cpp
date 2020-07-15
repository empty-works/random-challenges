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

int getMatchSize(std::list<char> list1, std::list<char> list2) {
	if(list1.size() == list2.size()) {
		while(list1 != list2) {
			list1.pop_back();
			list2.pop_front();
		}
	}
	return list1.size();
}

int main() {
	std::string first_ {"race"};
	std::string second_ {"race"};
	std::list<char> list1 {convertToList(first_)};
	std::cout << list1 << std::endl;

	std::reverse(second_.begin(), second_.end());
	std::list<char> list2 {convertToList(second_)};
        std::cout << list2 << std::endl;	

	int size {getMatchSize(list1, list2)};
	std::cout << size << std::endl;

	std::string cutStr = first_.substr(size, first_.size() - 1);
	std::cout << cutStr << std::endl;

	std::string new_str {second_ + cutStr};
	std::cout << new_str << std::endl;
	return 0;
}
