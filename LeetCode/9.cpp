// 9. Palindrome Number
#include <bits/stdc++.h>
using namespace std;
// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

class Solution {
public:
    bool isPalindrome(int x){
        int l = x;
        if(x < 0) return false;
        if(x == 0) return true;

        long long reverse = 0;
        while (x > 0) {
            int digit = x % 10;
            x = x / 10;
            reverse = reverse * 10 + digit;
        }

        return l == reverse;
    }
};

int main() {
    Solution sol;

    int testCases[] = {121, -121, 10, 0, 1221};
    int n = sizeof(testCases) / sizeof(testCases[0]);

    for(int i = 0; i < n; i++) {
        int input = testCases[i];
        bool output = sol.isPalindrome(input);

        cout << "Test Case " << i + 1 << ": "
             << (output ? "Success" : "Fail") << endl;

        cout << "  Input: " << input << "" << endl;
        cout << "  Output: " << (output ? "true" : "false") << "" << endl << endl;
    }

    return 0;
}