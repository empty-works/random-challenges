/* Given a 2D matrix of characters and a 
 * target word, write a function that returns 
 * whether the word can be found in the matrix 
 * by going left-to-right, or up-to-down.
 *
 * For example, given the following matrix:
 *
 * [['F', 'A', 'C', 'I'],
 *  ['O', 'B', 'Q', 'P'],
 *  ['A', 'N', 'O', 'P'],
 *  ['M', 'A', 'S', 'S']]
 *
 * and the target word 'FOAM', you should return 
 * true, since it's the leftmost column. Similary, 
 * given the target word 'MASS', you should return 
 * true since it's the last row.
 * */

#include <iostream>
#include <vector>
#include <string>

bool checkLToR(std::string element, std::string word) {
	if(element.length() == word.length()) {
		for(int i {0}; i < word.length(); i++) {
			std::cout << element[i] << std::endl;
			if(element[i] != word[i]) {
				return false;
			}	
		}
		return true;
	}
	else {
		return false;
	}
}

bool checkUpDown(std::vector<std::string> vec, int index, std::string word) {
	for(int i {0}; i < vec.size(); i++) {
		if(word[i] != vec[i][index]) {
			return false;
		}
	}	
	return true;
}

bool isInMatrix(std::vector<std::string> vec, std::string word) {
	for(int i {0}; i < vec.size(); i++) {
		if(checkLToR(vec[i], word) == true) {
			return true;
		}
		else if(checkUpDown(vec, i, word) == true){
			return true;
		}
	}	
	return false;	
}

int main() {
	std::vector<std::string> vec {{'F', 'A', 'C', 'I'},
				      {'O', 'B', 'Q', 'P'},
				      {'A', 'N', 'O', 'P'},
				      {'M', 'A', 'S', 'S'}};
	std::cout << "Checking up to down search: " << checkUpDown(vec, 0, "FOAM") << std::endl;
	std::cout << "Checking left to right search: " << isInMatrix(vec, "MASS") << std::endl;

	return 0;
}
