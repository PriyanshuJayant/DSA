# Searching - Interview Questions for Small Startups

## Pattern: Basic Binary Search

### 1. Binary Search
**Problem:** Implement binary search in sorted array.
- **Input:** `nums = [-1,0,3,5,9,12], target = 9`
- **Output:** `4`
- **Company Tags:** **Fundamental question**
- **Difficulty:** Easy
- **Approach:** Classic binary search template

### 2. Search Insert Position
**Problem:** Find index where target should be inserted.
- **Input:** `nums = [1,3,5,6], target = 5`
- **Output:** `2`
- **Company Tags:** Very common
- **Difficulty:** Easy
- **Approach:** Binary search, return left pointer at end

### 3. First Bad Version
**Problem:** Find first bad version using API (minimizing calls).
- **Input:** `n = 5, bad = 4` (versions 4,5 are bad)
- **Output:** `4`
- **Company Tags:** Binary search application
- **Difficulty:** Easy
- **Approach:** Binary search with isBadVersion() API

### 4. Sqrt(x)
**Problem:** Compute integer square root.
- **Input:** `x = 8`
- **Output:** `2`
- **Company Tags:** Binary search on answer
- **Difficulty:** Easy
- **Approach:** Binary search from 0 to x

## Pattern: Finding Bounds

### 5. Find First and Last Position of Element
**Problem:** Find starting and ending position in sorted array.
- **Input:** `nums = [5,7,7,8,8,10], target = 8`
- **Output:** `[3,4]`
- **Company Tags:** Common in startups
- **Difficulty:** Medium
- **Approach:** Two binary searches (lower & upper bound)

### 6. Count of Element in Sorted Array
**Problem:** Count occurrences of target in sorted array.
- **Input:** `arr = [1, 1, 2, 2, 2, 2, 3], target = 2`
- **Output:** `4`
- **Company Tags:** Binary search variant
- **Difficulty:** Easy
- **Approach:** Last index - first index + 1

### 7. Find Floor and Ceil
**Problem:** Find floor (largest ≤ x) and ceil (smallest ≥ x).
- **Input:** `arr = [1, 2, 8, 10, 12, 19], x = 5`
- **Output:** `Floor = 2, Ceil = 8`
- **Company Tags:** Lower/upper bound
- **Difficulty:** Easy
- **Approach:** Modified binary search

## Pattern: Rotated Array Search

### 8. Search in Rotated Sorted Array
**Problem:** Search target in rotated sorted array (no duplicates).
- **Input:** `nums = [4,5,6,7,0,1,2], target = 0`
- **Output:** `4`
- **Company Tags:** **Very popular**
- **Difficulty:** Medium
- **Approach:** Modified binary search, check which half is sorted

### 9. Find Minimum in Rotated Sorted Array
**Problem:** Find minimum element in rotated array.
- **Input:** `nums = [3,4,5,1,2]`
- **Output:** `1`
- **Company Tags:** Common follow-up
- **Difficulty:** Medium
- **Approach:** Binary search comparing with rightmost element

### 10. Search in Rotated Sorted Array II (With Duplicates)
**Problem:** Search in rotated array that may contain duplicates.
- **Input:** `nums = [2,5,6,0,0,1,2], target = 0`
- **Output:** `true`
- **Company Tags:** Harder variant
- **Difficulty:** Medium
- **Approach:** Binary search with duplicate handling

## Pattern: Peak Finding

### 11. Find Peak Element
**Problem:** Find any peak (element > neighbors).
- **Input:** `nums = [1,2,3,1]`
- **Output:** `2`
- **Company Tags:** Binary search application
- **Difficulty:** Medium
- **Approach:** Binary search toward increasing side

### 12. Peak Index in Mountain Array
**Problem:** Find peak in mountain array (increases then decreases).
- **Input:** `arr = [0,2,1,0]`
- **Output:** `1`
- **Company Tags:** Peak finding variant
- **Difficulty:** Easy
- **Approach:** Binary search comparing with next element

## Pattern: 2D Matrix Search

### 13. Search a 2D Matrix
**Problem:** Search in matrix where rows are sorted and first element of row > last of previous.
- **Input:** `matrix = [[1,3,5,7],[10,11,16,20]], target = 3`
- **Output:** `true`
- **Company Tags:** Common 2D search
- **Difficulty:** Medium
- **Approach:** Binary search treating as 1D array

### 14. Search a 2D Matrix II
**Problem:** Search in matrix where each row and column is sorted.
- **Input:** `matrix = [[1,4,7],[2,5,8],[3,6,9]], target = 5`
- **Output:** `true`
- **Company Tags:** Staircase search
- **Difficulty:** Medium
- **Approach:** Start from top-right, move left/down based on comparison

## Pattern: Binary Search on Answer Space

### 15. Koko Eating Bananas
**Problem:** Find minimum eating speed to finish all bananas in h hours.
- **Input:** `piles = [3,6,7,11], h = 8`
- **Output:** `4`
- **Company Tags:** Binary search on answer
- **Difficulty:** Medium
- **Approach:** Binary search on speed, check if possible

