/* Using a function rand5() that returns 
 * an integer from 1 to 5 (inclusive) 
 * with uniform probability, implement 
 * a function rand7() that returns an 
 * integer from 1 to 7 (inclusive).
 * */

#include <iostream>
#include <cstdlib>

int main() {
	int new_num = rand() % 7 + 1;
	std::cout << new_num << std::endl;
	return 0;
}
