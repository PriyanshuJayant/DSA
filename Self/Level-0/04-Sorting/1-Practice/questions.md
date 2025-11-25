# Sorting - Practice Questions

## Basic Sorting Algorithms Understanding

### 1. Bubble Sort Implementation
**Problem:** Implement bubble sort algorithm.
- **Input:** `[64, 34, 25, 12, 22, 11, 90]`
- **Output:** `[11, 12, 22, 25, 34, 64, 90]`
- **Concepts:** Adjacent swaps, O(n²) time
- **Optimization:** Stop if no swaps in a pass

### 2. Selection Sort Implementation
**Problem:** Implement selection sort algorithm.
- **Input:** `[29, 10, 14, 37, 13]`
- **Output:** `[10, 13, 14, 29, 37]`
- **Concepts:** Find minimum, swap with first unsorted
- **Time:** O(n²), Space: O(1)

### 3. Insertion Sort Implementation
**Problem:** Implement insertion sort algorithm.
- **Input:** `[12, 11, 13, 5, 6]`
- **Output:** `[5, 6, 11, 12, 13]`
- **Concepts:** Build sorted array one element at a time
- **Best for:** Nearly sorted arrays

### 4. Merge Sort Implementation
**Problem:** Implement merge sort algorithm.
- **Input:** `[38, 27, 43, 3, 9, 82, 10]`
- **Output:** `[3, 9, 10, 27, 38, 43, 82]`
- **Concepts:** Divide and conquer, merge two sorted arrays
- **Time:** O(n log n), Space: O(n)

### 5. Quick Sort Implementation
**Problem:** Implement quick sort algorithm.
- **Input:** `[10, 7, 8, 9, 1, 5]`
- **Output:** `[1, 5, 7, 8, 9, 10]`
- **Concepts:** Pivot selection, partitioning
- **Average:** O(n log n), Worst: O(n²)

### 6. Counting Sort (For Limited Range)
**Problem:** Sort array with elements in range [0, k].
- **Input:** `[1, 4, 1, 2, 7, 5, 2], k = 7`
- **Output:** `[1, 1, 2, 2, 4, 5, 7]`
- **Concepts:** Frequency counting, non-comparison sort
- **Time:** O(n + k), Space: O(k)

### 7. Check if Array is Sorted
**Problem:** Check if array is sorted in ascending order.
- **Input:** `[1, 2, 2, 3, 4, 5]`
- **Output:** `true`
- **Concepts:** Single pass validation

### 8. Sort Array in Ascending and Descending
**Problem:** Sort first half ascending, second half descending.
- **Input:** `[1, 9, 2, 8, 3, 7]`
- **Output:** `[1, 2, 3, 9, 8, 7]`
- **Concepts:** Partial sorting with custom order

## Intermediate Sorting Problems

### 9. Sort Array by Parity
**Problem:** Move all even numbers before odd numbers.
- **Input:** `[3, 1, 2, 4]`
- **Output:** `[2, 4, 3, 1]` (any valid order)
- **Concepts:** Two pointer, partitioning

### 10. Sort Array by Parity II
**Problem:** Sort so even indices have even numbers, odd indices have odd numbers.
- **Input:** `[4, 2, 5, 7]`
- **Output:** `[4, 5, 2, 7]`
- **Concepts:** Two pointer, index-based placement

### 11. Sort Colors (Dutch National Flag)
**Problem:** Sort array with 0s, 1s, and 2s in-place.
- **Input:** `[2, 0, 2, 1, 1, 0]`
- **Output:** `[0, 0, 1, 1, 2, 2]`
- **Concepts:** Three-way partitioning

### 12. Merge Two Sorted Arrays
**Problem:** Merge two sorted arrays into one.
- **Input:** `arr1 = [1, 3, 5], arr2 = [2, 4, 6]`
- **Output:** `[1, 2, 3, 4, 5, 6]`
- **Concepts:** Two pointer merging

### 13. Merge Sorted Array (In-place)
**Problem:** Merge arr2 into arr1 (arr1 has enough space).
- **Input:** `nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3`
- **Output:** `[1, 2, 2, 3, 5, 6]`
- **Concepts:** Merge from end to avoid overwrites

### 14. Kth Largest Element
**Problem:** Find kth largest element in unsorted array.
- **Input:** `nums = [3, 2, 1, 5, 6, 4], k = 2`
- **Output:** `5`
- **Concepts:** Quick select, heap, partial sorting

### 15. Kth Smallest Element
**Problem:** Find kth smallest element.
- **Input:** `arr = [7, 10, 4, 3, 20, 15], k = 3`
- **Output:** `7`
- **Concepts:** Quick select O(n) average

### 16. Sort by Frequency
**Problem:** Sort array by frequency of elements.
- **Input:** `[1, 1, 2, 2, 2, 3]`
- **Output:** `[2, 2, 2, 1, 1, 3]`
- **Concepts:** Frequency map + custom sorting

