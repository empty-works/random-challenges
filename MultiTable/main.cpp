/* Suppose you have a multiplication table that is N by N.
 * That is, a 2D array where the value at the i-th row and 
 * j-th column is 
 * (i + 1) * (j + 1) (if 0-indexed) or i * j (if 1-indexed).
 *
 * Given integers N and X, write a function that returns the 
 * number of times X appears as a value in an N by N 
 * multiplication table.
 *
 * For example, given N = 6 and X = 12, you should return 4, 
 * since the multiplication table looks like this:
 *
 * |1 |2 |3 |4 |5 |6 |
 * |2 |           |12|
 * |3 |     |12|
 * |4 |  |12|
 * |5 |
 * |6 |12|
 *
 * And there are 4 12's in the table.
 **/

#include <iostream>

int getNum(const int rowsCols, const int searchNum) {

	// Set up table.
	for(size_t i {0}; i < rowsCols; i++) {
		for(size_t j {0}; j < rowsCols; j++) {

		}
	}	
}

int main() {

	return 0;
}
