# Linked List - Practice Questions

## Basic Understanding Questions

### 1. Create and Display Linked List
**Problem:** Create a singly linked list and display all elements.
- **Input:** `[1, 2, 3, 4, 5]`
- **Output:** `1 -> 2 -> 3 -> 4 -> 5 -> NULL`
- **Concepts:** Node creation, traversal

### 2. Insert at Beginning
**Problem:** Insert a node at the beginning of linked list.
- **Input:** `List: 2 -> 3 -> 4, Value: 1`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Concepts:** Head pointer manipulation

### 3. Insert at End
**Problem:** Insert a node at the end of linked list.
- **Input:** `List: 1 -> 2 -> 3, Value: 4`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Concepts:** Traversal to end

### 4. Insert at Position
**Problem:** Insert a node at specific position.
- **Input:** `List: 1 -> 3 -> 4, Position: 2, Value: 2`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Concepts:** Position tracking, pointer manipulation

### 5. Delete from Beginning
**Problem:** Delete the first node.
- **Input:** `1 -> 2 -> 3 -> 4`
- **Output:** `2 -> 3 -> 4`
- **Concepts:** Head update

### 6. Delete from End
**Problem:** Delete the last node.
- **Input:** `1 -> 2 -> 3 -> 4`
- **Output:** `1 -> 2 -> 3`
- **Concepts:** Find second-to-last node

### 7. Delete by Value
**Problem:** Delete first node with given value.
- **Input:** `List: 1 -> 2 -> 3 -> 2 -> 4, Value: 2`
- **Output:** `1 -> 3 -> 2 -> 4`
- **Concepts:** Search and delete

### 8. Search for Element
**Problem:** Check if element exists in linked list.
- **Input:** `List: 1 -> 2 -> 3 -> 4, Value: 3`
- **Output:** `true` (or index 2)
- **Concepts:** Linear search

### 9. Find Length of Linked List
**Problem:** Count total nodes in linked list.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `5`
- **Concepts:** Traversal with counter

### 10. Reverse a Linked List
**Problem:** Reverse the linked list.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `5 -> 4 -> 3 -> 2 -> 1`
- **Concepts:** Pointer reversal, iterative/recursive

## Intermediate Questions

### 11. Find Middle Element
**Problem:** Find the middle node of linked list.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `3`
- **Concepts:** Slow-fast pointer (tortoise-hare)

### 12. Detect Cycle in Linked List
**Problem:** Check if linked list has a cycle.
- **Input:** `1 -> 2 -> 3 -> 4 -> 2` (4 points to 2)
- **Output:** `true`
- **Concepts:** Floyd's cycle detection, slow-fast pointer

### 13. Find Cycle Start Node
**Problem:** Find the node where cycle begins.
- **Input:** Cyclic linked list
- **Output:** Starting node of cycle
- **Concepts:** Floyd's algorithm extension

### 14. Remove Nth Node from End
**Problem:** Remove nth node from end of list.
- **Input:** `List: 1 -> 2 -> 3 -> 4 -> 5, n = 2`
- **Output:** `1 -> 2 -> 3 -> 5`
- **Concepts:** Two pointer with gap

### 15. Merge Two Sorted Lists
**Problem:** Merge two sorted linked lists.
- **Input:** `List1: 1 -> 3 -> 5, List2: 2 -> 4 -> 6`
- **Output:** `1 -> 2 -> 3 -> 4 -> 5 -> 6`
- **Concepts:** Two pointer merging

### 16. Check if Palindrome
**Problem:** Check if linked list is palindrome.
- **Input:** `1 -> 2 -> 2 -> 1`
- **Output:** `true`
- **Concepts:** Find middle, reverse second half, compare

### 17. Remove Duplicates from Sorted List
**Problem:** Remove duplicates from sorted linked list.
- **Input:** `1 -> 1 -> 2 -> 3 -> 3`
- **Output:** `1 -> 2 -> 3`
- **Concepts:** Sequential comparison

### 18. Remove Duplicates from Unsorted List
**Problem:** Remove duplicates from unsorted linked list.
- **Input:** `1 -> 3 -> 2 -> 1 -> 4 -> 2`
- **Output:** `1 -> 3 -> 2 -> 4`
- **Concepts:** Hash set for tracking

### 19. Intersection Point of Two Lists
**Problem:** Find the node where two lists intersect.
- **Input:** Two lists sharing common tail
- **Output:** Intersection node
- **Concepts:** Length difference, two pointers

### 20. Sort Linked List
**Problem:** Sort linked list in ascending order.
- **Input:** `4 -> 2 -> 1 -> 3`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Concepts:** Merge sort on linked list

