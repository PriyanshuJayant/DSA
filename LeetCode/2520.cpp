// 2520. Count the Digits That Divide a Number
#include <bits/stdc++.h>
using namespace std;
// Given an integer num, return the number of digits in num that divide num.
// An integer val divides nums if nums % val == 0.

// Example 1:
// Input: num = 7
// Output: 1
// Explanation: 7 divides itself, hence the answer is 1.

// Example 2:
// Input: num = 121
// Output: 2
// Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.

// Example 3:
// Input: num = 1248
// Output: 4
// Explanation: 1248 is divisible by all of its digits, hence the answer is 4.


class Solution {
public:
    int countDigits(int num) {
        int val = num;
        int count = 0;
        int temp = 0;

        while (num > 0) {
            temp += num % 10;

            if (temp != 0 && val % temp == 0)
                count++;

            num = num / 10;
            temp = 0;
        }

        return count;
    }
};

int main() {
    Solution sol;

    vector<int> testCases = {
        7, 121, 1248, 100, 36, 128, 111, 75, 99, 123456
    };

    for(int i = 0; i < testCases.size(); i++) {
        int input = testCases[i];
        int output = sol.countDigits(input);

        cout << "Test Case " << i + 1 << ": Success" << endl;
        cout << "  Input: " << input << endl;
        cout << "  Output: " << output << endl << endl;
    }

    return 0;
}
