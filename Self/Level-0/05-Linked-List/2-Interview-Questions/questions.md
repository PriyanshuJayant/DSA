# Linked List - Interview Questions for Small Startups

## Pattern: Basic Operations

### 1. Reverse Linked List
**Problem:** Reverse a singly linked list.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `5 -> 4 -> 3 -> 2 -> 1`
- **Company Tags:** **Most asked LL question**
- **Difficulty:** Easy
- **Approach:** Iterative (3 pointers) or recursive

### 2. Middle of Linked List
**Problem:** Find the middle node.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `3`
- **Company Tags:** Slow-fast pointer
- **Difficulty:** Easy
- **Approach:** Tortoise and hare (slow moves 1, fast moves 2)

### 3. Linked List Cycle
**Problem:** Detect if linked list has a cycle.
- **Input:** List with cycle
- **Output:** `true`
- **Company Tags:** **Classic Floyd's algorithm**
- **Difficulty:** Easy
- **Approach:** Slow-fast pointer, if they meet → cycle exists

### 4. Linked List Cycle II (Find Start)
**Problem:** Find the node where cycle begins.
- **Input:** List with cycle
- **Output:** Starting node of cycle
- **Company Tags:** Floyd's extension
- **Difficulty:** Medium
- **Approach:** After meeting, move one pointer to head, both move at same speed

## Pattern: Two Pointer Technique

### 5. Remove Nth Node From End
**Problem:** Remove nth node from end in one pass.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5, n = 2`
- **Output:** `1 -> 2 -> 3 -> 5`
- **Company Tags:** **Very common**
- **Difficulty:** Medium
- **Approach:** Two pointers with n gap

### 6. Delete Node in Linked List
**Problem:** Delete node given only pointer to that node (not tail).
- **Input:** `Node to delete = 5 in list 4 -> 5 -> 1 -> 9`
- **Output:** `4 -> 1 -> 9`
- **Company Tags:** Trick question
- **Difficulty:** Easy
- **Approach:** Copy next node's data, delete next node

### 7. Palindrome Linked List
**Problem:** Check if linked list is palindrome.
- **Input:** `1 -> 2 -> 2 -> 1`
- **Output:** `true`
- **Company Tags:** Multiple techniques
- **Difficulty:** Easy
- **Approach:** Find middle, reverse second half, compare

### 8. Intersection of Two Linked Lists
**Problem:** Find node where two lists intersect.
- **Input:** Two lists sharing common nodes
- **Output:** Intersection node
- **Company Tags:** Two pointer trick
- **Difficulty:** Easy
- **Approach:** Two pointers, switch heads when reaching end

## Pattern: Merging & Sorting

### 9. Merge Two Sorted Lists
**Problem:** Merge two sorted linked lists.
- **Input:** `List1: 1 -> 2 -> 4, List2: 1 -> 3 -> 4`
- **Output:** `1 -> 1 -> 2 -> 3 -> 4 -> 4`
- **Company Tags:** **Fundamental**
- **Difficulty:** Easy
- **Approach:** Dummy node, compare and link

### 10. Sort List
**Problem:** Sort linked list in O(n log n) time.
- **Input:** `4 -> 2 -> 1 -> 3`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Company Tags:** Merge sort on LL
- **Difficulty:** Medium
- **Approach:** Find middle, recursively sort halves, merge

### 11. Merge K Sorted Lists
**Problem:** Merge k sorted linked lists.
- **Input:** `[[1,4,5],[1,3,4],[2,6]]`
- **Output:** `1 -> 1 -> 2 -> 3 -> 4 -> 4 -> 5 -> 6`
- **Company Tags:** Heap or divide-conquer
- **Difficulty:** Hard
- **Approach:** Min heap or merge pairs recursively

### 12. Sort List by Parity
**Problem:** Even nodes before odd nodes, maintain relative order.
- **Input:** `1 -> 2 -> 3 -> 4`
- **Output:** `2 -> 4 -> 1 -> 3`
- **Company Tags:** Segregation
- **Difficulty:** Easy
- **Approach:** Two separate lists for even/odd, merge

## Pattern: Manipulation & Reordering

### 13. Rotate List
**Problem:** Rotate list to right by k places.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5, k = 2`
- **Output:** `4 -> 5 -> 1 -> 2 -> 3`
- **Company Tags:** Pointer manipulation
- **Difficulty:** Medium
- **Approach:** Make circular, find new head, break circle

### 14. Reorder List
**Problem:** Reorder to L0 → Ln → L1 → Ln-1 → L2 → Ln-2...
- **Input:** `1 -> 2 -> 3 -> 4`
- **Output:** `1 -> 4 -> 2 -> 3`
- **Company Tags:** Multiple steps
- **Difficulty:** Medium
- **Approach:** Find middle, reverse second half, merge alternately

### 15. Swap Nodes in Pairs
**Problem:** Swap every two adjacent nodes.
- **Input:** `1 -> 2 -> 3 -> 4`
- **Output:** `2 -> 1 -> 4 -> 3`
- **Company Tags:** Pointer manipulation
- **Difficulty:** Medium
- **Approach:** Iterative or recursive swapping

