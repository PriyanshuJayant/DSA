# Arrays - Practice Questions

## Basic Understanding Questions

### 1. Array Basics
**Problem:** Write a program to find the largest element in an array.
- **Input:** `[3, 5, 7, 2, 8, 1]`
- **Output:** `8`
- **Concepts:** Array traversal, comparison

### 2. Second Largest Element
**Problem:** Find the second largest element in an array without sorting.
- **Input:** `[12, 35, 1, 10, 34, 1]`
- **Output:** `34`
- **Concepts:** Single pass traversal, tracking multiple values

### 3. Reverse an Array
**Problem:** Reverse an array in-place.
- **Input:** `[1, 2, 3, 4, 5]`
- **Output:** `[5, 4, 3, 2, 1]`
- **Concepts:** Two pointer technique

### 4. Array Rotation
**Problem:** Rotate an array to the right by k steps.
- **Input:** `nums = [1,2,3,4,5,6,7], k = 3`
- **Output:** `[5,6,7,1,2,3,4]`
- **Concepts:** Array manipulation, modulo operation

### 5. Check if Array is Sorted
**Problem:** Check if an array is sorted in ascending order.
- **Input:** `[1, 2, 3, 4, 5]`
- **Output:** `true`
- **Concepts:** Sequential comparison

### 6. Remove Duplicates from Sorted Array
**Problem:** Remove duplicates in-place from a sorted array and return the new length.
- **Input:** `[1, 1, 2, 2, 3, 4, 4]`
- **Output:** `4` (array becomes `[1, 2, 3, 4, ...]`)
- **Concepts:** Two pointer, in-place modification

### 7. Move Zeros to End
**Problem:** Move all zeros to the end while maintaining relative order of non-zero elements.
- **Input:** `[0, 1, 0, 3, 12]`
- **Output:** `[1, 3, 12, 0, 0]`
- **Concepts:** Two pointer, stable partitioning

### 8. Find Missing Number
**Problem:** Given an array containing n distinct numbers from 0 to n, find the missing number.
- **Input:** `[3, 0, 1]`
- **Output:** `2`
- **Concepts:** Mathematical formula (sum), XOR operation

### 9. Single Number
**Problem:** Every element appears twice except one. Find that single element.
- **Input:** `[4, 1, 2, 1, 2]`
- **Output:** `4`
- **Concepts:** XOR properties, bit manipulation

### 10. Merge Sorted Arrays
**Problem:** Merge two sorted arrays into one sorted array.
- **Input:** `arr1 = [1, 3, 5], arr2 = [2, 4, 6]`
- **Output:** `[1, 2, 3, 4, 5, 6]`
- **Concepts:** Two pointer, merging

## Intermediate Questions

### 11. Maximum Subarray Sum (Kadane's Algorithm - Basic)
**Problem:** Find the contiguous subarray with the largest sum.
- **Input:** `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`
- **Output:** `6` (subarray: `[4, -1, 2, 1]`)
- **Concepts:** Dynamic programming, running sum

### 12. Buy and Sell Stock (One Transaction)
**Problem:** Find maximum profit with one buy-sell transaction.
- **Input:** `[7, 1, 5, 3, 6, 4]`
- **Output:** `5` (buy at 1, sell at 6)
- **Concepts:** Tracking minimum, single pass

### 13. Contains Duplicate
**Problem:** Check if any value appears at least twice in the array.
- **Input:** `[1, 2, 3, 1]`
- **Output:** `true`
- **Concepts:** Hashing, set operations

### 14. Two Sum (Using Array Indices)
**Problem:** Find two numbers that add up to a target. Return their indices.
- **Input:** `nums = [2, 7, 11, 15], target = 9`
- **Output:** `[0, 1]`
- **Concepts:** Hash map, complement search

### 15. Intersection of Two Arrays
**Problem:** Find elements that appear in both arrays.
- **Input:** `nums1 = [1, 2, 2, 1], nums2 = [2, 2]`
- **Output:** `[2]`
- **Concepts:** Set operations, hashing

### 16. Majority Element
**Problem:** Find the element that appears more than n/2 times.
- **Input:** `[3, 2, 3]`
- **Output:** `3`
- **Concepts:** Boyer-Moore voting, frequency counting

