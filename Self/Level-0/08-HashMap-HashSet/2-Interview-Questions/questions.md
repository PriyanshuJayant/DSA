# HashMap / HashSet - Interview Questions for Small Startups

## Pattern: Two Sum Variations

### 1. Two Sum
**Problem:** Find two numbers that add up to target.
- **Input:** `nums = [2, 7, 11, 15], target = 9`
- **Output:** `[0, 1]`
- **Company Tags:** **Most asked HashMap question**
- **Difficulty:** Easy
- **Approach:** HashMap to store complement, O(n)

### 2. Two Sum II (Sorted Array)
**Problem:** Find two numbers in sorted array that sum to target.
- **Input:** `numbers = [2,7,11,15], target = 9`
- **Output:** `[1, 2]` (1-indexed)
- **Company Tags:** Two pointer alternative
- **Difficulty:** Easy
- **Approach:** Two pointers O(n) or HashMap O(n)

### 3. Two Sum III (Design Data Structure)
**Problem:** Design data structure for add and find sum operations.
- **Operations:** `add(number), find(target)`
- **Company Tags:** Design problem
- **Difficulty:** Easy
- **Approach:** HashMap to track frequencies

### 4. 3Sum
**Problem:** Find all unique triplets that sum to zero.
- **Input:** `[-1, 0, 1, 2, -1, -4]`
- **Output:** `[[-1,-1,2], [-1,0,1]]`
- **Company Tags:** **Very popular**
- **Difficulty:** Medium
- **Approach:** Sort + two pointer or HashMap

### 5. 4Sum
**Problem:** Find all unique quadruplets that sum to target.
- **Input:** `nums = [1,0,-1,0,-2,2], target = 0`
- **Output:** All unique quadruplets
- **Company Tags:** Extension of 3Sum
- **Difficulty:** Medium
- **Approach:** Two nested loops + two pointer

## Pattern: Frequency Counter

### 6. Valid Anagram
**Problem:** Check if two strings are anagrams.
- **Input:** `s = "anagram", t = "nagaram"`
- **Output:** `true`
- **Company Tags:** **Classic frequency problem**
- **Difficulty:** Easy
- **Approach:** HashMap or array[26] for char frequency

