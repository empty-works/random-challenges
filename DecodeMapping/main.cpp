/* Given the mapping a = 1, b = 2, ... z = 26, 
 * and an encoded message, count the number of 
 * ways it can be decoded.
 *
 * For example, the message '111' would give 3, 
 * since it could be decoded as 'aaa', 'ka', 
 * and 'ak'.
 *
 * You can assume that the messages are 
 * decodable. For example, '001' is not 
 * allowed.
 * */

#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <vector>

int getCount(char *seq, int n) {
	int count {0};
	if(n == 0 || n == 1) {
		return 1;
	}
	// Clear leading zeroes.
	if(seq[0] == '0') {
		return 0;
	}

	// Is the last digit greater than zero? Keep going until n is 1 or 0.
	if(seq[n - 1] > 0) {
		count = getCount(seq, n - 1); 	
	}	
	// Now count double digits under 27.
	if((seq[n - 2] == '1' || seq[n - 2] == '2') && seq[n - 1] < '7') {
		count += getCount(seq, n - 2);
	}	
	return count;
}

int main() {
	std::map<int, char> encoded;
	encoded[1] = 'a';
	encoded[2] = 'b';
	encoded[3] = 'c';
	encoded[4] = 'd';
	encoded[5] = 'e';
	encoded[6] = 'f';
	encoded[7] = 'g';
	encoded[8] = 'h';
	encoded[9] = 'i';
	encoded[10] = 'j';
	encoded[11] = 'k';
	encoded[12] = 'l';
	encoded[13] = 'm';
	encoded[14] = 'n';
	encoded[15] = 'o';
	encoded[16] = 'p';
	encoded[17] = 'q';
	encoded[18] = 'r';
	encoded[19] = 's';
	encoded[20] = 't';
	encoded[21] = 'u';
	encoded[22] = 'v';
	encoded[23] = 'w';
	encoded[24] = 'x';
	encoded[25] = 'y';
	encoded[26] = 'z';

	/*
	std::cout << "Enter a coded message: ";
	std::string msg {};
	std::cin >> msg;
	
	std::vector<char> chr_vec {};	
	std::cout << "Message entered: " << msg << std::endl;
	for(auto chr : msg) {
				
	}
*/
	char seq[] = "111";	
	std::cout << "Digit sequence: " << seq << std::endl;
	int seq_len = std::strlen(seq);
	std::cout << "Number of combos: " << getCount(seq, seq_len) << std::endl;	
	return 0;
}
