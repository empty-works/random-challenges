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

class Shortener {
	std::string main_url{};	
	
	public:
	std::string shorten(const std::string &url);
	std::string restore(const std::string &short_url);
};

std::string Shortener::shorten(const std::string &url) {
	main_url = url;
	return "zlg6wl";	
}

int main() {

	return 0;
}
