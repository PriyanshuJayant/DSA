// 1. Two Sum
#include <iostream>
#include <vector>
using namespace std;
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++)
//             for(int j = i + 1; j < n; j++)
//                 if((nums[i] + nums[j]) == target)
//                     return {i, j};
        
//         return {};
//     }
// };

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                if((nums[i] + nums[j]) == target)
                    return {i, j};
        
        return {};
    }
};

int main() {
    // Solution sol;
    Solution2 sol2;

    vector<vector<int>> testCases = {
        {2, 7, 11, 15},
        {3, 2, 4},
        {3, 3},
        {1, 5, 3, 6, 8},
        {-1, -2, -3, -4, -5}
    };

    vector<int> targets = {9, 6, 6, 11, -8};

    // -----------Solution---------------------
    // for (int t = 0; t < testCases.size(); t++) {
    //     vector<int> result = sol.twoSum(testCases[t], targets[t]);
    //     cout << "Test case " << t + 1 << ": ";
    //     if (!result.empty()) {
    //         cout << "[" << result[0] << "," << result[1] << "]";
    //     } else {
    //         cout << "No pair found";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // ------------Solution2--------------------
    for (int t = 0; t < testCases.size(); t++) {
        vector<int> result = sol2.twoSum(testCases[t], targets[t]);
        cout << "Test case " << t + 1 << ": ";
        if (!result.empty()) {
            cout << "[" << result[0] << "," << result[1] << "]";
        } else {
            cout << "No pair found";
        }
        cout << endl;
    }

    return 0;
}
