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
	char seq[] = "111";	
	std::cout << "Digit sequence: " << seq << std::endl;
	int seq_len = std::strlen(seq);
	std::cout << "Number of combos: " << getCount(seq, seq_len) << std::endl;	
	return 0;
}
