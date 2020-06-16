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

	std::cout << "Enter a coded message: ";
	std::string msg {};
	std::cin >> msg;
	
		

	return 0;
}
