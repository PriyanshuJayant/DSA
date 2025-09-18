// 258. Add Digits 
#include <iostream>
#include<vector>
using namespace std;
// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

// Example 2:
// Input: num = 0
// Output: 0

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int main() {
    Solution sol;
    vector<int> testCases = {38, 0, 258, 99, 12345};

    for (int i = 0; i < testCases.size(); ++i) {
        int result = sol.addDigits(testCases[i]);
        cout << "Test case " << i + 1 << " (" << testCases[i] << ") => Result: " << result << endl;
    }
    return 0;
}
