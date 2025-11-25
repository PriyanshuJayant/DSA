# Queue - Practice Questions

## Basic Understanding Questions

### 1. Implement Queue using Array
**Problem:** Implement queue with enqueue, dequeue, front, isEmpty operations.
- **Operations:** `enqueue(5), enqueue(10), dequeue(), front()`
- **Output:** `dequeue() = 5, front() = 10`
- **Concepts:** Circular array, front and rear pointers

### 2. Implement Queue using Linked List
**Problem:** Implement queue using linked list.
- **Operations:** Same as above
- **Concepts:** Head for dequeue, tail for enqueue

### 3. Implement Circular Queue
**Problem:** Implement circular queue with fixed size.
- **Operations:** `enqueue, dequeue, front, rear, isFull, isEmpty`
- **Concepts:** Circular array with modulo arithmetic

### 4. Check if Queue is Empty
**Problem:** Verify if queue has no elements.
- **Input:** Empty queue
- **Output:** `true`
- **Concepts:** Front/rear pointer comparison

### 5. Get Queue Size
**Problem:** Return number of elements in queue.
- **Input:** Queue with [1, 2, 3]
- **Output:** `3`
- **Concepts:** Counter maintenance

### 6. Reverse a Queue
**Problem:** Reverse all elements in a queue.
- **Input:** `[1, 2, 3, 4, 5]`
- **Output:** `[5, 4, 3, 2, 1]`
- **Concepts:** Using stack or recursion

### 7. Queue using Stack
**Problem:** Implement queue using stack(s).
- **Operations:** `enqueue, dequeue`
- **Concepts:** Two stacks - one for enqueue, one for dequeue

### 8. Stack using Queue
**Problem:** Implement stack using queue(s).
- **Operations:** `push, pop`
- **Concepts:** One or two queues, rotate elements

### 9. Generate Binary Numbers
**Problem:** Generate binary numbers from 1 to N using queue.
- **Input:** `n = 5`
- **Output:** `["1", "10", "11", "100", "101"]`
- **Concepts:** Queue for BFS-like generation

### 10. First Non-Repeating Character in Stream
**Problem:** Find first non-repeating character at each point in stream.
- **Input:** `"aabcbcc"`
- **Output:** `["a", "a", "b", "b", "b", "c", "c"]` (first unique at each step)
- **Concepts:** Queue + frequency map

## Intermediate Questions

### 11. Implement Deque (Double-Ended Queue)
**Problem:** Implement deque with operations at both ends.
- **Operations:** `insertFront, insertRear, deleteFront, deleteRear`
- **Concepts:** Doubly linked list or circular array

### 12. Sliding Window Maximum
**Problem:** Find maximum in each sliding window of size k.
- **Input:** `nums = [1,3,-1,-3,5,3,6,7], k = 3`
- **Output:** `[3,3,5,5,6,7]`
- **Concepts:** Deque maintaining decreasing order

### 13. First Negative in Every Window
**Problem:** Find first negative integer in each window of size k.
- **Input:** `arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3`
- **Output:** `[-1, -1, -7, -15, -15, 0]`
- **Concepts:** Queue for tracking negatives

### 14. Reverse First K Elements
**Problem:** Reverse first k elements of queue.
- **Input:** `Queue: [1, 2, 3, 4, 5], k = 3`
- **Output:** `[3, 2, 1, 4, 5]`
- **Concepts:** Stack for reversal, queue for remaining

### 15. Interleave First and Second Half
**Problem:** Interleave first half with second half of queue.
- **Input:** `[1, 2, 3, 4, 5, 6]`
- **Output:** `[1, 4, 2, 5, 3, 6]`
- **Concepts:** Auxiliary queue or stack

### 16. Sort a Queue
**Problem:** Sort queue in ascending order.
- **Input:** `[30, 11, 15, 4]`
- **Output:** `[4, 11, 15, 30]`
- **Concepts:** Recursion or auxiliary data structures

### 17. Check if Queue is Sorted
**Problem:** Check if queue elements are in sorted order.
- **Input:** `[1, 2, 3, 4, 5]`
- **Output:** `true`
- **Concepts:** Dequeue and compare, re-enqueue

### 18. Implement Priority Queue
**Problem:** Implement priority queue (min-heap or max-heap).
- **Operations:** `insert, extractMin/Max, peek`
- **Concepts:** Heap data structure

### 19. Task Scheduler
**Problem:** Minimum intervals to execute tasks with cooldown.
- **Input:** `tasks = ["A","A","A","B","B","B"], n = 2`
- **Output:** `8`
- **Concepts:** Priority queue + queue for cooldown

### 20. Maximum of Minimum for Every Window Size
**Problem:** For each window size, find max of all window minimums.
- **Input:** `arr = [10, 20, 30, 50, 10, 70, 30]`
- **Output:** Array of maximums for each window size
- **Concepts:** Deque, next smaller element

