/* A rule looks like this:
 *
 * A NE B
 *
 * This means point A is located 
 * northeast of point B.
 *
 * A SW C
 *
 * means that point A is 
 * southwest of C.
 *
 * Given a list of rules, check if 
 * the sum of the rules validate. 
 * For example:
 *
 * A N B
 * B NE C
 * C N A
 *
 * does not validate, since A cannot 
 * be both north and south of C.
 *
 * A NW B
 * A N B
 *
 * is considered valid.
 **/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

std::set<char> getPoints(std::vector<std::string> rules) {
	// Pattern of each rule is "POINT <SPACE> DIRECTION <SPACE> POINT"
	std::set<char> s1 {};	
	for(std::string rule : rules) {
		s1.insert(rule[0]); // Take first character (point)
		s1.insert(rule[rule.length() - 1]); // Take second point
	}	
	return s1;
}

std::vector<std::pair<char, std::pair<int, int>>> initCoords(const std::set<char> & points) {

	std::vector<std::pair<char, std::pair<int, int>>> coords {};
	for(char point : points) {
		coords.push_back(std::make_pair(point, std::make_pair(0, 0)));
	}
	return coords;
}

bool isValid(std::vector<std::string> vec) {
	
	// Get all points in a list
	std::set<char> points {getPoints(vec)};
	
	// Place default coordinates and names of points in pairs
		
	
	// Check every rule one by one
	
	// Assign values to all points simultaneously
}

int main() {
	
	return 0;
}
