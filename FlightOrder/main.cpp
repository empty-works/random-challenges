/* Given an unordered list of flights taken by someone, 
 * each represented as (origin, destination) pairs, 
 * and a starting airport, compute the person's 
 * itinerary. If no such itinerary exists, return null. 
 * If there are multiple possible itineraries, return 
 * the lexicographically smallest one. All flights must 
 * be used in the itinerary.
 *
 * For example, given the list of flights [("SFO", "HKO"), 
 * ("YYZ", "SFO"), ("YUL", "YYZ"), ("HKO", "ORD")] and 
 * starting airport "YUL", you should return the list 
 * ["YUL", "YYZ", "SFO", "HKO", "ORD"].
 *
 * Given the list of flights [("SFO", "COM"), ("COM", "YYZ")] 
 * and starting airport "COM", you should return null.
 *
 * Given the list of flights [("A", "B"), ("A", "C"), ("B", "C"), 
 * ("C", "A")] and starting airport "A", you should return 
 * the list ["A", "B", "C", "A", "C"] even though 
 * ["A", "C", "A", "B", "C"] is also a valid itinerary. However, 
 * the first one is lexicographically smaller.
 * */

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

std::vector<std::string> getItinerary(std::vector<std::pair<std::string, std::string>> &vec, const std::string start) {
	std::vector<std::string> new_vec {start};
	std::string start_str {start};	
	int count {0};
	std::pair test_pair;
	while(count < vec.size()) {
		for(std::pair<std::string, std::string> the_pair: vec) {
				
			if(the_pair.first == start_str) {
				test_pair = the_pair;
			}
		}		

		count++;
	}
	return new_vec;
}

int main() {
	std::vector<std::pair<std::string, std::string>> pair_vec {
		{"SFO", "HKO"}, 
		{"YYZ", "SFO"}, 
		{"YUL", "YYZ"}, 
		{"HKO", "ORD"}};

	return 0;
}
