// 7. Reverse Integer
#include <iostream>
#include <climits>
using namespace std;


// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

class Solution {
public:
    int reverse(int x) {
        long long int temp = 0, count = 0;
        long long int len = abs((long long)x);

        while (len > 0) {
            len /= 10;
            count++;
        }

        for (long long int i = 0; i < count; i++) {
            temp = temp * 10;
            temp += x % 10;
            x /= 10;
        }

        if (temp >= INT_MAX || temp <= INT_MIN)
            return 0;

        return (int)temp;
    }
};

int main() {
    Solution sol;

    int testCases[] = {120, -123, 123, 1534236469, -2147483648};
    int n = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < n; i++) {
        int input = testCases[i];
        int output = sol.reverse(input);

        cout << "Test Case " << i + 1 << ": "
             << (output != 0 ? "Success" : "Fail") << endl;

        cout << "  Input: " << input << " }" << endl;
        cout << "  Output: " << output << " }" << endl << endl;
    }

    return 0;
}