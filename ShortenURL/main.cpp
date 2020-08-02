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
	std::string url {};	
	
	public:
	std::string shorten(std::string url);
	std::string restore(std::string short_url);
};

std::string Shortener::shorten(std::string url) {

}

int main() {

	return 0;
}
