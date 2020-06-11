#include <iostream>
#include <vector>
#include <iterator>

int main() {
	std::vector<int> int_vec {1, 2, 3, 4, 5};	
	std::vector<int> product_vec; 	
	for(size_t i {0}; i < int_vec.size(); i++) {
		int product {1};
		for(size_t j {0}; j < int_vec.size(); j++) {
			if(i != j) {
				product *= int_vec.at(j);			
			}			
		}	

	}
	return 0;
}
