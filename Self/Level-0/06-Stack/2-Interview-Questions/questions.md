# Stack - Interview Questions for Small Startups

## Pattern: Parentheses & Brackets

### 1. Valid Parentheses
**Problem:** Check if string with (), {}, [] is valid.
- **Input:** `"()[]{}"`
- **Output:** `true`
- **Company Tags:** **Most asked stack question**
- **Difficulty:** Easy
- **Approach:** Stack to match opening with closing

### 2. Longest Valid Parentheses
**Problem:** Find length of longest valid parentheses substring.
- **Input:** `"(()"`
- **Output:** `2`
- **Company Tags:** Advanced matching
- **Difficulty:** Hard
- **Approach:** Stack with indices or DP

### 3. Minimum Add to Make Valid Parentheses
**Problem:** Minimum insertions to make parentheses valid.
- **Input:** `"())"`
- **Output:** `1`
- **Company Tags:** Counting approach
- **Difficulty:** Medium
- **Approach:** Track unmatched opening/closing

### 4. Remove Invalid Parentheses
**Problem:** Remove minimum parentheses to make valid.
- **Input:** `"()())()"`
- **Output:** `["()()()", "(())()"]`
- **Company Tags:** BFS or backtracking
- **Difficulty:** Hard
- **Approach:** BFS to find all valid strings

## Pattern: Monotonic Stack

### 5. Next Greater Element I
**Problem:** Find next greater element for each element.
- **Input:** `nums1 = [4,1,2], nums2 = [1,3,4,2]`
- **Output:** `[-1,3,-1]`
- **Company Tags:** **Classic monotonic stack**
- **Difficulty:** Easy
- **Approach:** Decreasing monotonic stack + hash map

### 6. Next Greater Element II (Circular)
**Problem:** Next greater in circular array.
- **Input:** `[1,2,1]`
- **Output:** `[2,-1,2]`
- **Company Tags:** Circular array variant
- **Difficulty:** Medium
- **Approach:** Process array twice with stack

### 7. Daily Temperatures
**Problem:** Days until warmer temperature.
- **Input:** `[73,74,75,71,69,72,76,73]`
- **Output:** `[1,1,4,2,1,1,0,0]`
- **Company Tags:** **Very popular**
- **Difficulty:** Medium
- **Approach:** Monotonic stack with indices

### 8. Online Stock Span
**Problem:** Calculate span for each price (design class).
- **Input:** Stream of prices
- **Output:** Span for each day
- **Company Tags:** Design problem
- **Difficulty:** Medium
- **Approach:** Stack with (price, span) pairs

### 9. Largest Rectangle in Histogram
**Problem:** Find largest rectangular area in histogram.
- **Input:** `heights = [2,1,5,6,2,3]`
- **Output:** `10`
- **Company Tags:** **Classic hard problem**
- **Difficulty:** Hard
- **Approach:** Stack for finding boundaries

### 10. Maximal Rectangle
**Problem:** Find largest rectangle in binary matrix.
- **Input:** Matrix with 0s and 1s
- **Output:** Max rectangle area
- **Company Tags:** Advanced
- **Difficulty:** Hard
- **Approach:** Histogram for each row

## Pattern: Expression Evaluation

### 11. Evaluate Reverse Polish Notation
**Problem:** Evaluate postfix expression.
- **Input:** `["2","1","+","3","*"]` = (2+1)*3
- **Output:** `9`
- **Company Tags:** Stack fundamentals
- **Difficulty:** Medium
- **Approach:** Stack for operands, apply operators

### 12. Basic Calculator
**Problem:** Implement calculator with +, -, (, ).
- **Input:** `"(1+(4+5+2)-3)+(6+8)"`
- **Output:** `23`
- **Company Tags:** Expression parsing
- **Difficulty:** Hard
- **Approach:** Stack for signs and values

### 13. Basic Calculator II
**Problem:** Calculator with +, -, *, /.
- **Input:** `"3+2*2"`
- **Output:** `7`
- **Company Tags:** Precedence handling
- **Difficulty:** Medium
- **Approach:** Stack, handle * and / immediately

### 14. Basic Calculator III
**Problem:** Calculator with all operators and parentheses.
- **Input:** `"2*(5+5*2)/3+(6/2+8)"`
- **Output:** `21`
- **Company Tags:** Complete calculator
- **Difficulty:** Hard
- **Approach:** Combine techniques from I and II

## Pattern: String Manipulation

### 15. Remove All Adjacent Duplicates in String
**Problem:** Remove adjacent duplicates recursively.
- **Input:** `"abbaca"`
- **Output:** `"ca"`
- **Company Tags:** String processing
- **Difficulty:** Easy
- **Approach:** Stack, pop if top matches current

### 16. Remove K Digits
**Problem:** Remove k digits to minimize number.
- **Input:** `num = "1432219", k = 3`
- **Output:** `"1219"`
- **Company Tags:** Greedy with stack
- **Difficulty:** Medium
- **Approach:** Monotonic increasing stack

