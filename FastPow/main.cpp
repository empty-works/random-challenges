/* Implement integer exponentiation. That is, 
 * implement the pow(x, y) function, where x 
 * and y are integers and returns x^y.
 *
 * Do this faster than the naive method of 
 * repeated multiplication.
 *
 * For example, pow(2, 10) should return 1024.
 * */

#include <iostream>

int pow(int x, int y) {
	int firstProduct {0};
	int secondProduct {0};
	int halfMultiplier {0};
	bool powIsEven {true};

	if(y % 2 == 0) {
		halfMultiplier = y / 2;
	}	
	else {
		powIsEven = false;
		halfMultiplier = (y - 1) / 2;
	}
}

int main() {
	return 0;
}
