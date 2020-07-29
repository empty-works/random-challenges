/* Using a function rand5() that returns 
 * an integer from 1 to 5 (inclusive) 
 * with uniform probability, implement 
 * a function rand7() that returns an 
 * integer from 1 to 7 (inclusive).
 * */

#include <iostream>
#include <cstdlib>

int get_num() {
	int new_num = rand() % 7 + 1;
	return new_num;
}

int main() {
	for(size_t i {0}; i < 10; i++) {
		std::cout << get_num() << std::endl;
	}
	return 0;
}