### 16. Minimum Number of Days to Make m Bouquets
**Problem:** Find minimum days to make m bouquets with k adjacent flowers.
- **Input:** `bloomDay = [1,10,3,10,2], m = 3, k = 1`
- **Output:** `3`
- **Company Tags:** Binary search on days
- **Difficulty:** Medium
- **Approach:** Binary search on days, count possible bouquets

### 17. Capacity To Ship Packages Within D Days
**Problem:** Find minimum capacity to ship all packages in D days.
- **Input:** `weights = [1,2,3,4,5,6,7,8,9,10], days = 5`
- **Output:** `15`
- **Company Tags:** Classic problem
- **Difficulty:** Medium
- **Approach:** Binary search on capacity, simulate shipping

### 18. Split Array Largest Sum
**Problem:** Split array into m subarrays minimizing largest sum.
- **Input:** `nums = [7,2,5,10,8], m = 2`
- **Output:** `18`
- **Company Tags:** Binary search on answer
- **Difficulty:** Hard
- **Approach:** Binary search on max sum, check if possible

## Pattern: Special Binary Search

### 19. Find K Closest Elements
**Problem:** Find k closest elements to x in sorted array.
- **Input:** `arr = [1,2,3,4,5], k = 4, x = 3`
- **Output:** `[1,2,3,4]`
- **Company Tags:** Binary search + sliding window
- **Difficulty:** Medium
- **Approach:** Binary search for insertion point, expand window

### 20. Valid Perfect Square
**Problem:** Check if number is perfect square without sqrt function.
- **Input:** `num = 16`
- **Output:** `true`
- **Company Tags:** Binary search variant
- **Difficulty:** Easy
- **Approach:** Binary search from 1 to num

### 21. Arranging Coins
**Problem:** Find number of complete rows in staircase arrangement.
- **Input:** `n = 5`
- **Output:** `2` (rows: 1, 2 coins)
- **Company Tags:** Binary search on rows
- **Difficulty:** Easy
- **Approach:** Binary search, check if k*(k+1)/2 <= n

### 22. Find Smallest Letter Greater Than Target
**Problem:** Find smallest character greater than target in sorted array.
- **Input:** `letters = ['c','f','j'], target = 'a'`
- **Output:** `'c'`
- **Company Tags:** Ceiling variant
- **Difficulty:** Easy
- **Approach:** Binary search, handle wraparound

### 23. Single Element in Sorted Array
**Problem:** Find single element where every other appears twice.
- **Input:** `nums = [1,1,2,3,3,4,4,8,8]`
- **Output:** `2`
- **Company Tags:** XOR + Binary search
- **Difficulty:** Medium
- **Approach:** Binary search on even-odd index pattern

### 24. Find Right Interval
**Problem:** For each interval, find interval with smallest start > current end.
- **Input:** `intervals = [[1,2]]`
- **Output:** `[-1]`
- **Company Tags:** Binary search application
- **Difficulty:** Medium
- **Approach:** Sort by start, binary search for each end

### 25. Median of Two Sorted Arrays
**Problem:** Find median of two sorted arrays in O(log(min(m,n))).
- **Input:** `nums1 = [1,3], nums2 = [2]`
- **Output:** `2.0`
- **Company Tags:** **Hard but asked**
- **Difficulty:** Hard
- **Approach:** Binary search on partition point

---

## Interview Preparation Checklist
- [ ] Master classic binary search template
- [ ] Understand lower bound and upper bound
- [ ] Can handle rotated array variants
- [ ] Know binary search on answer space pattern
- [ ] Practice 2D matrix search techniques
- [ ] Can explain time complexity: O(log n)
- [ ] Handle edge cases: empty array, single element, target not found

## Key Patterns to Master
1. **Basic Binary Search** - Find element, insert position
2. **Finding Bounds** - First/last occurrence, floor/ceiling
3. **Rotated Arrays** - Modified binary search
4. **Peak Finding** - Move toward increasing side
5. **2D Search** - Staircase search, binary search in matrix
6. **Binary Search on Answer** - Koko bananas, ship packages

## Binary Search Template
```
left = 0, right = n - 1
while left <= right:
    mid = left + (right - left) / 2
    if arr[mid] == target:
        return mid
    elif arr[mid] < target:
        left = mid + 1
    else:
        right = mid - 1
return -1
```

## Common Mistakes to Avoid
1. Integer overflow in mid calculation
2. Infinite loops due to wrong boundary updates
3. Off-by-one errors in conditions
4. Not handling edge cases (empty, single element)
5. Wrong mid calculation for finding bounds

## Time Complexity
- **Linear Search:** O(n)
- **Binary Search:** O(log n)
- **2D Matrix Search:** O(m + n) staircase, O(log(mn)) binary
- **Binary Search on Answer:** O(n log W) where W is search space