### 7. Group Anagrams
**Problem:** Group strings that are anagrams together.
- **Input:** `["eat","tea","tan","ate","nat","bat"]`
- **Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`
- **Company Tags:** **Very common**
- **Difficulty:** Medium
- **Approach:** HashMap with sorted string or char count as key

### 8. Top K Frequent Elements
**Problem:** Return k most frequent elements.
- **Input:** `nums = [1,1,1,2,2,3], k = 2`
- **Output:** `[1, 2]`
- **Company Tags:** Heap or bucket sort
- **Difficulty:** Medium
- **Approach:** HashMap + min heap or bucket sort O(n)

### 9. Sort Characters By Frequency
**Problem:** Sort characters by frequency (descending).
- **Input:** `"tree"`
- **Output:** `"eert"` or `"eetr"`
- **Company Tags:** Frequency sorting
- **Difficulty:** Medium
- **Approach:** HashMap + sorting or priority queue

### 10. First Unique Character in String
**Problem:** Find index of first non-repeating character.
- **Input:** `"leetcode"`
- **Output:** `0`
- **Company Tags:** Simple frequency
- **Difficulty:** Easy
- **Approach:** HashMap, two passes

## Pattern: Subarray Sum

### 11. Subarray Sum Equals K
**Problem:** Count subarrays with sum equal to k.
- **Input:** `nums = [1, 1, 1], k = 2`
- **Output:** `2`
- **Company Tags:** **Classic prefix sum**
- **Difficulty:** Medium
- **Approach:** Prefix sum + HashMap

### 12. Continuous Subarray Sum
**Problem:** Check if subarray sum is multiple of k.
- **Input:** `nums = [23,2,4,6,7], k = 6`
- **Output:** `true`
- **Company Tags:** Modulo + prefix sum
- **Difficulty:** Medium
- **Approach:** HashMap with (prefix_sum % k, index)

### 13. Subarray Sum Divisible by K
**Problem:** Count subarrays with sum divisible by k.
- **Input:** `nums = [4,5,0,-2,-3,1], k = 5`
- **Output:** `7`
- **Company Tags:** Prefix sum + modulo
- **Difficulty:** Medium
- **Approach:** HashMap for prefix_sum % k

### 14. Maximum Size Subarray Sum Equals K
**Problem:** Find length of longest subarray with sum = k.
- **Input:** `nums = [1, -1, 5, -2, 3], k = 3`
- **Output:** `4`
- **Company Tags:** Prefix sum variant
- **Difficulty:** Medium
- **Approach:** HashMap storing first occurrence of prefix sum

## Pattern: Longest Sequence

### 15. Longest Consecutive Sequence
**Problem:** Find length of longest consecutive sequence.
- **Input:** `[100, 4, 200, 1, 3, 2]`
- **Output:** `4` ([1,2,3,4])
- **Company Tags:** **Important O(n) solution**
- **Difficulty:** Medium
- **Approach:** HashSet, check sequence start, expand

### 16. Longest Substring Without Repeating Characters
**Problem:** Length of longest substring without duplicates.
- **Input:** `"abcabcbb"`
- **Output:** `3`
- **Company Tags:** **Very popular**
- **Difficulty:** Medium
- **Approach:** Sliding window + HashMap/HashSet

### 17. Longest Substring with At Most Two Distinct Characters
**Problem:** Longest substring with ≤ 2 distinct characters.
- **Input:** `"eceba"`
- **Output:** `3` ("ece")
- **Company Tags:** Sliding window
- **Difficulty:** Medium
- **Approach:** Sliding window + HashMap

### 18. Longest Substring with At Most K Distinct Characters
**Problem:** Longest substring with ≤ k distinct characters.
- **Input:** `s = "eceba", k = 2`
- **Output:** `3`
- **Company Tags:** Generalized version
- **Difficulty:** Medium
- **Approach:** Sliding window + HashMap

## Pattern: Mapping & Bijection

### 19. Isomorphic Strings
**Problem:** Check if two strings are isomorphic.
- **Input:** `s = "egg", t = "add"`
- **Output:** `true`
- **Company Tags:** Bijection mapping
- **Difficulty:** Easy
- **Approach:** Two HashMaps for bidirectional mapping

### 20. Word Pattern
**Problem:** Check if string follows pattern.
- **Input:** `pattern = "abba", s = "dog cat cat dog"`
- **Output:** `true`
- **Company Tags:** Similar to isomorphic
- **Difficulty:** Easy
- **Approach:** Two HashMaps

### 21. Ransom Note
**Problem:** Check if ransom note can be constructed from magazine.
- **Input:** `ransomNote = "aa", magazine = "aab"`
- **Output:** `true`
- **Company Tags:** Frequency check
- **Difficulty:** Easy
- **Approach:** HashMap or array[26]

## Pattern: Sliding Window with HashMap

### 22. Minimum Window Substring
**Problem:** Find minimum window containing all characters of target.
- **Input:** `s = "ADOBECODEBANC", t = "ABC"`
- **Output:** `"BANC"`
- **Company Tags:** **Hard but popular**
- **Difficulty:** Hard
- **Approach:** Sliding window + two HashMaps

### 23. Find All Anagrams in String
**Problem:** Find all anagram start indices.
- **Input:** `s = "cbaebabacd", p = "abc"`
- **Output:** `[0, 6]`
- **Company Tags:** Sliding window + frequency
- **Difficulty:** Medium
- **Approach:** Fixed sliding window + HashMap

### 24. Permutation in String
**Problem:** Check if s2 contains permutation of s1.
- **Input:** `s1 = "ab", s2 = "eidbaooo"`
- **Output:** `true`
- **Company Tags:** Similar to anagrams
- **Difficulty:** Medium
- **Approach:** Sliding window + frequency matching

## Pattern: Design Problems

### 25. LRU Cache
**Problem:** Implement LRU cache with O(1) get and put.
- **Operations:** `get(key), put(key, value)`
- **Company Tags:** **Most asked design question**
- **Difficulty:** Medium
- **Approach:** HashMap + Doubly Linked List

### 26. Design HashMap
**Problem:** Implement HashMap without built-in libraries.
- **Operations:** `put, get, remove`
- **Company Tags:** Fundamental design
- **Difficulty:** Easy
- **Approach:** Array of buckets with chaining

### 27. Design HashSet
**Problem:** Implement HashSet without built-in libraries.
- **Operations:** `add, remove, contains`
- **Company Tags:** Similar to HashMap
- **Difficulty:** Easy
- **Approach:** Array of buckets or bit vector

### 28. Insert Delete GetRandom O(1)
**Problem:** Data structure with O(1) insert, delete, random.
- **Operations:** `insert, remove, getRandom`
- **Company Tags:** **Clever design**
- **Difficulty:** Medium
- **Approach:** HashMap + ArrayList

### 29. Logger Rate Limiter
**Problem:** Rate limit messages (within 10 seconds).
- **Operations:** `shouldPrintMessage(timestamp, message)`
- **Company Tags:** Design with HashMap
- **Difficulty:** Easy
- **Approach:** HashMap with (message, last_timestamp)

## Pattern: Duplicate Detection

### 30. Contains Duplicate
**Problem:** Check if array has duplicates.
- **Input:** `[1, 2, 3, 1]`
- **Output:** `true`
- **Company Tags:** Basic HashSet
- **Difficulty:** Easy
- **Approach:** HashSet for O(n)

### 31. Contains Duplicate II
**Problem:** Check if duplicate within k distance exists.
- **Input:** `nums = [1,2,3,1], k = 3`
- **Output:** `true`
- **Company Tags:** Window constraint
- **Difficulty:** Easy
- **Approach:** HashMap with indices or sliding window set

### 32. Find All Duplicates in Array
**Problem:** Find all duplicates (values in range [1,n]).
- **Input:** `[4,3,2,7,8,2,3,1]`
- **Output:** `[2, 3]`
- **Company Tags:** Index marking or HashMap
- **Difficulty:** Medium
- **Approach:** HashMap or use array indices as markers

---

## Interview Preparation Checklist
- [ ] Master Two Sum pattern with HashMap
- [ ] Know frequency counting techniques
- [ ] Understand prefix sum + HashMap for subarray problems
- [ ] Practice sliding window with HashMap
- [ ] Can design LRU cache efficiently
- [ ] Know bijection mapping (isomorphic, word pattern)
- [ ] Understand longest sequence problems
- [ ] Handle collision in custom HashMap implementation

## Key Patterns to Master
1. **Two Sum** - Complement lookup with HashMap
2. **Frequency Counter** - Character/element counting
3. **Prefix Sum + HashMap** - Subarray sum problems
4. **Sliding Window + HashMap** - Substring with constraints
5. **Bijection Mapping** - Isomorphic strings, patterns
6. **HashSet for Sequences** - Longest consecutive sequence
7. **Design with HashMap** - LRU cache, rate limiter

## Two Sum Template
```python
def two_sum(nums, target):
    seen = {}  # value -> index
    for i, num in enumerate(nums):
        complement = target - num
        if complement in seen:
            return [seen[complement], i]
        seen[num] = i
    return []
