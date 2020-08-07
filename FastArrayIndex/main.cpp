/* A sorted array of integers was rotated an 
 * unknown number of times.
 *
 * Given such an array, find the index of the 
 * element in the array in faster than linear 
 * time. If the element doesn't exist in the 
 * array, return null.
 *
 * For example, given the array [13, 18, 25, 2, 
 * 8, 10] and the element 8, return 4 (the index 
 * of 8 in the array).
 *
 * You can assume all the integers in the array 
 * are unique.
 * */

#include <iostream>
#include <algorithm>
#include <vector>

int getIndex(std::vector<int> vec, int element) {
	std::sort(vec.begin(), vec.end());	
	
}

int binarySearch(std::vector<int> vec, int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (vec.at(mid) == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (vec.at(mid) > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(vec, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int main() {
	
	return 0;
}
