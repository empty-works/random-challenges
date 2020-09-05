/* Implement division of two positive 
 * integers without using the division, 
 * multiplication, or modulus operators. 
 * Return the quotient as an integer, 
 * ignoring the remainder.
 * */

#include <iostream>

int my_div(const int num, const int den) {
	// Divide by 1
	if(den == 1) {
		return num;
	}
	// Numerator is zero 
	if(num == 0) {
		return 0;
	}
	// Do division...kind of
	int sum_count {0};
	int num_div {0};
	while(sum_count < num) {
		sum_count += den;
		num_div++;
	}
	return num_div;
}

int main() {
	int num;
	int den;
	std::cout << "Numerator: ";
	std::cin >> num;
	std::cout << "Denominator: ";
	std::cin >> den;	
	int res {my_div(num, den)};
	std::cout << "Result: " << res << std::endl;
	return 0;
}
