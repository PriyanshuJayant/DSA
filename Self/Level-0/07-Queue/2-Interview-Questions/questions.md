# Queue - Interview Questions for Small Startups

## Pattern: Queue Design & Implementation

### 1. Implement Queue using Stacks
**Problem:** Implement queue using two stacks.
- **Operations:** `push, pop, peek, empty`
- **Company Tags:** **Very common**
- **Difficulty:** Easy
- **Approach:** Stack1 for enqueue, Stack2 for dequeue (amortized O(1))

### 2. Implement Stack using Queues
**Problem:** Implement stack using queue(s).
- **Operations:** `push, pop, top, empty`
- **Company Tags:** Reverse problem
- **Difficulty:** Easy
- **Approach:** One queue, rotate on push OR two queues

### 3. Design Circular Queue
**Problem:** Implement circular queue with fixed size.
- **Operations:** `enQueue, deQueue, Front, Rear, isEmpty, isFull`
- **Company Tags:** Design fundamentals
- **Difficulty:** Medium
- **Approach:** Array with modulo arithmetic

### 4. Design Circular Deque
**Problem:** Implement double-ended circular queue.
- **Operations:** `insertFront, insertLast, deleteFront, deleteLast`
- **Company Tags:** Advanced design
- **Difficulty:** Medium
- **Approach:** Circular array or doubly linked list

## Pattern: Sliding Window with Deque

### 5. Sliding Window Maximum
**Problem:** Maximum in each sliding window of size k.
- **Input:** `nums = [1,3,-1,-3,5,3,6,7], k = 3`
- **Output:** `[3,3,5,5,6,7]`
- **Company Tags:** **Classic deque problem**
- **Difficulty:** Hard
- **Approach:** Monotonic decreasing deque

### 6. Sliding Window Median
**Problem:** Find median in each sliding window.
- **Input:** `nums = [1,3,-1,-3,5,3,6,7], k = 3`
- **Output:** `[1,-1,-1,3,5,6]`
- **Company Tags:** Two heaps
- **Difficulty:** Hard
- **Approach:** Max heap + min heap

### 7. Max Sum of Rectangle No Larger Than K
**Problem:** Max sum of rectangle with sum ≤ k.
- **Input:** Matrix and k
- **Output:** Maximum sum
- **Company Tags:** Advanced
- **Difficulty:** Hard
- **Approach:** Prefix sum + sliding window

## Pattern: BFS Problems

### 8. Binary Tree Level Order Traversal
**Problem:** Return level-order traversal of binary tree.
- **Input:** Binary tree
- **Output:** `[[3],[9,20],[15,7]]`
- **Company Tags:** **BFS basics**
- **Difficulty:** Medium
- **Approach:** Queue for BFS

### 9. Binary Tree Zigzag Level Order
**Problem:** Level-order in zigzag pattern.
- **Input:** Binary tree
- **Output:** Alternating left-right levels
- **Company Tags:** BFS variant
- **Difficulty:** Medium
- **Approach:** Queue + flag or deque

### 10. Rotting Oranges
**Problem:** Minimum time for all oranges to rot.
- **Input:** Grid with 0 (empty), 1 (fresh), 2 (rotten)
- **Output:** Minimum minutes or -1
- **Company Tags:** **Popular multi-source BFS**
- **Difficulty:** Medium
- **Approach:** Multi-source BFS with queue

### 11. Walls and Gates
**Problem:** Fill each room with distance to nearest gate.
- **Input:** Matrix with 0 (gate), -1 (wall), INF (room)
- **Output:** Distance matrix
- **Company Tags:** Multi-source BFS
- **Difficulty:** Medium
- **Approach:** Start BFS from all gates simultaneously

### 12. Number of Islands
**Problem:** Count number of islands in binary matrix.
- **Input:** Grid with '1' (land) and '0' (water)
- **Output:** Number of islands
- **Company Tags:** **Classic BFS/DFS**
- **Difficulty:** Medium
- **Approach:** BFS/DFS from each unvisited land cell

### 13. Shortest Path in Binary Matrix
**Problem:** Shortest clear path from top-left to bottom-right.
- **Input:** Binary matrix (0 = clear, 1 = blocked)
- **Output:** Path length or -1
- **Company Tags:** BFS pathfinding
- **Difficulty:** Medium
- **Approach:** BFS with 8-directional movement

### 14. Open the Lock
**Problem:** Minimum turns to unlock combination lock.
- **Input:** `target = "0202", deadends = ["0201","0101"]`
- **Output:** Minimum turns or -1
- **Company Tags:** State space BFS
- **Difficulty:** Medium
- **Approach:** BFS treating each state as node

### 15. Perfect Squares
**Problem:** Minimum perfect squares that sum to n.
- **Input:** `n = 12`
- **Output:** `3` (4 + 4 + 4)
- **Company Tags:** BFS or DP
- **Difficulty:** Medium
- **Approach:** BFS on numbers or DP

### 16. Word Ladder
**Problem:** Shortest transformation sequence.
- **Input:** `beginWord = "hit", endWord = "cog", wordList`
- **Output:** Length of shortest sequence
- **Company Tags:** **Classic BFS**
- **Difficulty:** Hard
- **Approach:** BFS with word transformations

## Pattern: Stream Processing

