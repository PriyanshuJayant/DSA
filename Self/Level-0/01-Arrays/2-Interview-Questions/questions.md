# Arrays - Interview Questions for Small Startups

## Pattern: Two Pointer

### 1. Container With Most Water
**Problem:** Given array of heights, find two lines that form container with maximum water.
- **Input:** `[1,8,6,2,5,4,8,3,7]`
- **Output:** `49`
- **Company Tags:** Commonly asked in startups
- **Difficulty:** Medium
- **Approach:** Two pointers from both ends, move pointer with smaller height

### 2. 3Sum (Find Triplets with Zero Sum)
**Problem:** Find all unique triplets that sum to zero.
- **Input:** `[-1, 0, 1, 2, -1, -4]`
- **Output:** `[[-1, -1, 2], [-1, 0, 1]]`
- **Company Tags:** Startup favorites
- **Difficulty:** Medium
- **Approach:** Sort + two pointer for each element

### 3. Remove Element
**Problem:** Remove all instances of val in-place, return new length.
- **Input:** `nums = [3,2,2,3], val = 3`
- **Output:** `2` (nums = `[2,2,_,_]`)
- **Company Tags:** Basic interview question
- **Difficulty:** Easy
- **Approach:** Two pointer technique

## Pattern: Sliding Window

### 4. Maximum Sum Subarray of Size K
**Problem:** Find maximum sum of any contiguous subarray of size k.
- **Input:** `arr = [2, 1, 5, 1, 3, 2], k = 3`
- **Output:** `9` (subarray `[5, 1, 3]`)
- **Company Tags:** Very common in startups
- **Difficulty:** Easy
- **Approach:** Fixed sliding window

### 5. Longest Subarray with Sum K (Positives Only)
**Problem:** Find length of longest subarray with sum equal to k.
- **Input:** `arr = [1, 2, 3, 1, 1, 1, 1], k = 3`
- **Output:** `3`
- **Company Tags:** Sliding window basics
- **Difficulty:** Easy-Medium
- **Approach:** Variable sliding window with two pointers

### 6. Minimum Size Subarray Sum
**Problem:** Find minimal length of subarray with sum ≥ target.
- **Input:** `target = 7, nums = [2,3,1,2,4,3]`
- **Output:** `2` (subarray `[4,3]`)
- **Company Tags:** Startup interviews
- **Difficulty:** Medium
- **Approach:** Sliding window with shrinking

## Pattern: Frequency Counter

### 7. Valid Anagram (Using Arrays)
**Problem:** Check if two strings are anagrams.
- **Input:** `s = "anagram", t = "nagaram"`
- **Output:** `true`
- **Company Tags:** Very common
- **Difficulty:** Easy
- **Approach:** Frequency array (26 letters)

### 8. First Unique Character in String
**Problem:** Find index of first non-repeating character.
- **Input:** `"leetcode"`
- **Output:** `0`
- **Company Tags:** Commonly asked
- **Difficulty:** Easy
- **Approach:** Frequency map, two passes

### 9. Find All Numbers Disappeared in Array
**Problem:** Find numbers from 1 to n that don't appear in array.
- **Input:** `[4,3,2,7,8,2,3,1]`
- **Output:** `[5, 6]`
- **Company Tags:** Clever index manipulation
- **Difficulty:** Easy
- **Approach:** Mark indices as negative

## Pattern: Prefix Sum

### 10. Contiguous Array (0s and 1s)
**Problem:** Find maximum length subarray with equal 0s and 1s.
- **Input:** `[0, 1, 0]`
- **Output:** `2` (subarray `[0, 1]` or `[1, 0]`)
- **Company Tags:** Prefix sum with hashing
- **Difficulty:** Medium
- **Approach:** Treat 0 as -1, find subarray with sum 0

### 11. Subarray Sum Equals K
**Problem:** Count total subarrays whose sum equals k.
- **Input:** `nums = [1, 2, 3], k = 3`
- **Output:** `2` (subarrays: `[1, 2]` and `[3]`)
- **Company Tags:** Very popular
- **Difficulty:** Medium
- **Approach:** Prefix sum + hash map

### 12. Range Sum Query - Immutable
**Problem:** Implement class to calculate sum between indices efficiently.
- **Input:** `nums = [1, 2, 3, 4, 5]`, query `sumRange(1, 3)`
- **Output:** `9`
- **Company Tags:** System design basics
- **Difficulty:** Easy
- **Approach:** Precompute prefix sums

## Mixed Patterns - Commonly Asked

### 13. Two Sum
**Problem:** Find two numbers that add up to target value.
- **Input:** `nums = [2, 7, 11, 15], target = 9`
- **Output:** `[0, 1]`
- **Company Tags:** **Most asked question**
- **Difficulty:** Easy
- **Approach:** Hash map for O(n)

