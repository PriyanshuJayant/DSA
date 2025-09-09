// 9. Palindrome Number
#include <iostream>
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
        while (x > 0)
        {
            int digit = x % 10;
            x = x/10;
            reverse = reverse * 10 + digit;
        }
        if (l == reverse) return true;
        
        return false;
    }
};

int main() {
    Solution sol;

    // Test case 1
    int x1 = 121;
    cout << x1 << " -> " 
         << (sol.isPalindrome(x1) ? "true" : "false") << endl;

    // Test case 2
    int x2 = -121;
    cout << x2 << " -> " 
         << (sol.isPalindrome(x2) ? "true" : "false") << endl;

    // Test case 3
    int x3 = 10;
    cout << x3 << " -> " 
         << (sol.isPalindrome(x3) ? "true" : "false") << endl;

    return 0;
}