### 17. Moving Average from Data Stream
**Problem:** Calculate moving average with fixed window.
- **Operations:** `MovingAverage(size), next(val)`
- **Company Tags:** Design problem
- **Difficulty:** Easy
- **Approach:** Queue for window, running sum

### 18. Number of Recent Calls
**Problem:** Count requests in last 3000ms.
- **Operations:** `ping(t)` returns count in [t-3000, t]
- **Company Tags:** Time-based queue
- **Difficulty:** Easy
- **Approach:** Queue, remove old timestamps

### 19. Design Hit Counter
**Problem:** Count hits in last 300 seconds.
- **Operations:** `hit(timestamp), getHits(timestamp)`
- **Company Tags:** Design + queue
- **Difficulty:** Medium
- **Approach:** Queue with timestamps or array

### 20. First Unique Character in Stream
**Problem:** Find first non-repeating character at each point.
- **Input:** Stream of characters
- **Output:** First unique at each step
- **Company Tags:** Queue + hash map
- **Difficulty:** Medium
- **Approach:** Queue + frequency map

## Pattern: Task Scheduling

### 21. Task Scheduler
**Problem:** Minimum intervals to execute tasks with cooldown.
- **Input:** `tasks = ["A","A","A","B","B","B"], n = 2`
- **Output:** `8`
- **Company Tags:** **Popular scheduling**
- **Difficulty:** Medium
- **Approach:** Greedy with priority queue

### 22. Reorganize String
**Problem:** Rearrange so no two same characters are adjacent.
- **Input:** `"aab"`
- **Output:** `"aba"`
- **Company Tags:** Priority queue
- **Difficulty:** Medium
- **Approach:** Max heap, pick most frequent

### 23. Rearrange String k Distance Apart
**Problem:** Rearrange so same chars are at least k apart.
- **Input:** `s = "aabbcc", k = 3`
- **Output:** `"abcabc"`
- **Company Tags:** Queue + priority queue
- **Difficulty:** Hard
- **Approach:** Max heap + cooldown queue

## Pattern: Special Queue Operations

### 24. Jump Game VI
**Problem:** Maximum score jumping with constraint.
- **Input:** `nums = [1,-1,-2,4,-7,3], k = 2`
- **Output:** `7`
- **Company Tags:** DP + deque
- **Difficulty:** Medium
- **Approach:** DP with monotonic deque for max

### 25. Constrained Subsequence Sum
**Problem:** Maximum sum of subsequence with constraint.
- **Input:** `nums = [10,2,-10,5,20], k = 2`
- **Output:** `37`
- **Company Tags:** DP + deque
- **Difficulty:** Hard
- **Approach:** DP with sliding window max

---

## Interview Preparation Checklist
- [ ] Can implement queue from scratch (array and linked list)
- [ ] Understand circular queue implementation
- [ ] Master BFS template for trees and graphs
- [ ] Know sliding window maximum (monotonic deque)
- [ ] Can design queue using stacks (and vice versa)
- [ ] Familiar with multi-source BFS
- [ ] Practice stream processing problems
- [ ] Understand task scheduling with priority queue

## Key Patterns to Master
1. **BFS Traversal** - Level-order, shortest path
2. **Monotonic Deque** - Sliding window max/min
3. **Multi-source BFS** - Rotting oranges, walls and gates
4. **Stream Processing** - Moving average, recent calls
5. **Task Scheduling** - Priority queue with cooldown
6. **Design Problems** - Queue using stacks, circular queue

## BFS Template
```python
from collections import deque

def bfs(start):
    queue = deque([start])
    visited = {start}
    
    while queue:
        node = queue.popleft()
        # Process node
        
        for neighbor in get_neighbors(node):
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
```

## Sliding Window Maximum Template
```python
from collections import deque

def sliding_window_max(nums, k):
    dq = deque()  # stores indices
    result = []
    
    for i in range(len(nums)):
        # Remove elements outside window
        while dq and dq[0] < i - k + 1:
            dq.popleft()
        
        # Remove smaller elements
        while dq and nums[dq[-1]] < nums[i]:
            dq.pop()
        
        dq.append(i)
        
        if i >= k - 1:
            result.append(nums[dq[0]])
    
    return result
```

## Common Techniques
1. **Deque for Sliding Window** - O(n) for max/min in windows
2. **Queue for BFS** - Level-order traversal, shortest path
3. **Priority Queue** - Task scheduling, k closest elements
4. **Two Stacks for Queue** - Amortized O(1) operations
5. **Multi-source BFS** - Start from multiple points

## Time Complexity Patterns
- **Enqueue/Dequeue:** O(1)
- **BFS:** O(V + E) for graphs, O(n) for trees
- **Sliding window with deque:** O(n)
- **Priority queue operations:** O(log n)
- **Multi-source BFS:** O(rows × cols) for grids

## Edge Cases to Consider
1. Empty queue operations
2. Single element in queue
3. Window size larger than array
4. All elements same (monotonic deque)
5. No path exists (BFS returns -1)
6. Circular queue full/empty conditions

## Common Follow-ups
- "Can you do BFS iteratively?" → Yes, using queue
- "What about DFS?" → Use stack instead of queue
- "Optimize space?" → Sometimes can modify input
- "Handle concurrent access?" → Add synchronization
- "What if k > array length?" → Handle edge case
