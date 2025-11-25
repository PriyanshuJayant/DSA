# Sorting - Interview Questions for Small Startups

## Pattern: Basic Sorting Knowledge

### 1. Sort an Array (Multiple Approaches)
**Problem:** Sort array using different algorithms.
- **Input:** `[5, 2, 3, 1]`
- **Output:** `[1, 2, 3, 5]`
- **Company Tags:** Fundamental knowledge
- **Difficulty:** Easy-Medium
- **Approach:** Know merge sort, quick sort, heap sort

### 2. Merge Two Sorted Arrays
**Problem:** Merge two sorted arrays into one sorted array.
- **Input:** `nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3`
- **Output:** `[1,2,2,3,5,6]`
- **Company Tags:** **Very common**
- **Difficulty:** Easy
- **Approach:** Merge from end to avoid overwrites

### 3. Sort Colors (Dutch National Flag)
**Problem:** Sort array with 0s, 1s, 2s in one pass.
- **Input:** `[2,0,2,1,1,0]`
- **Output:** `[0,0,1,1,2,2]`
- **Company Tags:** **Classic problem**
- **Difficulty:** Medium
- **Approach:** Three pointers (low, mid, high)

## Pattern: Kth Element Finding

### 4. Kth Largest Element in Array
**Problem:** Find kth largest element.
- **Input:** `nums = [3,2,1,5,6,4], k = 2`
- **Output:** `5`
- **Company Tags:** **Extremely popular**
- **Difficulty:** Medium
- **Approach:** Quick select O(n) or min-heap O(n log k)

### 5. Kth Smallest Element
**Problem:** Find kth smallest element.
- **Input:** `arr = [7, 10, 4, 3, 20, 15], k = 3`
- **Output:** `7`
- **Company Tags:** Variant of kth largest
- **Difficulty:** Medium
- **Approach:** Quick select or max-heap

### 6. Top K Frequent Elements
**Problem:** Return k most frequent elements.
- **Input:** `nums = [1,1,1,2,2,3], k = 2`
- **Output:** `[1,2]`
- **Company Tags:** Heap + hash map
- **Difficulty:** Medium
- **Approach:** Frequency map + min-heap of size k

## Pattern: Custom Comparator Sorting

### 7. Largest Number
**Problem:** Arrange numbers to form largest number.
- **Input:** `[3, 30, 34, 5, 9]`
- **Output:** `"9534330"`
- **Company Tags:** **Clever sorting**
- **Difficulty:** Medium
- **Approach:** Custom comparator comparing concatenations

### 8. Sort Array by Parity
**Problem:** Move all even numbers before odd numbers.
- **Input:** `[3,1,2,4]`
- **Output:** `[2,4,3,1]` (any order maintaining parity)
- **Company Tags:** Two pointer
- **Difficulty:** Easy
- **Approach:** Two pointers or partition

### 9. Sort Array by Parity II
**Problem:** Even indices get even numbers, odd indices get odd.
- **Input:** `[4,2,5,7]`
- **Output:** `[4,5,2,7]`
- **Company Tags:** Index manipulation
- **Difficulty:** Easy
- **Approach:** Two pointers for even/odd positions

### 10. Relative Sort Array
**Problem:** Sort arr1 by order of elements in arr2.
- **Input:** `arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]`
- **Output:** `[2,2,2,1,4,3,3,9,6,7,19]`
- **Company Tags:** Custom ordering
- **Difficulty:** Easy
- **Approach:** Count frequency, output in arr2 order, then sort rest

### 11. Sort Characters By Frequency
**Problem:** Sort characters by frequency (descending).
- **Input:** `"tree"`
- **Output:** `"eert"` or `"eetr"`
- **Company Tags:** Frequency sorting
- **Difficulty:** Medium
- **Approach:** Frequency map + sort by count

## Pattern: Interval Problems

### 12. Merge Intervals
**Problem:** Merge all overlapping intervals.
- **Input:** `[[1,3],[2,6],[8,10],[15,18]]`
- **Output:** `[[1,6],[8,10],[15,18]]`
- **Company Tags:** **Must know**
- **Difficulty:** Medium
- **Approach:** Sort by start, merge overlapping

### 13. Insert Interval
**Problem:** Insert interval and merge if necessary.
- **Input:** `intervals = [[1,3],[6,9]], newInterval = [2,5]`
- **Output:** `[[1,5],[6,9]]`
- **Company Tags:** Merge variant
- **Difficulty:** Medium
- **Approach:** Three phases: before, overlapping, after

### 14. Non-overlapping Intervals
**Problem:** Minimum intervals to remove for no overlap.
- **Input:** `[[1,2],[2,3],[3,4],[1,3]]`
- **Output:** `1` (remove [1,3])
- **Company Tags:** Greedy + sorting
- **Difficulty:** Medium
- **Approach:** Sort by end time, count conflicts

### 15. Meeting Rooms
**Problem:** Check if person can attend all meetings.
- **Input:** `[[0,30],[5,10],[15,20]]`
- **Output:** `false`
- **Company Tags:** Simple interval check
- **Difficulty:** Easy
- **Approach:** Sort by start, check for overlaps

