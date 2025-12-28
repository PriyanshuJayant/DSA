#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative = 0;

        for (int x : nums) {
            if (x == 0) return 0;
            if (x < 0) negative++;
        }

        return (negative % 2 == 0) ? 1 : -1;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {-1,-2,-3,-4},
        {-1,2,3},
        {1,2,3,4,5},
        {1,2,0,4},
        {-1},
        {-1,-2},
        {0},
        {5,-3,0,-2}
    };

    for(int i = 0; i < testCases.size(); i++) {
        vector<int> nums = testCases[i];
        int result = sol.arraySign(nums);

        cout << "Test Case " << i + 1 << ": Success" << endl;

        cout << "  Input: ";
        for(int x : nums) cout << x << " ";
        cout << endl;

        cout << "  Output: " << result << endl << endl;
    }

    return 0;
}
