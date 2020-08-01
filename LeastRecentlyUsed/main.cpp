/* Implement an LRU (Least Recently Used) 
 * cache. It should be able to be initialized 
 * with a cache size n, and contain the 
 * following methods:
 *
 * - set(key, value): sets key to value. If 
 *   there are already n items in the cache 
 *   and we are adding a new item, then it 
 *   should also remove the least recently 
 *   used item.
 *
 * - get(key): gets the value at key. If no 
 *   such key exists, return null.
 *
 * Each operation should run in O(1) time.
 * */

#include <iostream>
#include <string>

class TheCache{
	void set(std::string key, int value);
	int get(std::vector<std::pair<std::string, int>>);
};

void TheCache::set(std::string key, int value) {

}

int TheCache::get(std::vector<std::pair<std::string, int>> &vec) {

}

int main() {

	return 0;
}