### 16. Meeting Rooms II
**Problem:** Minimum meeting rooms needed.
- **Input:** `[[0,30],[5,10],[15,20]]`
- **Output:** `2`
- **Company Tags:** **Popular**
- **Difficulty:** Medium
- **Approach:** Sort start/end separately or min-heap

## Pattern: Advanced Sorting

### 17. Valid Anagram
**Problem:** Check if two strings are anagrams.
- **Input:** `s = "anagram", t = "nagaram"`
- **Output:** `true`
- **Company Tags:** Sorting or frequency count
- **Difficulty:** Easy
- **Approach:** Sort both strings or use frequency map

### 18. Group Anagrams
**Problem:** Group strings that are anagrams.
- **Input:** `["eat","tea","tan","ate","nat","bat"]`
- **Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`
- **Company Tags:** **Common**
- **Difficulty:** Medium
- **Approach:** Hash map with sorted string as key

### 19. Sort List (Linked List)
**Problem:** Sort linked list in O(n log n) time.
- **Input:** `4 -> 2 -> 1 -> 3`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Company Tags:** Merge sort on LL
- **Difficulty:** Medium
- **Approach:** Merge sort (find middle, split, merge)

### 20. Maximum Gap
**Problem:** Maximum difference between successive elements in sorted form.
- **Input:** `[3,6,9,1]`
- **Output:** `3`
- **Company Tags:** Bucket sort
- **Difficulty:** Hard
- **Approach:** Bucket sort or radix sort O(n)

### 21. H-Index
**Problem:** Find h-index (h papers with ≥ h citations).
- **Input:** `citations = [3,0,6,1,5]`
- **Output:** `3`
- **Company Tags:** Sorting application
- **Difficulty:** Medium
- **Approach:** Sort descending, find h where citations[h] >= h+1

### 22. Wiggle Sort
**Problem:** Rearrange so nums[0] <= nums[1] >= nums[2] <= nums[3]...
- **Input:** `[3,5,2,1,6,4]`
- **Output:** `[3,5,1,6,2,4]`
- **Company Tags:** Greedy swap
- **Difficulty:** Medium
- **Approach:** Single pass, swap if condition violated

### 23. Wiggle Sort II
**Problem:** Strictly nums[0] < nums[1] > nums[2] < nums[3]...
- **Input:** `[1,5,1,1,6,4]`
- **Output:** `[1,6,1,5,1,4]`
- **Company Tags:** Advanced
- **Difficulty:** Medium
- **Approach:** Sort, interleave smaller and larger halves

## Pattern: Array Transformation

### 24. Squares of Sorted Array
**Problem:** Return squares of sorted array in sorted order.
- **Input:** `[-4,-1,0,3,10]`
- **Output:** `[0,1,9,16,100]`
- **Company Tags:** Two pointer
- **Difficulty:** Easy
- **Approach:** Two pointers from ends, compare absolute values

### 25. Sort Transformed Array
**Problem:** Sort array transformed by f(x) = ax² + bx + c.
- **Input:** `nums = [-4,-2,2,4], a = 1, b = 3, c = 5`
- **Output:** `[3,9,15,33]`
- **Company Tags:** Parabola properties
- **Difficulty:** Medium
- **Approach:** Two pointers, direction based on 'a'

---

## Interview Preparation Checklist
- [ ] Know time/space complexity of all major sorting algorithms
- [ ] Can implement merge sort and quick sort from scratch
- [ ] Understand when to use different sorting algorithms
- [ ] Master kth element finding (quick select)
- [ ] Know custom comparator implementation in your language
- [ ] Can solve interval merge problems
- [ ] Understand stable vs unstable sorting
- [ ] Know counting sort for limited range

## Key Patterns to Master
1. **Merge Sort** - Divide and conquer, stable O(n log n)
2. **Quick Select** - Find kth element in O(n) average
3. **Custom Comparator** - Sort by custom criteria
4. **Interval Sorting** - Sort by start/end time
5. **Frequency Sorting** - Hash map + sorting
6. **Three-way Partition** - Dutch national flag
7. **Two Pointer Merge** - Combine sorted arrays

## Sorting Algorithm Selection Guide
- **Nearly sorted data** → Insertion Sort
- **Small dataset** → Insertion Sort
- **Need stable sort** → Merge Sort
- **In-place required** → Quick Sort or Heap Sort
- **Guaranteed O(n log n)** → Merge Sort or Heap Sort
- **Limited range** → Counting Sort
- **Finding kth element** → Quick Select
- **Linked list** → Merge Sort

## Time Complexity Targets
- **Basic sorting:** O(n log n)
- **Finding kth element:** O(n) average with quick select
- **Merge intervals:** O(n log n) due to sorting
- **Frequency problems:** O(n log n) or O(n) with bucket sort

## Common Follow-up Questions
- "Can you do it in O(n)?" → Consider counting/bucket sort
- "What if array is mostly sorted?" → Insertion sort
- "Can you do it in-place?" → Quick sort, heap sort
- "Must be stable?" → Merge sort, avoid quick sort
- "Find kth element without sorting?" → Quick select
