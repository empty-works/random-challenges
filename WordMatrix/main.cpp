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

bool checkLToR(std::string element, std::word) {
	return element == word;
}

bool isInMatrix(std::vector<std::string> vec, std::string word) {
	for(int i {0}; i < vec.size(); i++) {
		for(int j {0}; j < vec[i].size(); j++) {

		}
	}	
}

int main() {
	std::vector<std::string> vec {{'F', 'A', 'C', 'I'},
				      {'O', 'B', 'Q', 'P'},
				      {'A', 'N', 'O', 'P'},
				      {'M', 'A', 'S', 'S'}};
	return 0;
}
