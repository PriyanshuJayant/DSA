#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 169. Majority Element

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] == nums[j]){
                    count++;
                    
                }
                
            }
            
        }
        






        return 0; 
    }
};


int main() {
    Solution s;

    vector<vector<int>> testCases = {
        {3, 2, 3},                 // Example 1 → 3
        {2, 2, 1, 1, 1, 2, 2},     // Example 2 → 2
        {1, 1, 1, 2, 3},           // majority 1
        {5, 5, 5, 5, 5},           // all same → 5
        {6, 7, 6, 6, 7, 6, 6},     // majority 6
        {10, 9, 9, 9, 10, 9},      // majority 9
        {8, 8, 9, 8, 7, 8, 6, 8},  // majority 8
        {100, 100, 200, 100, 300, 100, 100}, // majority 100
        {1, 2, 3, 1, 1, 1, 4, 1},  // majority 1
        {9, 9, 8, 9, 7, 9, 6, 9, 5, 9} // majority 9
    };

    for (auto nums : testCases) {
        cout << "Input: ";
        for (int x : nums) cout << x << " ";
        cout << endl;

        vector<int> copy = nums; // to preserve input for output clarity
        int result = s.majorityElement(copy);

        cout << "Output: " << result << endl << endl;
    }

    return 0;
}
