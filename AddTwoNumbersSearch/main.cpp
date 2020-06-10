#include <iostream>
#include <vector>

bool doNumsExist(const std::vector<int> &, int);

int main() {
	std::vector<int> int_vec {10, 15, 3, 7};
	int k {17};
	
	std::cout << "Enter a number: ";
	std::cin >> k;

	std::cout << "Do any two numbers add up to " << k << " ?" << std::endl;
	std::cout << "The answer is: " << doNumsExist(int_vec, k) << std::endl;

	return 0;		
}

bool doNumsExist(const std::vector<int> &int_vec, int k) {
	std::cout << std::boolalpha;
	for(size_t i {0}; i < int_vec.size(); i++) {
		for(size_t j {0}; j < int_vec.size(); j++) {
			if(int_vec.at(i) + int_vec.at(j) == k) {
				std::cout << int_vec.at(i) << " and " << int_vec.at(j) << " add up. ";
				return true;
			}
		}
	}
	return false;
}
