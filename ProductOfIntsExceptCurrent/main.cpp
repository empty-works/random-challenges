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
		product_vec.push_back(product);
	}
	
	for(size_t i {0}; i < product_vec.size(); i++) {
		std::cout << product_vec.at(i) << " ";
	}	
	std::cout << std::endl;
	return 0;
}