### 14. Best Time to Buy and Sell Stock
**Problem:** Maximize profit from one transaction.
- **Input:** `[7, 1, 5, 3, 6, 4]`
- **Output:** `5` (buy at 1, sell at 6)
- **Company Tags:** Classic DP question
- **Difficulty:** Easy
- **Approach:** Track minimum price seen so far

### 15. Maximum Subarray (Kadane's Algorithm)
**Problem:** Find contiguous subarray with largest sum.
- **Input:** `[-2,1,-3,4,-1,2,1,-5,4]`
- **Output:** `6`
- **Company Tags:** **Must know algorithm**
- **Difficulty:** Medium
- **Approach:** Kadane's algorithm

### 16. Merge Sorted Array (In-place)
**Problem:** Merge nums2 into nums1 (nums1 has enough space).
- **Input:** `nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3`
- **Output:** `[1,2,2,3,5,6]`
- **Company Tags:** Array manipulation
- **Difficulty:** Easy
- **Approach:** Fill from end to avoid overwrites

### 17. Majority Element (Boyer-Moore)
**Problem:** Find element appearing more than n/2 times.
- **Input:** `[2,2,1,1,1,2,2]`
- **Output:** `2`
- **Company Tags:** Clever algorithm
- **Difficulty:** Easy
- **Approach:** Boyer-Moore voting

### 18. Plus One
**Problem:** Add 1 to number represented as array of digits.
- **Input:** `[1, 2, 3]`
- **Output:** `[1, 2, 4]`
- **Company Tags:** Edge case handling
- **Difficulty:** Easy
- **Approach:** Handle carry propagation

### 19. Rotate Array
**Problem:** Rotate array to right by k steps in-place.
- **Input:** `nums = [1,2,3,4,5,6,7], k = 3`
- **Output:** `[5,6,7,1,2,3,4]`
- **Company Tags:** Array manipulation
- **Difficulty:** Medium
- **Approach:** Reverse three times

### 20. Missing Number
**Problem:** Find missing number from 0 to n.
- **Input:** `[3, 0, 1]`
- **Output:** `2`
- **Company Tags:** Bit manipulation basics
- **Difficulty:** Easy
- **Approach:** XOR or sum formula

### 21. Find Pivot Index
**Problem:** Find index where left sum equals right sum.
- **Input:** `[1, 7, 3, 6, 5, 6]`
- **Output:** `3`
- **Company Tags:** Prefix sum application
- **Difficulty:** Easy
- **Approach:** Calculate total sum, track left sum

### 22. Maximum Product Subarray
**Problem:** Find contiguous subarray with largest product.
- **Input:** `[2, 3, -2, 4]`
- **Output:** `6` (subarray `[2, 3]`)
- **Company Tags:** DP variant
- **Difficulty:** Medium
- **Approach:** Track both max and min (handle negatives)

### 23. Sort Colors (Dutch National Flag)
**Problem:** Sort array with 0s, 1s, and 2s in one pass.
- **Input:** `[2,0,2,1,1,0]`
- **Output:** `[0,0,1,1,2,2]`
- **Company Tags:** Famous algorithm
- **Difficulty:** Medium
- **Approach:** Three pointers (low, mid, high)

### 24. Product of Array Except Self
**Problem:** Return array where output[i] = product of all except nums[i].
- **Input:** `[1, 2, 3, 4]`
- **Output:** `[24, 12, 8, 6]`
- **Company Tags:** Clever array problem
- **Difficulty:** Medium
- **Approach:** Left and right products

### 25. Find All Duplicates in Array
**Problem:** Find all elements appearing twice (values in [1, n]).
- **Input:** `[4,3,2,7,8,2,3,1]`
- **Output:** `[2, 3]`
- **Company Tags:** Index manipulation
- **Difficulty:** Medium
- **Approach:** Use indices as markers

---

## Interview Preparation Checklist
- [ ] Can explain time and space complexity for each solution
- [ ] Know multiple approaches (brute force → optimal)
- [ ] Can code without IDE assistance
- [ ] Understand edge cases (empty array, single element, duplicates)
- [ ] Can optimize space (in-place modifications)
- [ ] Know when to use each pattern (Two Pointer vs Sliding Window vs Prefix Sum)

## Key Patterns to Master
1. **Two Pointer** - 3Sum, Container With Most Water
2. **Sliding Window** - Maximum sum subarray, minimum size subarray
3. **Frequency Counter** - Anagrams, first unique character
4. **Prefix Sum** - Subarray sum equals K, range queries
5. **Hash Map** - Two Sum, frequency problems
6. **In-place Manipulation** - Dutch flag, rotate array

## Time Complexity Targets
- **Easy questions:** O(n) or O(n log n)
- **Medium questions:** O(n) optimal, O(n²) acceptable
- **Space:** Try O(1) in-place when possible
