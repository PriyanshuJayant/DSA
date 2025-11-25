# Searching - Practice Questions

## Linear Search - Basic Understanding

### 1. Basic Linear Search
**Problem:** Find if an element exists in an array using linear search.
- **Input:** `arr = [5, 2, 9, 1, 7], target = 9`
- **Output:** `2` (index) or `true`
- **Concepts:** Sequential search, O(n) time

### 2. Find First Occurrence
**Problem:** Find the index of first occurrence of target.
- **Input:** `arr = [1, 2, 3, 2, 4, 2], target = 2`
- **Output:** `1`
- **Concepts:** Early termination

### 3. Find Last Occurrence
**Problem:** Find the index of last occurrence of target.
- **Input:** `arr = [1, 2, 3, 2, 4, 2], target = 2`
- **Output:** `5`
- **Concepts:** Complete traversal

### 4. Count Occurrences
**Problem:** Count how many times target appears in array.
- **Input:** `arr = [1, 2, 2, 3, 2, 4], target = 2`
- **Output:** `3`
- **Concepts:** Frequency counting

### 5. Find All Occurrences
**Problem:** Return all indices where target appears.
- **Input:** `arr = [1, 2, 3, 2, 4, 2], target = 2`
- **Output:** `[1, 3, 5]`
- **Concepts:** List collection during traversal

### 6. Search in 2D Array
**Problem:** Find if element exists in 2D array.
- **Input:** `matrix = [[1,2,3],[4,5,6]], target = 5`
- **Output:** `true`
- **Concepts:** Nested loops, row-column traversal

### 7. Find Maximum Element
**Problem:** Find the maximum element using linear search.
- **Input:** `arr = [3, 7, 1, 9, 4]`
- **Output:** `9`
- **Concepts:** Tracking maximum during traversal

### 8. Find Minimum in Range
**Problem:** Find minimum element in given range [L, R].
- **Input:** `arr = [5, 2, 9, 1, 7], L = 1, R = 3`
- **Output:** `1`
- **Concepts:** Range-based search

## Binary Search - Basic Understanding

### 9. Basic Binary Search
**Problem:** Find element in sorted array using binary search.
- **Input:** `arr = [1, 3, 5, 7, 9, 11], target = 7`
- **Output:** `3` (index)
- **Concepts:** Divide and conquer, O(log n)

### 10. Recursive Binary Search
**Problem:** Implement binary search using recursion.
- **Input:** `arr = [2, 5, 8, 12, 16], target = 12`
- **Output:** `3`
- **Concepts:** Recursive approach, divide and conquer

### 11. First Occurrence in Sorted Array
**Problem:** Find first occurrence using binary search.
- **Input:** `arr = [1, 2, 2, 2, 3, 4], target = 2`
- **Output:** `1`
- **Concepts:** Lower bound, move left when found

### 12. Last Occurrence in Sorted Array
**Problem:** Find last occurrence using binary search.
- **Input:** `arr = [1, 2, 2, 2, 3, 4], target = 2`
- **Output:** `3`
- **Concepts:** Upper bound, move right when found

### 13. Count Occurrences in Sorted Array
**Problem:** Count occurrences using binary search.
- **Input:** `arr = [1, 2, 2, 2, 3, 4], target = 2`
- **Output:** `3`
- **Concepts:** First and last occurrence difference

### 14. Search Insert Position
**Problem:** Find index where target should be inserted to maintain order.
- **Input:** `arr = [1, 3, 5, 6], target = 2`
- **Output:** `1`
- **Concepts:** Binary search with insertion point

### 15. Floor in Sorted Array
**Problem:** Find largest element smaller than or equal to target.
- **Input:** `arr = [1, 2, 8, 10, 12], target = 5`
- **Output:** `2`
- **Concepts:** Lower bound variant

### 16. Ceiling in Sorted Array
**Problem:** Find smallest element greater than or equal to target.
- **Input:** `arr = [1, 2, 8, 10, 12], target = 5`
- **Output:** `8`
- **Concepts:** Upper bound variant

## Intermediate Binary Search

### 17. Search in Rotated Sorted Array
**Problem:** Search in rotated sorted array.
- **Input:** `arr = [4, 5, 6, 7, 0, 1, 2], target = 0`
- **Output:** `4`
- **Concepts:** Modified binary search, pivot detection