```

## Frequency Counter Template
```python
from collections import Counter

def count_frequency(arr):
    freq = Counter(arr)  # or use dict
    # Or manually:
    freq = {}
    for item in arr:
        freq[item] = freq.get(item, 0) + 1
    return freq
```

## Sliding Window with HashMap Template
```python
def longest_substring_k_distinct(s, k):
    char_count = {}
    left = 0
    max_len = 0
    
    for right in range(len(s)):
        char_count[s[right]] = char_count.get(s[right], 0) + 1
        
        while len(char_count) > k:
            char_count[s[left]] -= 1
            if char_count[s[left]] == 0:
                del char_count[s[left]]
            left += 1
        
        max_len = max(max_len, right - left + 1)
    
    return max_len
```

## Common Techniques
1. **Complement Search** - HashMap for finding pairs
2. **Frequency Map** - Count occurrences
3. **Prefix Sum** - Track cumulative sums
4. **Index Tracking** - Store indices for range queries
5. **Bijection** - Two maps for bidirectional mapping

## Time Complexity Patterns
- **Two Sum:** O(n)
- **Group Anagrams:** O(n·k log k) where k = max string length
- **Subarray Sum:** O(n) with prefix sum
- **Longest Consecutive:** O(n) with HashSet
- **LRU Cache:** O(1) get/put with HashMap + DLL

## Space Optimization Tips
1. Use array[26] instead of HashMap for lowercase letters
2. Use bit manipulation for HashSet of small integers
3. Consider in-place marking for limited range problems

## Common Follow-ups
- "Can you do it without HashMap?" → Sometimes sorting helps
- "What if memory is limited?" → Consider trade-offs
- "Handle collisions?" → Explain chaining vs open addressing
- "Thread-safe implementation?" → Add synchronization
- "Optimize for cache locality?" → Consider array-based approaches
