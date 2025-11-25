# HashMap / HashSet - Practice Questions

## Basic Understanding Questions

### 1. Implement HashMap from Scratch
**Problem:** Implement basic hash map with put, get, remove operations.
- **Operations:** `put(key, value), get(key), remove(key)`
- **Concepts:** Hash function, collision handling (chaining or open addressing)

### 2. Implement HashSet from Scratch
**Problem:** Implement hash set with add, remove, contains operations.
- **Operations:** `add(value), remove(value), contains(value)`
- **Concepts:** Similar to HashMap but only keys

### 3. Check if Element Exists
**Problem:** Check if element exists in array using HashSet.
- **Input:** `arr = [1, 2, 3, 4, 5], target = 3`
- **Output:** `true`
- **Concepts:** O(1) lookup

### 4. Remove Duplicates from Array
**Problem:** Remove duplicates using HashSet.
- **Input:** `[1, 2, 2, 3, 4, 4, 5]`
- **Output:** `[1, 2, 3, 4, 5]`
- **Concepts:** Set for uniqueness

### 5. Count Frequency of Elements
**Problem:** Count frequency of each element in array.
- **Input:** `[1, 2, 2, 3, 3, 3, 4]`
- **Output:** `{1:1, 2:2, 3:3, 4:1}`
- **Concepts:** HashMap for counting

### 6. Find First Repeating Element
**Problem:** Find first element that repeats.
- **Input:** `[10, 5, 3, 4, 3, 5, 6]`
- **Output:** `5`
- **Concepts:** Track first occurrence index

### 7. Find First Non-Repeating Element
**Problem:** Find first element that appears only once.
- **Input:** `[9, 4, 9, 6, 7, 4]`
- **Output:** `6`
- **Concepts:** Frequency map + order preservation

### 8. Union of Two Arrays
**Problem:** Find union of two arrays.
- **Input:** `arr1 = [1, 2, 3], arr2 = [2, 3, 4]`
- **Output:** `[1, 2, 3, 4]`
- **Concepts:** HashSet for union

### 9. Intersection of Two Arrays
**Problem:** Find intersection of two arrays.
- **Input:** `arr1 = [1, 2, 2, 1], arr2 = [2, 2]`
- **Output:** `[2]`
- **Concepts:** HashSet for intersection

### 10. Check Subarray with Sum Zero
**Problem:** Check if subarray with sum 0 exists.
- **Input:** `[4, 2, -3, 1, 6]`
- **Output:** `true` (subarray: [2, -3, 1])
- **Concepts:** Prefix sum + HashMap

## Intermediate Questions

### 11. Two Sum
**Problem:** Find two numbers that add up to target.
- **Input:** `nums = [2, 7, 11, 15], target = 9`
- **Output:** `[0, 1]`
- **Concepts:** HashMap for complement

### 12. Three Sum
**Problem:** Find all unique triplets with sum = 0.
- **Input:** `[-1, 0, 1, 2, -1, -4]`
- **Output:** `[[-1, -1, 2], [-1, 0, 1]]`
- **Concepts:** HashMap or two pointer after sort

### 13. Four Sum
**Problem:** Find all quadruplets with sum = target.
- **Input:** `nums = [1, 0, -1, 0, -2, 2], target = 0`
- **Output:** All unique quadruplets
- **Concepts:** HashMap or nested loops

### 14. Subarray Sum Equals K
**Problem:** Count subarrays with sum = k.
- **Input:** `nums = [1, 1, 1], k = 2`
- **Output:** `2`
- **Concepts:** Prefix sum + HashMap

### 15. Longest Consecutive Sequence
**Problem:** Find length of longest consecutive sequence.
- **Input:** `[100, 4, 200, 1, 3, 2]`
- **Output:** `4` (sequence: [1, 2, 3, 4])
- **Concepts:** HashSet for O(n) solution