### 16. Reverse Nodes in k-Group
**Problem:** Reverse nodes in groups of k.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5, k = 2`
- **Output:** `2 -> 1 -> 4 -> 3 -> 5`
- **Company Tags:** Advanced reversal
- **Difficulty:** Hard
- **Approach:** Reverse each group, connect groups

### 17. Odd Even Linked List
**Problem:** Group odd-indexed nodes followed by even-indexed.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `1 -> 3 -> 5 -> 2 -> 4`
- **Company Tags:** Index-based segregation
- **Difficulty:** Medium
- **Approach:** Two separate lists for odd/even indices

## Pattern: Arithmetic Operations

### 18. Add Two Numbers
**Problem:** Add two numbers represented as linked lists (reversed).
- **Input:** `(2 -> 4 -> 3) + (5 -> 6 -> 4)` = 342 + 465
- **Output:** `7 -> 0 -> 8` = 807
- **Company Tags:** **Very popular**
- **Difficulty:** Medium
- **Approach:** Digit-by-digit addition with carry

### 19. Add Two Numbers II
**Problem:** Add two numbers (most significant digit first).
- **Input:** `(7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)` = 7243 + 564
- **Output:** `(7 -> 8 -> 0 -> 7)` = 7807
- **Company Tags:** Reverse or stack
- **Difficulty:** Medium
- **Approach:** Reverse both, add, reverse result OR use stack

## Pattern: Duplicate Removal

### 20. Remove Duplicates from Sorted List
**Problem:** Remove duplicates from sorted linked list.
- **Input:** `1 -> 1 -> 2 -> 3 -> 3`
- **Output:** `1 -> 2 -> 3`
- **Company Tags:** Basic traversal
- **Difficulty:** Easy
- **Approach:** Compare current with next, skip if equal

### 21. Remove Duplicates from Sorted List II
**Problem:** Remove all nodes that have duplicates.
- **Input:** `1 -> 2 -> 3 -> 3 -> 4 -> 4 -> 5`
- **Output:** `1 -> 2 -> 5`
- **Company Tags:** Trickier variant
- **Difficulty:** Medium
- **Approach:** Dummy node, skip all duplicates

### 22. Remove All Occurrences
**Problem:** Remove all nodes with given value.
- **Input:** `List: 1 -> 2 -> 6 -> 3 -> 6, val = 6`
- **Output:** `1 -> 2 -> 3`
- **Company Tags:** Filtering
- **Difficulty:** Easy
- **Approach:** Dummy node, skip matching values

## Pattern: Advanced Data Structures

### 23. Copy List with Random Pointer
**Problem:** Deep copy linked list with random pointers.
- **Input:** List with next and random pointers
- **Output:** Complete clone
- **Company Tags:** Hash map or interweaving
- **Difficulty:** Medium
- **Approach:** Hash map (old → new) or interweave + split

### 24. Flatten a Multilevel Doubly Linked List
**Problem:** Flatten list with child pointers.
- **Input:** Multilevel structure
- **Output:** Single level list
- **Company Tags:** DFS approach
- **Difficulty:** Medium
- **Approach:** DFS/recursion or stack

### 25. LRU Cache
**Problem:** Implement LRU cache with O(1) get/put.
- **Input:** Capacity, get/put operations
- **Output:** Correct values with eviction
- **Company Tags:** **Classic design problem**
- **Difficulty:** Medium
- **Approach:** Doubly linked list + hash map

---

## Interview Preparation Checklist
- [ ] Can reverse linked list (iterative and recursive)
- [ ] Master slow-fast pointer technique
- [ ] Know cycle detection and finding cycle start
- [ ] Can merge two sorted lists efficiently
- [ ] Understand dummy node usage
- [ ] Know how to find middle without length
- [ ] Can handle edge cases (empty, single node)
- [ ] Practice drawing pointer changes

## Key Patterns to Master
1. **Slow-Fast Pointer** - Middle, cycle detection, palindrome
2. **Dummy Node** - Simplifies head operations
3. **Two Pointer with Gap** - Remove nth from end
4. **Reversal** - Iterative (3 pointers) or recursive
5. **Merge** - Two lists with dummy node
6. **Multiple Passes** - Find middle, reverse, merge (reorder list)

## Common Techniques
- **Dummy/Sentinel Node:** Simplifies edge cases
- **Two Pointers:** Fast-slow, maintain gap
- **In-place Reversal:** Three pointers (prev, curr, next)
- **Hash Map:** Clone with random pointer, detect visited
- **Recursion:** Natural for LL, but watch stack space
- **Length Calculation:** When needed, calculate first

## Edge Cases to Consider
1. Empty list (NULL head)
2. Single node
3. Two nodes
4. Cycle detection (no cycle case)
5. Nth from end where n = length
6. Lists of different lengths (merge/intersection)

## Time Complexity Targets
- **Traversal:** O(n)
- **Reverse:** O(n) time, O(1) space
- **Detect cycle:** O(n) time, O(1) space
- **Merge two lists:** O(n + m)
- **Sort:** O(n log n) with merge sort
- **Find middle:** O(n) time, O(1) space

## Common Follow-ups
- "Can you do it in one pass?" → Two pointer technique
- "Can you do it without extra space?" → In-place manipulation
- "What if it's doubly linked list?" → Use prev pointer
- "Recursive solution?" → Most operations have recursive variants
