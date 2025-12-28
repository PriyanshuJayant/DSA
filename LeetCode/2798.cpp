#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int output = 0; 
        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target)
                output++;
        }
        return output;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {0, 1, 0, 3, 12},
        {0},
        {1, 2, 3, 4, 5},
        {0, 0, 1},
        {4, 0, 5, 0, 6, 0, 7},
        {0, 0, 0},
        {1, 0, 2, 0, 3, 0}
    };

    vector<int> targets = {2, 1, 3, 1, 5, 1, 2};

    for(int i = 0; i < testCases.size(); i++) {
        vector<int> hours = testCases[i];
        int target = targets[i];

        int result = sol.numberOfEmployeesWhoMetTarget(hours, target);

        cout << "Test Case " << i + 1 << ": Success" << endl;
        cout << "  Input: ";
        for(int x : hours) cout << x << " ";
        cout << endl;
        cout << "  Target: " << target << endl;
        cout << "  Output: " << result << endl << endl;
    }

    return 0;
}