## Advanced Questions

### 21. LRU Cache using Queue
**Problem:** Implement LRU cache with queue and hash map.
- **Operations:** `get, put`
- **Concepts:** Doubly linked list (queue) + hash map

### 22. Design Hit Counter
**Problem:** Count hits in last 300 seconds.
- **Operations:** `hit(timestamp), getHits(timestamp)`
- **Concepts:** Queue with timestamps

### 23. Moving Average from Data Stream
**Problem:** Calculate moving average from stream with window size.
- **Input:** `MovingAverage(3), next(1), next(10), next(3), next(5)`
- **Output:** `1, 5.5, 4.67, 6`
- **Concepts:** Queue for window, running sum

### 24. Number of Recent Calls
**Problem:** Count requests in last 3000ms.
- **Operations:** `ping(t)` - returns count of calls in [t-3000, t]
- **Concepts:** Queue, remove old timestamps

### 25. Rotting Oranges
**Problem:** Find minimum time for all oranges to rot (BFS).
- **Input:** Grid with fresh (1) and rotten (2) oranges
- **Output:** Minimum minutes
- **Concepts:** Multi-source BFS using queue

### 26. Shortest Path in Binary Matrix
**Problem:** Shortest path from top-left to bottom-right in binary matrix.
- **Input:** Binary matrix
- **Output:** Shortest path length
- **Concepts:** BFS with queue

### 27. Open the Lock
**Problem:** Minimum turns to unlock a lock (BFS).
- **Input:** `deadends = ["0201"], target = "0202"`
- **Output:** `6`
- **Concepts:** BFS, queue for states

### 28. Walls and Gates
**Problem:** Fill distances to nearest gate in matrix.
- **Input:** Matrix with gates (0), walls (-1), empty rooms (INF)
- **Output:** Distance to nearest gate
- **Concepts:** Multi-source BFS

### 29. Snake and Ladder
**Problem:** Minimum moves to reach end in snake and ladder game.
- **Input:** Board with snakes and ladders
- **Output:** Minimum dice rolls
- **Concepts:** BFS with queue

### 30. Word Ladder
**Problem:** Shortest transformation sequence from begin to end word.
- **Input:** `beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]`
- **Output:** `5` (hit → hot → dot → dog → cog)
- **Concepts:** BFS with queue, word transformations

---

## Queue Implementation Patterns

### Array-based Queue (Circular)
```python
class Queue:
    def __init__(self, capacity):
        self.capacity = capacity
        self.queue = [None] * capacity
        self.front = 0
        self.rear = -1
        self.size = 0
    
    def enqueue(self, item):
        if self.is_full():
            return False
        self.rear = (self.rear + 1) % self.capacity
        self.queue[self.rear] = item
        self.size += 1
        return True
    
    def dequeue(self):
        if self.is_empty():
            return None
        item = self.queue[self.front]
        self.front = (self.front + 1) % self.capacity
        self.size -= 1
        return item
    
    def is_empty(self):
        return self.size == 0
    
    def is_full(self):
        return self.size == self.capacity
```

## Tips for Practice
1. **FIFO principle** - First In, First Out
2. **Queue operations** - Enqueue O(1), Dequeue O(1)
3. **BFS uses queue** - Level-order traversal, shortest path
4. **Deque** - Double-ended queue for sliding window problems
5. **Circular queue** - Efficient space utilization
6. **Priority queue** - Heap-based for ordered processing
7. **Monotonic deque** - For sliding window max/min

## Key Patterns
1. **BFS** - Level-order traversal, shortest path
2. **Sliding Window** - Deque for max/min in window
3. **Stream Processing** - First non-repeating, moving average
4. **Task Scheduling** - Priority queue for ordering
5. **Multi-source BFS** - Rotting oranges, walls and gates
6. **Interleaving** - Rearrange queue elements

## Common Use Cases
- **BFS traversal** - Tree/graph level-order
- **Task scheduling** - Process in order of arrival
- **Buffering** - Print queue, network packets
- **Cache systems** - LRU with queue
- **Resource allocation** - Round-robin scheduling
- **Stream processing** - First unique, moving average

## Time Complexity
- **Enqueue:** O(1)
- **Dequeue:** O(1)
- **Front/Rear:** O(1)
- **Search:** O(n)
- **Space:** O(n)

## Queue vs Deque vs Priority Queue

| Operation | Queue | Deque | Priority Queue |
|-----------|-------|-------|----------------|
| **Insert front** | - | O(1) | - |
| **Insert rear** | O(1) | O(1) | O(log n) |
| **Remove front** | O(1) | O(1) | O(log n) |
| **Remove rear** | - | O(1) | - |
| **Get min/max** | - | - | O(1) |

## Edge Cases
1. Queue overflow (enqueue when full)
2. Queue underflow (dequeue when empty)
3. Empty queue operations
4. Single element queue
5. Circular queue wraparound
