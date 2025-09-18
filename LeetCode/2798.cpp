#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int output = 0; 
        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) {
                output++;
            }
        }
        return output;
    }
};

int main() {
    Solution s;
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

    for (int i = 0; i < testCases.size(); i++) {
        int result = s.numberOfEmployeesWhoMetTarget(testCases[i], targets[i]);
        cout << "Test Case " << i + 1 << ": "
             << result << " employees met the target (" << targets[i] << ")" << endl;
    }

    return 0;
}
