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
	bool url_is_found(const std::vector<std::pair<std::string, std::string>> &vec, const std::string &url);
	std::string get_short_url(const std::string &url);
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
	
bool Shortener::url_is_found(const std::vector<std::pair<std::string, std::string>> &vec, const std::string &url) {
	for(auto a_pair : vec) {
		if(a_pair.first == url) {
			return true;
		}
	}
	return false;
}

std::string Shortener::get_short_url(const std::string &url) {
	for(auto a_pair : vec) {
		if(a_pair.first == url) {
			return a_pair.second;
		}
	}
	return "";
}

std::string Shortener::shorten(const std::string &url) {
	std::string short_url{};
	if(url_is_found(vec, url)) {
		return get_short_url(url);				
	}
	else {
		short_url = generate_short(6);
		std::pair<std::string, std::string> the_pair(url, short_url);
		vec.push_back(the_pair);	
		return short_url;
	}
}

std::string Shortener::restore(const std::string &short_url) {
	for(auto a_pair : vec) {
		if(a_pair.second == short_url) {
			return a_pair.first;
		}
	}	
	return "";
}

int main() {
	Shortener s;
	std::string short_url {s.shorten("someURL")};
	std::cout << short_url << std::endl; 
	std::cout << s.restore(short_url) << std::endl;
	return 0;
}
