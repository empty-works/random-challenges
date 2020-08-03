/* Implement a URL shortener with the following methods:
 *
 * - shorten(url), which shortens the url into a 
 *   six-character alphanumeric string, such as 
 *   zlg6wl.
 * - restore(short), which expands the shortened 
 *   string into the original url. If no such 
 *   shortened string exists, return null.
 *
 * Hint: what if we enter the same URL twice?
 * */

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

class Shortener {
	std::vector<std::pair<std::string, std::string>> vec {};
	
	public:
	std::string generate_short(const int length);
	bool is_found(std::vector<std::pair<std::string, std::string>> vec);
	std::string shorten(const std::string &url);
	std::string restore(const std::string &short_url);
};

std::string Shortener::generate_short(const int length) {
	auto randchar = []() -> char {
		const char charset[] {
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz"
		};
		const size_t max_index {sizeof(charset) - 1};
		return charset[std::rand() % max_index];	
	};	
	std::string str(length, 0);
	std::generate_n(str.begin(), length, randchar);	
	return str;
}
	
bool Shortener::is_found(std::vector<std::pair<std::string, std::string>> vec) {

}

std::string Shortener::shorten(const std::string &url) {
	std::string short_url{};

	short_url = generate_short(6);
	std::pair<std::string, std::string> the_pair(url, short_url);
	vec.push_back(the_pair);	
	return short_url;
}

std::string Shortener::restore(const std::string &short_url) {
	
}

int main() {
	Shortener s;
	std::cout << s.shorten("someURL") << std::endl; 
	return 0;
}
