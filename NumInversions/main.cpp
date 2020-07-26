/* We can determine how "out of order" an 
 * array A is by counting the number of 
 * inversions it has. Two elements A[i] 
 * and A[j] form an inversion if 
 * A[i] > A[j] but i < j. That is, a smaller 
 * element appears after a larger element.
 *
 * Given an array, count the number of 
 * inversions it has. Do this faster than 
 * O(N^2) time.
 *
 * You may assume each element in the array 
 * is distinct.
 *
 * For example, a sorted list has zero 
 * inversions. The array [2, 4, 1, 3, 5] has 
 * three inversions: (2, 1), (4, 1), and (4, 3). 
 * The array [5, 4, 3, 2, 1] has ten inversions: 
 * every distinct pair forms an inversion.
 * */

#include <iostream>
#define MAX 100

int getInversions(int mat[][MAX], int row, int col) {
	int count {0};
	int i = row-1, j = 1;  //set indexes for bottom left element 
   	while ( i >= 0 && j <= col ) 
	{ 
		if ( mat[i] > mat[j] && i < j) 
			count++;
		if ( mat[i][j] > x ) 
			i--; 
		else //  if mat[i][j] < x 
			j++; 
	} 	
}

int main() {
	int mat[][MAX] {{2, 2, 4, 1, 3, 5},
			{4, 2, 4, 1, 3, 5},
			{1, 2, 4, 1, 3, 5},
			{3, 2, 4, 1, 3, 5}
			{5, 2, 4, 1, 3, 5}};
	int nums = getInversions(mat, 5, 6);
	std::cout << std::to_string(nums) << std::endl;
	return 0;
}