### 17. Sort by Absolute Difference
**Problem:** Sort array by absolute difference with target.
- **Input:** `arr = [5, 2, 7, 1, 4], target = 3`
- **Output:** `[2, 4, 5, 1, 7]`
- **Concepts:** Custom comparator

### 18. Wiggle Sort
**Problem:** Rearrange so arr[0] <= arr[1] >= arr[2] <= arr[3]...
- **Input:** `[3, 5, 2, 1, 6, 4]`
- **Output:** `[3, 5, 1, 6, 2, 4]`
- **Concepts:** Swap adjacent pairs conditionally

### 19. Pancake Sort
**Problem:** Sort using only flip operations (reverse prefix).
- **Input:** `[3, 2, 4, 1]`
- **Output:** `[1, 2, 3, 4]`
- **Concepts:** Selection sort variant with flips

### 20. Minimum Swaps to Sort
**Problem:** Find minimum swaps needed to sort array.
- **Input:** `[4, 3, 2, 1]`
- **Output:** `2` (swap 4↔1, swap 3↔2)
- **Concepts:** Cycle detection in permutation

## Advanced Sorting Problems

### 21. Sort Linked List
**Problem:** Sort a linked list in O(n log n) time.
- **Input:** `4 -> 2 -> 1 -> 3`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Concepts:** Merge sort on linked list

### 22. Count Inversions
**Problem:** Count pairs (i, j) where i < j but arr[i] > arr[j].
- **Input:** `[8, 4, 2, 1]`
- **Output:** `6`
- **Concepts:** Modified merge sort

### 23. Largest Number
**Problem:** Arrange numbers to form largest number.
- **Input:** `[3, 30, 34, 5, 9]`
- **Output:** `"9534330"`
- **Concepts:** Custom comparator (compare concatenations)

### 24. Meeting Rooms II (Minimum Rooms)
**Problem:** Find minimum meeting rooms needed.
- **Input:** `[[0,30],[5,10],[15,20]]`
- **Output:** `2`
- **Concepts:** Sort by start time, track overlaps

### 25. Merge Intervals
**Problem:** Merge overlapping intervals.
- **Input:** `[[1,3],[2,6],[8,10],[15,18]]`
- **Output:** `[[1,6],[8,10],[15,18]]`
- **Concepts:** Sort by start, merge overlapping

### 26. Non-overlapping Intervals
**Problem:** Find minimum intervals to remove for no overlap.
- **Input:** `[[1,2],[2,3],[3,4],[1,3]]`
- **Output:** `1`
- **Concepts:** Sort by end time, greedy

### 27. Sort Characters by Frequency
**Problem:** Sort characters by frequency (descending).
- **Input:** `"tree"`
- **Output:** `"eert"` or `"eetr"`
- **Concepts:** Frequency map + sorting

### 28. Top K Frequent Elements
**Problem:** Return k most frequent elements.
- **Input:** `nums = [1,1,1,2,2,3], k = 2`
- **Output:** `[1, 2]`
- **Concepts:** Hash map + heap/bucket sort

### 29. H-Index
**Problem:** Find h-index (h papers with ≥ h citations each).
- **Input:** `citations = [3, 0, 6, 1, 5]`
- **Output:** `3`
- **Concepts:** Sort + scan or counting sort

### 30. Maximum Gap
**Problem:** Find maximum difference between successive elements in sorted form.
- **Input:** `[3, 6, 9, 1]`
- **Output:** `3` (sorted: [1,3,6,9], gaps: 2,3,3)
- **Concepts:** Bucket sort, pigeonhole principle

---

## Sorting Algorithm Comparison

| Algorithm | Best | Average | Worst | Space | Stable |
|-----------|------|---------|-------|-------|--------|
| **Bubble Sort** | O(n) | O(n²) | O(n²) | O(1) | Yes |
| **Selection Sort** | O(n²) | O(n²) | O(n²) | O(1) | No |
| **Insertion Sort** | O(n) | O(n²) | O(n²) | O(1) | Yes |
| **Merge Sort** | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| **Quick Sort** | O(n log n) | O(n log n) | O(n²) | O(log n) | No |
| **Heap Sort** | O(n log n) | O(n log n) | O(n log n) | O(1) | No |
| **Counting Sort** | O(n+k) | O(n+k) | O(n+k) | O(k) | Yes |

## Tips for Practice
1. **Understand trade-offs** - Time vs space, stable vs unstable
2. **Master merge sort** - Essential for divide and conquer
3. **Quick select** - O(n) average for finding kth element
4. **Custom comparators** - For complex sorting requirements
5. **Stability matters** - When relative order must be preserved
6. **In-place sorting** - Important for space constraints
7. **Counting/Bucket sort** - For limited range or specific distributions

## Key Patterns
1. **Two Pointer** - Partitioning, merging
2. **Custom Comparator** - Sorting by custom criteria
3. **Frequency-based** - Sort by occurrence count
4. **Interval Problems** - Sort by start/end time
5. **Kth Element** - Quick select or heap
6. **Inversions** - Modified merge sort
