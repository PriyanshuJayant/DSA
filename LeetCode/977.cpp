#include <bits/stdc++.h>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int position = n - 1;
        // -4 -1 0 3 10 
        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                result[position] = nums[left] * nums[left];
                left++;
            }else{
                result[position] = nums[right] * nums[right];
                right--;
            }
            position --;
        }

        return result;
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
