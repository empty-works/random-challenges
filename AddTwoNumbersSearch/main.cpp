#include <iostream>
#include <vector>

bool doNumsExists(const std::vector<int> &, int);

int main() {
	std::vector<int> int_vec {10, 15, 3, 7};
	int k {17};



	return 0;		
}

bool doNumsExists(const std::vector<int> &int_vec, int k) {
	for(size_t i {0}; i < int_vec.size(); i++) {
		for(size_t j {0}; j < int_vec.size(); j++) {
			if(int_vec.at(i) + int_vec.at(j) == k) {
				return true;
			}
		}
	}
	return false;
}
