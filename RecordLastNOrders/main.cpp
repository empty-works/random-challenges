/* You run an e-commerce website and want to 
 * record the last N order ids in a log. 
 * Implement a data structure to accomplish 
 * this, with the following API: 
 *
 * - record(order_id): adds the order_id to 
 *   the log
 * - get_last(i): gets the ith last element 
 *   from the log. i is guaranteed to be 
 *   smaller than or equal to N.
 *
 * You should be as efficient with time and 
 * space as possible.
 * */

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class OrderLogger {
	std::string filename;

	public:
	OrderLogger();
	OrderLogger(std::string filename): filename(filename) {};
	bool record(const std::string order_id);
	std::string get_last(int num);	
};

int main() {

	
	
	return 0;
}

bool OrderLogger::record(const std::string order_id) {
	std::ofstream file(filename, std::ios::out);	
	if(!file) {
		std::cout << "Error loading file." << std::endl;
		return false;	
	}
	file << order_id << "\n";	
	file.close();
	return true;
}

std::string OrderLogger::get_last(int num) {
	std::ifstream file;
	file.open(filename);
	if(!file) {
		std::cout << "Error opening file." << std::endl;
		return "ERROR!!";
	}	
	std::string line;
	for(int i {0}; i < num; i++) {
		getline(file, line);	
	}	
	file.close();
	return line;
}
