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

double getEvenMedian(const std::vector<int> &vec) {
	int firstIndex {(int)vec.size() / 2};
	int secondIndex {firstIndex + 1};
	std::cout << firstIndex << std::endl;
	std::cout << secondIndex << std::endl;
	return (double)vec.at(secondIndex) + (double)vec.at(firstIndex) / 2.0;
}

double getOddMedian(const std::vector<int> &vec) {
	std::cout << "Inside getOddMedian" << std::endl;
	return 4.5;	
}

void showMedian(std::vector<int> vec) {
	std::vector<int> sort_vec;
	for(const int num : vec) {
		sort_vec.push_back(num);
		std::sort(sort_vec.begin(), sort_vec.end());	
		std::cout << "Vector size: " << sort_vec.size() << std::endl;
		if(sort_vec.size() == 1) {
			std::cout << sort_vec.at(0) << std::endl;
		}
		else if(sort_vec.size() % 2 == 0) {
			std::cout << getEvenMedian(sort_vec) << std::endl;
		}
		//else {
		//	std::cout << getOddMedian(sort_vec) << std::endl;
	//	}	
	}
}

int main() {
	std::vector<int> vec {2, 1, 5, 7};
	showMedian(vec);
	return 0;
}