### 18. Find Minimum in Rotated Sorted Array
**Problem:** Find minimum element in rotated sorted array.
- **Input:** `arr = [4, 5, 6, 7, 0, 1, 2]`
- **Output:** `0`
- **Concepts:** Binary search on rotated array

### 19. Find Peak Element
**Problem:** Find any peak element (greater than neighbors).
- **Input:** `arr = [1, 2, 3, 1]`
- **Output:** `2` (index of element 3)
- **Concepts:** Binary search variant

### 20. Find Pivot in Rotated Array
**Problem:** Find the pivot index (point of rotation).
- **Input:** `arr = [4, 5, 6, 7, 0, 1, 2]`
- **Output:** `4` (index where rotation occurred)
- **Concepts:** Finding discontinuity

### 21. Square Root using Binary Search
**Problem:** Find integer square root of n.
- **Input:** `n = 8`
- **Output:** `2`
- **Concepts:** Binary search on answer space

### 22. Search in Infinite Sorted Array
**Problem:** Find element in infinite sorted array (no size known).
- **Input:** `arr = [1, 2, 3, 4, 5, ...], target = 4`
- **Output:** `3`
- **Concepts:** Exponential search + binary search

### 23. Find Position in Infinite Sorted Array
**Problem:** Find target position when array size is unknown.
- **Input:** `arr = [3, 5, 7, 9, 10, 90, ...], target = 10`
- **Output:** `4`
- **Concepts:** Doubling search range

## Advanced Binary Search

### 24. Allocate Minimum Pages (Binary Search on Answer)
**Problem:** Allocate books to minimize maximum pages per student.
- **Input:** `books = [12, 34, 67, 90], students = 2`
- **Output:** `113` (allocate [12,34,67] and [90])
- **Concepts:** Binary search on answer space

### 25. Aggressive Cows (Binary Search on Answer)
**Problem:** Place cows to maximize minimum distance between them.
- **Input:** `stalls = [1, 2, 4, 8, 9], cows = 3`
- **Output:** `3` (place at positions 1, 4, 8)
- **Concepts:** Binary search on distance

### 26. Kth Element in Two Sorted Arrays
**Problem:** Find kth element in merged sorted arrays.
- **Input:** `arr1 = [2, 3, 6], arr2 = [1, 4, 5], k = 5`
- **Output:** `5`
- **Concepts:** Binary search with merge logic

### 27. Median of Two Sorted Arrays
**Problem:** Find median of two sorted arrays.
- **Input:** `arr1 = [1, 3], arr2 = [2]`
- **Output:** `2.0`
- **Concepts:** Advanced binary search, partition

### 28. Find K Closest Elements
**Problem:** Find k elements closest to target.
- **Input:** `arr = [1, 2, 3, 4, 5], k = 4, x = 3`
- **Output:** `[1, 2, 3, 4]`
- **Concepts:** Binary search + two pointer

### 29. Search 2D Matrix (Sorted)
**Problem:** Search in matrix where each row and first element of next row is sorted.
- **Input:** `matrix = [[1,3,5,7],[10,11,16,20]], target = 3`
- **Output:** `true`
- **Concepts:** Treat as 1D array, binary search

### 30. Search 2D Matrix II (Row & Column Sorted)
**Problem:** Search in matrix where each row and column is sorted.
- **Input:** `matrix = [[1,4,7],[2,5,8],[3,6,9]], target = 5`
- **Output:** `true`
- **Concepts:** Staircase search from top-right or bottom-left

---

## Tips for Practice
1. **Linear Search** - O(n), use when array is unsorted or small
2. **Binary Search** - O(log n), requires sorted array
3. **Master the template** - `left`, `right`, `mid = left + (right-left)/2`
4. **Avoid infinite loops** - Be careful with boundary updates
5. **Lower/Upper bounds** - First/last occurrence patterns
6. **Binary search on answer** - When you can verify if answer is possible
7. **Edge cases** - Empty array, single element, target not found
8. **Integer overflow** - Use `mid = left + (right - left) / 2` instead of `(left + right) / 2`

## Key Patterns
1. **Basic Binary Search** - Find exact element
2. **Lower Bound** - First occurrence, ceiling
3. **Upper Bound** - Last occurrence, floor
4. **Search in Rotated** - Modified binary search
5. **Binary Search on Answer** - Minimize/maximize problems
6. **2D Search** - Matrix search techniques
