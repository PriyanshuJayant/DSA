#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for(int x : arr) {
            if(x % 2 != 0)
                count++;
            else
                count = 0;

            if(count == 3)
                return true;
        }
        return false;
    }
};

void printVector(const vector<int>& v) {
    cout << "{ ";
    for(int x : v) cout << x << " ";
    cout << "}" << endl;
}

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {2,6,4,1},
        {1,3,5},
        {2,1,3,5,7},
        {1,2,3,5},
        {2,4,6,8}
    };

    for(int i = 0; i < testCases.size(); i++) {
        bool result = sol.threeConsecutiveOdds(testCases[i]);

        cout << "Test Case " << i + 1 << ": "
             << (result ? "Success" : "Fail") << endl;

        printVector(testCases[i]);
        cout << endl;
    }

    return 0;
}
