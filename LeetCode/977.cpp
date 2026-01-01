#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }
        int last = nums[nums.size() - 1];
        int first = nums[0];


        return nums;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {-4,-1,0,3,10},
        {-7,-3,2,3,11},
        {0},
        {-5,-3,-2,-1},
        {1,2,3,4}
    };

    for(int i = 0; i < testCases.size(); i++) {
        vector<int> nums = testCases[i];
        vector<int> result = sol.sortedSquares(nums);

        cout << "Test Case " << i + 1 << ": Success" << endl;
        cout << "Input: ";
        for(int x : testCases[i]) cout << x << " ";
        cout << endl;

        cout << "Output: ";
        for(int x : result) cout << x << " ";
        cout << endl << endl;
    }

    return 0;
}
