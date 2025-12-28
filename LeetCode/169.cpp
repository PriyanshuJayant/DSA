
// 169. Majority Element

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 1; // count itself

            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j])
                    count++;
            }

            if (count > n / 2)
                return nums[i];
        }

        return -1; // will never happen as majority always exists
    }
};

void printVector(const vector<int>& v) {
    cout << "{ ";
    for (int x : v) cout << x << " ";
    cout << "}" << endl;
}

int main() {
    Solution s;

    vector<vector<int>> testCases = {
        {3, 2, 3},
        {2, 2, 1, 1, 1, 2, 2},
        {1, 1, 1, 2, 3},
        {5, 5, 5, 5, 5},
        {6, 7, 6, 6, 7, 6, 6},
        {10, 9, 9, 9, 10, 9},
        {8, 8, 9, 8, 7, 8, 6, 8},
        {100, 100, 200, 100, 300, 100, 100},
        {1, 2, 3, 1, 1, 1, 4, 1},
        {9, 9, 8, 9, 7, 9, 6, 9, 5, 9}
    };

    for (int i = 0; i < testCases.size(); i++) {
        vector<int> nums = testCases[i];
        int result = s.majorityElement(nums);

        cout << "Test Case " << i + 1 << ": Success" << endl;
        cout << "  Input: ";
        for (int x : nums) cout << x << " ";
        cout << "" << endl;
        cout << "  Output: " << result << "" << endl << endl;
    }

    return 0;
}
