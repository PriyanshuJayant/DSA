#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        while (nums.size() != 0) {
            elementSum += nums.front();

            if (nums.front() > 9) {
                int twoDigit = 0;
                int twoDigitSum = nums.front();

                while (twoDigitSum > 0) {
                    twoDigit += twoDigitSum % 10;
                    twoDigitSum = twoDigitSum / 10;
                }
                digitSum += twoDigit;
            } else {
                digitSum += nums.front();
            }

            nums.erase(nums.begin());
        }
        return abs(elementSum - digitSum); 
    }
};

int main() {
    Solution s;
    vector<vector<int>> testCases = {
        {5, 4, 3, 2},
        {10, 20},
        {7, 7, 7, 7},
        {15, 10, 20, 5},
        {4, 1, 3, 2},
        {12, 34, 56, 78},
        {2, 1, 3, 4},
        {99, 100, 88, 77},
        {1, 2, 3, 4, 5, 6},
        {10, 9, 8, 7, 6, 5, 4, 3}
    };

    for (auto nums : testCases) {
        cout << "Input: ";
        for (int x : nums) cout << x << " ";
        cout << endl;

        vector<int> copy = nums;
        int result = s.differenceOfSum(copy);

        cout << "Output: " << result << endl << endl;
    }

    return 0;
}
