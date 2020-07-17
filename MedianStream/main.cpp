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

double getEvenMedian(std::vector<int> vec) {
	int firstIndex {(int)vec.size() / 2};
	int secondIndex {firstIndex + 1};
	return (double)(vec.at(secondIndex) + vec.at(firstIndex)) / 2.0;
}

double showMedian(std::vector<int> vec) {
	std::vector<int> sort_vec;
	for(const int num : vec) {
		sort_vec.push_back(num);
		std::sort(sort_vec.begin(), sort_vec.end());	
		if(vec.size() % 2 == 0) {
			return getEvenMedian(sort_vec);
		}	
	}
}

int main() {
	std::vector<int> vec {2, 1, 5, 7};
	std::cout << showMedian(vec) << std::endl;
	return 0;
}