### 17. Decode String
**Problem:** Decode pattern k[encoded_string].
- **Input:** `"3[a]2[bc]"`
- **Output:** `"aaabcbc"`
- **Company Tags:** Nested encoding
- **Difficulty:** Medium
- **Approach:** Stack for counts and strings

### 18. Simplify Path
**Problem:** Simplify Unix file path.
- **Input:** `"/a/./b/../../c/"`
- **Output:** `"/c"`
- **Company Tags:** Path processing
- **Difficulty:** Medium
- **Approach:** Stack, handle ., .., and names

### 19. Asteroid Collision
**Problem:** Determine remaining asteroids after collisions.
- **Input:** `[5,10,-5]`
- **Output:** `[5,10]`
- **Concepts:** Stack for collision detection
- **Difficulty:** Medium
- **Approach:** Stack, handle positive/negative collisions

## Pattern: Design Problems

### 20. Min Stack
**Problem:** Design stack with getMin() in O(1).
- **Operations:** `push, pop, top, getMin`
- **Company Tags:** **Very common design**
- **Difficulty:** Easy
- **Approach:** Auxiliary min stack or encode min

### 21. Max Stack
**Problem:** Stack with O(log n) getMax, popMax.
- **Operations:** `push, pop, top, peekMax, popMax`
- **Company Tags:** Advanced design
- **Difficulty:** Easy
- **Approach:** Stack + TreeMap/heap

### 22. Implement Queue using Stacks
**Problem:** Implement queue with two stacks.
- **Operations:** `push, pop, peek, empty`
- **Company Tags:** Data structure conversion
- **Difficulty:** Easy
- **Approach:** One for enqueue, one for dequeue

### 23. Implement Stack using Queues
**Problem:** Implement stack using queue(s).
- **Operations:** `push, pop, top, empty`
- **Company Tags:** Reverse conversion
- **Difficulty:** Easy
- **Approach:** One or two queues, rotate on push/pop

## Pattern: Advanced Applications

### 24. Trapping Rain Water
**Problem:** Calculate trapped rainwater.
- **Input:** `[0,1,0,2,1,0,1,3,2,1,2,1]`
- **Output:** `6`
- **Company Tags:** **Classic problem**
- **Difficulty:** Hard
- **Approach:** Stack or two pointers

### 25. Score of Parentheses
**Problem:** Calculate score: () = 1, (A) = 2*A, AB = A+B.
- **Input:** `"(()(()))"`
- **Output:** `6`
- **Company Tags:** Recursive scoring
- **Difficulty:** Medium
- **Approach:** Stack with scores or recursion

---

## Interview Preparation Checklist
- [ ] Can implement stack from scratch (array and linked list)
- [ ] Master valid parentheses and variants
- [ ] Understand monotonic stack pattern
- [ ] Know expression evaluation techniques
- [ ] Can design Min Stack in O(1)
- [ ] Familiar with stack-based string manipulation
- [ ] Practice histogram and rectangle problems
- [ ] Understand when to use stack vs other DS

## Key Patterns to Master
1. **Matching Pairs** - Parentheses validation
2. **Monotonic Stack** - Next greater/smaller element
3. **Expression Evaluation** - Calculator problems
4. **String Processing** - Remove duplicates, decode
5. **Design Problems** - Min stack, queue using stacks
6. **Histogram/Rectangle** - Area calculations

## Monotonic Stack Template
```python
def next_greater_elements(nums):
    result = [-1] * len(nums)
    stack = []  # stores indices
    
    for i in range(len(nums)):
        while stack and nums[stack[-1]] < nums[i]:
            result[stack.pop()] = nums[i]
        stack.append(i)
    
    return result
```

## Valid Parentheses Template
```python
def is_valid(s):
    stack = []
    mapping = {')': '(', '}': '{', ']': '['}
    
    for char in s:
        if char in mapping:
            if not stack or stack[-1] != mapping[char]:
                return False
            stack.pop()
        else:
            stack.append(char)
    
    return not stack
```

## Common Techniques
1. **Auxiliary Stack** - For tracking min/max
2. **Stack with Indices** - For tracking positions
3. **Monotonic Stack** - Maintain order invariant
4. **Stack + Hash Map** - Map results to original positions
5. **Two Stacks** - Implement other data structures

## Time Complexity Patterns
- **Push/Pop/Peek:** O(1)
- **Monotonic stack problems:** O(n) total
- **Expression evaluation:** O(n)
- **Histogram problems:** O(n) with stack
- **Search in stack:** O(n)

## Edge Cases to Consider
1. Empty stack operations
2. Single element
3. All increasing/decreasing (monotonic stack)
4. Nested structures (parentheses, expressions)
5. Stack overflow/underflow
6. Invalid input (unmatched brackets)

## Common Follow-ups
- "Can you do it in one pass?" → Usually yes with stack
- "What's the space complexity?" → O(n) for stack
- "Without using built-in stack?" → Implement with array/list
- "Handle invalid input?" → Check before operations
- "Optimize space?" → Sometimes can use input array itself
