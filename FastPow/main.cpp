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
	int firstProduct {1};
	int secondProduct {1};
	int halfMultiplier {0};
	bool powIsEven {true};

	if(y == 0) {
		return 1;
	}
	if(y == 1) {
		return x;
	}
	if(y == 2) {
		return x * x;
	}
	// Check if the power is even. Then split.
	if(y % 2 == 0) {
		halfMultiplier = y / 2;
	}	
	else {
		powIsEven = false;
		halfMultiplier = (y - 1) / 2;
	}

	for(int i {0}; i < halfMultiplier; i++) {
		firstProduct *= x;	
		secondProduct *= x;
	}
}

int main() {
	return 0;
}
