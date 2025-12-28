#include <bits/stdc++.h>
using namespace std;
// 283. Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n - 1; j++) {
//                 if (nums[j] == 0 && nums[j + 1] != 0) {
//                     int temp = nums[j];
//                     nums[j] = nums[j + 1];
//                     nums[j + 1] = temp;
//                 }
//             }
//         }
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int n = nums.size();
        int j = -1;

        for(int i = 0; i < n; i++) { 
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }

        if(j == -1) return;

        for(int i = j + 1; i < n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {0,1,0,3,12},
        {0},
        {1,2,3,4,5},
        {0,0,1},
        {4,0,5,0,6,0,7},
        {0,0,0},
        {1,0,2,0,3,0}
    };

    for(int i = 0; i < testCases.size(); i++) {
        vector<int> nums = testCases[i];

        cout << "Test Case " << i + 1 << ": Success" << endl;
        cout << "  Input: ";
        for(int x : nums) cout << x << " ";
        cout << "" << endl;

        sol.moveZeroes(nums);

        cout << "  Output: ";
        for(int x : nums) cout << x << " ";
        cout << "" << endl << endl;
    }

    return 0;
}
