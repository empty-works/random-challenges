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
	std::map<char, int> encoded;
	encoded['a'] = 1;
	encoded['b'] = 2;
	encoded['c'] = 3;
	encoded['d'] = 4;
	encoded['e'] = 5;
	encoded['f'] = 6;
	encoded['g'] = 7;
	encoded['h'] = 8;
	encoded['i'] = 9;
	encoded['j'] = 10;
	encoded['k'] = 11;
	encoded['l'] = 12;
	encoded['m'] = 13;
	encoded['n'] = 14;
	encoded['o'] = 15;
	encoded['p'] = 16;
	encoded['q'] = 17;
	encoded['r'] = 18;
	encoded['s'] = 19;
	encoded['t'] = 20;
	encoded['u'] = 21;
	encoded['v'] = 22;
	encoded['w'] = 23;
	encoded['x'] = 24;
	encoded['y'] = 25;
	encoded['z'] = 26;

	std::cout << "Enter a coded message: ";
	std::string msg {};
	std::cin >> msg;
	

	return 0;
}
