/* The power set of a set is the set of all 
 * its subsets. Write a function that, given 
 * a set, generates its power set.
 *
 * For example, given the set {1, 2, 3}, it 
 * should return 
 * {{}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}}
 *
 * You may also use a list or array to represent a set.
 * */

#include <iostream>
#include <vector>
#include <string>

void powerSet(std::string str, int index = -1, std::string curr = "")
{
    int n = str.length();

    // base case
    if (index == n)
        return;

    // First print current subset
    std::cout << curr << "\n";

    // Try appending remaining characters
    // to current subset
    for (int i = index + 1; i < n; i++) {

        curr += str[i];
        powerSet(str, i, curr);

        // Once all subsets beginning with
        // initial "curr" are printed, remove
        // last character to consider a different
        // prefix of subsets.
        curr.erase(curr.size() - 1);
    }
    return; 
}

int main() {
	
	std::string str {"123"};
	powerSet(str);
	return 0;
}