### 21. Rotate Linked List
**Problem:** Rotate list to the right by k places.
- **Input:** `List: 1 -> 2 -> 3 -> 4 -> 5, k = 2`
- **Output:** `4 -> 5 -> 1 -> 2 -> 3`
- **Concepts:** Find new tail, make circular, break

### 22. Segregate Even and Odd Nodes
**Problem:** Move all even-valued nodes before odd-valued.
- **Input:** `1 -> 2 -> 3 -> 4 -> 5`
- **Output:** `2 -> 4 -> 1 -> 3 -> 5`
- **Concepts:** Two separate lists, merge

### 23. Pairwise Swap Nodes
**Problem:** Swap every two adjacent nodes.
- **Input:** `1 -> 2 -> 3 -> 4`
- **Output:** `2 -> 1 -> 4 -> 3`
- **Concepts:** Pointer manipulation

### 24. Reverse in Groups of K
**Problem:** Reverse nodes in groups of k.
- **Input:** `List: 1 -> 2 -> 3 -> 4 -> 5, k = 2`
- **Output:** `2 -> 1 -> 4 -> 3 -> 5`
- **Concepts:** Group reversal, recursion/iteration

### 25. Add Two Numbers (Linked Lists)
**Problem:** Add two numbers represented as linked lists.
- **Input:** `List1: 2 -> 4 -> 3 (342), List2: 5 -> 6 -> 4 (465)`
- **Output:** `7 -> 0 -> 8 (807)`
- **Concepts:** Digit-by-digit addition with carry

## Advanced Questions

### 26. Clone Linked List with Random Pointer
**Problem:** Deep copy linked list with random pointers.
- **Input:** List with next and random pointers
- **Output:** Complete deep copy
- **Concepts:** Hash map or interweaving nodes

### 27. Flatten Multilevel Linked List
**Problem:** Flatten a linked list with child pointers.
- **Input:** Multilevel list structure
- **Output:** Single level list
- **Concepts:** DFS/recursion

### 28. LRU Cache (Using Linked List)
**Problem:** Implement LRU cache with O(1) operations.
- **Input:** Operations: get, put
- **Output:** Correct values with eviction
- **Concepts:** Doubly linked list + hash map

### 29. Merge K Sorted Lists
**Problem:** Merge k sorted linked lists.
- **Input:** `Lists: [1->4->5, 1->3->4, 2->6]`
- **Output:** `1 -> 1 -> 2 -> 3 -> 4 -> 4 -> 5 -> 6`
- **Concepts:** Min heap or divide-and-conquer

### 30. Sort List using Merge Sort
**Problem:** Implement merge sort specifically for linked list.
- **Input:** `4 -> 2 -> 1 -> 3`
- **Output:** `1 -> 2 -> 3 -> 4`
- **Concepts:** Find middle, split, merge recursively

---

## Doubly Linked List Questions

### 31. Create Doubly Linked List
**Problem:** Implement doubly linked list with forward/backward traversal.
- **Concepts:** Prev and next pointers

### 32. Delete Node in Doubly Linked List
**Problem:** Delete a node given only pointer to that node.
- **Concepts:** Update prev and next of adjacent nodes

### 33. Reverse Doubly Linked List
**Problem:** Reverse a doubly linked list.
- **Concepts:** Swap next and prev pointers

## Circular Linked List Questions

### 34. Create Circular Linked List
**Problem:** Implement circular linked list.
- **Concepts:** Last node points to first

### 35. Split Circular Linked List
**Problem:** Split circular list into two halves.
- **Concepts:** Find middle, create two circular lists

---

## Tips for Practice
1. **Draw diagrams** - Visualize pointer changes
2. **Edge cases** - Empty list, single node, two nodes
3. **Dummy nodes** - Simplify operations, especially for head changes
4. **Two pointer technique** - Fast-slow, finding middle, cycle detection
5. **Recursion** - Natural fit for linked list problems
6. **Space vs Time** - Many problems can be solved with O(1) space
7. **In-place operations** - Modify existing structure when possible

## Common Techniques
1. **Slow-Fast Pointer** - Finding middle, cycle detection
2. **Dummy Head** - Simplify insertions/deletions
3. **Reversal** - Iterative with three pointers
4. **Two Lists** - Separate even/odd, then merge
5. **Recursion** - Reverse, merge operations
6. **Hash Map** - Track visited nodes, random pointer cloning

## Time Complexity Patterns
- **Traversal:** O(n)
- **Insert/Delete at beginning:** O(1)
- **Insert/Delete at end:** O(n) for singly, O(1) with tail pointer
- **Search:** O(n)
- **Reverse:** O(n)
- **Merge two lists:** O(n + m)
- **Detect cycle:** O(n) with O(1) space