### 16. Group Anagrams
**Problem:** Group strings that are anagrams.
- **Input:** `["eat","tea","tan","ate","nat","bat"]`
- **Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`
- **Concepts:** HashMap with sorted string as key

### 17. Valid Anagram
**Problem:** Check if two strings are anagrams.
- **Input:** `s = "anagram", t = "nagaram"`
- **Output:** `true`
- **Concepts:** Frequency HashMap

### 18. Isomorphic Strings
**Problem:** Check if two strings are isomorphic.
- **Input:** `s = "egg", t = "add"`
- **Output:** `true`
- **Concepts:** Two HashMaps for bijection

### 19. Word Pattern
**Problem:** Check if string follows pattern.
- **Input:** `pattern = "abba", s = "dog cat cat dog"`
- **Output:** `true`
- **Concepts:** Two HashMaps for mapping

### 20. Contains Duplicate
**Problem:** Check if array has duplicates.
- **Input:** `[1, 2, 3, 1]`
- **Output:** `true`
- **Concepts:** HashSet for O(n)

### 21. Contains Duplicate II
**Problem:** Check if duplicate exists within k distance.
- **Input:** `nums = [1,2,3,1], k = 3`
- **Output:** `true`
- **Concepts:** HashMap with indices

### 22. Contains Duplicate III
**Problem:** Check if duplicate exists with value and index constraints.
- **Input:** Complex constraints
- **Output:** Boolean
- **Concepts:** HashMap/TreeMap or buckets

### 23. Longest Substring Without Repeating Characters
**Problem:** Find length of longest substring without duplicates.
- **Input:** `"abcabcbb"`
- **Output:** `3`
- **Concepts:** Sliding window + HashSet/HashMap

### 24. Minimum Window Substring
**Problem:** Find minimum window containing all characters of target.
- **Input:** `s = "ADOBECODEBANC", t = "ABC"`
- **Output:** `"BANC"`
- **Concepts:** Sliding window + HashMap

### 25. Find All Anagrams in String
**Problem:** Find all anagram start indices of pattern in string.
- **Input:** `s = "cbaebabacd", p = "abc"`
- **Output:** `[0, 6]`
- **Concepts:** Sliding window + frequency map

## Advanced Questions

### 26. LRU Cache
**Problem:** Implement LRU cache with O(1) operations.
- **Operations:** `get(key), put(key, value)`
- **Concepts:** HashMap + Doubly Linked List

### 27. LFU Cache
**Problem:** Implement LFU cache with O(1) operations.
- **Operations:** `get(key), put(key, value)`
- **Concepts:** Multiple HashMaps for frequency tracking

### 28. Design Twitter
**Problem:** Design simplified Twitter with follow, post, get feed.
- **Operations:** `postTweet, getNewsFeed, follow, unfollow`
- **Concepts:** HashMap + priority queue/heap

### 29. Logger Rate Limiter
**Problem:** Rate limit messages (same message within 10 seconds ignored).
- **Operations:** `shouldPrintMessage(timestamp, message)`
- **Concepts:** HashMap with timestamps

### 30. Random Pick with Weight
**Problem:** Pick index with probability proportional to weight.
- **Operations:** `pickIndex()`
- **Concepts:** Prefix sum + HashMap + binary search

### 31. Insert Delete GetRandom O(1)
**Problem:** Design data structure with O(1) insert, delete, getRandom.
- **Operations:** `insert(val), remove(val), getRandom()`
- **Concepts:** HashMap + ArrayList

### 32. Copy List with Random Pointer
**Problem:** Deep copy linked list with random pointers.
- **Input:** List with next and random pointers
- **Output:** Deep copy
- **Concepts:** HashMap (old node → new node)

### 33. Clone Graph
**Problem:** Deep copy undirected graph.
- **Input:** Graph node
- **Output:** Cloned graph
- **Concepts:** HashMap + BFS/DFS

### 34. Longest Substring with At Most K Distinct Characters
**Problem:** Find longest substring with at most k distinct chars.
- **Input:** `s = "eceba", k = 2`
- **Output:** `3` ("ece")
- **Concepts:** Sliding window + HashMap

### 35. Subarrays with K Different Integers
**Problem:** Count subarrays with exactly k distinct integers.
- **Input:** `nums = [1,2,1,2,3], k = 2`
- **Output:** `7`
- **Concepts:** Sliding window + HashMap

---

## Hash Function Basics
```python
# Simple hash function example
def hash_function(key, size):
    return hash(key) % size

# Collision handling with chaining
class HashMap:
    def __init__(self):
        self.size = 100
        self.buckets = [[] for _ in range(self.size)]
    
    def put(self, key, value):
        index = hash(key) % self.size
        # Update if key exists, else append
        for i, (k, v) in enumerate(self.buckets[index]):
            if k == key:
                self.buckets[index][i] = (key, value)
                return
        self.buckets[index].append((key, value))
    
    def get(self, key):
        index = hash(key) % self.size
        for k, v in self.buckets[index]:
            if k == key:
                return v
        return None
```

## Tips for Practice
1. **O(1) operations** - HashMap/HashSet provide constant time lookup
2. **Frequency counting** - Use HashMap to count occurrences
3. **Complement search** - Two Sum pattern with HashMap
4. **Prefix sum** - Use with HashMap for subarray problems
5. **Sliding window** - HashMap for tracking characters/elements
6. **Bijection mapping** - Two HashMaps for isomorphic problems
7. **Collision handling** - Understand chaining vs open addressing
8. **Load factor** - Know when to resize (typically >0.75)

## Key Patterns
1. **Two Sum Pattern** - HashMap for complement lookup
2. **Frequency Counter** - Count occurrences efficiently
3. **Anagram Grouping** - Sorted string or char count as key
4. **Prefix Sum + HashMap** - Subarray sum problems
5. **Sliding Window + HashMap** - Substring problems
6. **Bijection Mapping** - Isomorphic, word pattern
7. **Cache Design** - HashMap + additional data structure

## Common Use Cases
- **Caching** - LRU/LFU cache
- **Frequency analysis** - Most common element
- **Deduplication** - Remove duplicates
- **Fast lookup** - O(1) search
- **Grouping** - Group by key property
- **Tracking state** - Visited nodes in graph

## Time Complexity
- **Insert:** O(1) average, O(n) worst case
- **Delete:** O(1) average, O(n) worst case
- **Search:** O(1) average, O(n) worst case
- **Space:** O(n)

## HashMap vs HashSet vs TreeMap

| Feature | HashMap | HashSet | TreeMap |
|---------|---------|---------|---------|
| **Stores** | Key-Value | Keys only | Key-Value (sorted) |
| **Order** | No order | No order | Sorted by key |
| **Null keys** | One null | One null | No null (Java) |
| **Time** | O(1) avg | O(1) avg | O(log n) |

## Collision Resolution
1. **Chaining** - Each bucket is a linked list
2. **Open Addressing** - Find next available slot
   - Linear probing
   - Quadratic probing
   - Double hashing

## Edge Cases
1. Empty map/set
2. Single element
3. All elements same (many collisions)
4. Hash function producing same hash
5. Null keys/values (language-dependent)
6. Resizing during iteration
