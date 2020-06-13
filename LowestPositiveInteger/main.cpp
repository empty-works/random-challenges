#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

bool containsOne(const std::vector<int>);

int main() {
		
	return 0;
}

bool containsOne(const std::vector<int> int_vec) {
	auto it = int_vec.begin();
	it = std::find(int_vec.begin(), int_vec.end(), 1);
}