### 17. Product of Array Except Self (Without Division)
**Problem:** Return array where output[i] equals product of all elements except nums[i].
- **Input:** `[1, 2, 3, 4]`
- **Output:** `[24, 12, 8, 6]`
- **Concepts:** Prefix/suffix products, space optimization

### 18. Find All Duplicates in Array
**Problem:** Find all elements that appear twice (elements are in range [1, n]).
- **Input:** `[4, 3, 2, 7, 8, 2, 3, 1]`
- **Output:** `[2, 3]`
- **Concepts:** Index manipulation, marking

### 19. Sort Array by Parity
**Problem:** Move all even numbers before odd numbers.
- **Input:** `[3, 1, 2, 4]`
- **Output:** `[2, 4, 3, 1]` (any valid arrangement)
- **Concepts:** Two pointer, partitioning

### 20. Squares of Sorted Array
**Problem:** Return squares of sorted array in sorted order.
- **Input:** `[-4, -1, 0, 3, 10]`
- **Output:** `[0, 1, 9, 16, 100]`
- **Concepts:** Two pointer, merge technique

### 21. Find Peak Element
**Problem:** Find any peak element (element greater than neighbors).
- **Input:** `[1, 2, 3, 1]`
- **Output:** `2` (index where element 3 exists)
- **Concepts:** Binary search variant, linear scan

### 22. Majority Element II (> n/3)
**Problem:** Find all elements appearing more than n/3 times.
- **Input:** `[3, 2, 3]`
- **Output:** `[3]`
- **Concepts:** Boyer-Moore generalized, counting

### 23. Sort Colors (Dutch National Flag)
**Problem:** Sort array with values 0, 1, 2 in-place.
- **Input:** `[2, 0, 2, 1, 1, 0]`
- **Output:** `[0, 0, 1, 1, 2, 2]`
- **Concepts:** Three-way partitioning, counting

### 24. Next Permutation
**Problem:** Rearrange to next lexicographically greater permutation.
- **Input:** `[1, 2, 3]`
- **Output:** `[1, 3, 2]`
- **Concepts:** Greedy, two pointer, reversal

### 25. Leaders in Array
**Problem:** Find all elements that are greater than all elements to their right.
- **Input:** `[16, 17, 4, 3, 5, 2]`
- **Output:** `[17, 5, 2]`
- **Concepts:** Right-to-left traversal, tracking maximum

### 26. Rearrange Array Alternately (Max-Min)
**Problem:** Rearrange so that max, min, second-max, second-min alternate.
- **Input:** `[1, 2, 3, 4, 5, 6]`
- **Output:** `[6, 1, 5, 2, 4, 3]`
- **Concepts:** Two pointer, auxiliary space

### 27. Subarray Sum Equals K (Frequency Count)
**Problem:** Count subarrays with sum equal to k.
- **Input:** `nums = [1, 1, 1], k = 2`
- **Output:** `2`
- **Concepts:** Prefix sum, hash map

### 28. Range Sum Query (Prefix Sum)
**Problem:** Calculate sum of elements between indices i and j efficiently.
- **Input:** `nums = [1, 2, 3, 4, 5], queries = [[0, 2], [1, 4]]`
- **Output:** `[6, 14]`
- **Concepts:** Prefix sum array, preprocessing

### 29. Running Sum of 1D Array
**Problem:** Return running sum array where runningSum[i] = sum(nums[0]...nums[i]).
- **Input:** `[1, 2, 3, 4]`
- **Output:** `[1, 3, 6, 10]`
- **Concepts:** Prefix sum, cumulative sum

### 30. Find First and Last Position of Element
**Problem:** Find starting and ending position of target in sorted array.
- **Input:** `nums = [5,7,7,8,8,10], target = 8`
- **Output:** `[3, 4]`
- **Concepts:** Binary search variants, bounds

---

## Tips for Practice
1. **Master the basics first** - Focus on questions 1-10 before moving to intermediate
2. **Understand patterns** - Two pointer, sliding window, prefix sum are crucial
3. **Time complexity** - Aim for O(n) or O(n log n) solutions
4. **Space optimization** - Practice in-place modifications
5. **Code without hints** - Try solving on your own before checking solutions
