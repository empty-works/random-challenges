/* Compute the running median of a sequence 
 * of numbers. That is, given a stream of 
 * numbers, print out the median of the list 
 * so far on each new element. 
 *
 * Recall that the median of an even-numbered 
 * list is the average of the two middle 
 * numbers.
 *
 * For example, given the sequence 
 * [2, 1, 5, 7, 2, 0, 5], your 
 * algorithm should print out: 
 *
 * 2
 * 1.5
 * 2
 * 3.5
 * 2
 * 2
 * 2
 * */

#include <iostream>
#include <vector>
#include <algorithm>

void showMedian(std::vector<int> vec) {
	std::vector<int> sort_vec;
	for(const int num : vec) {
		sort_vec.push_back(num);
		std::sort(sort_vec.begin(), sort_vec.end());	
			
	}
}

double getEvenMedian(int first, int second) {
	return (double)second / (double) first;
}

int main() {
	std::cout << getEvenMedian(3, 5) << std::endl;
	return 0;
}
