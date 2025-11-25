# Stack - Practice Questions

## Basic Understanding Questions

### 1. Implement Stack using Array
**Problem:** Implement stack with push, pop, peek, isEmpty operations.
- **Operations:** `push(5), push(10), pop(), peek()`
- **Output:** `pop() = 10, peek() = 5`
- **Concepts:** Array-based implementation, top pointer

### 2. Implement Stack using Linked List
**Problem:** Implement stack using linked list.
- **Operations:** Same as above
- **Concepts:** Node-based implementation, head as top

### 3. Check if Stack is Empty
**Problem:** Verify if stack has no elements.
- **Input:** Empty stack
- **Output:** `true`
- **Concepts:** Top pointer check

### 4. Get Stack Size
**Problem:** Return number of elements in stack.
- **Input:** Stack with elements [1, 2, 3]
- **Output:** `3`
- **Concepts:** Counter maintenance

### 5. Reverse a String using Stack
**Problem:** Reverse a string using stack.
- **Input:** `"hello"`
- **Output:** `"olleh"`
- **Concepts:** Push all chars, pop all

### 6. Check Balanced Parentheses
**Problem:** Check if parentheses are balanced.
- **Input:** `"()[]{}"`
- **Output:** `true`
- **Concepts:** Stack for matching pairs

### 7. Implement Two Stacks in One Array
**Problem:** Implement two stacks using single array efficiently.
- **Concepts:** One grows from left, one from right

### 8. Stack using Queue
**Problem:** Implement stack using queue(s).
- **Concepts:** One or two queues, costly push or pop

### 9. Queue using Stack
**Problem:** Implement queue using stack(s).
- **Concepts:** Two stacks, one for enqueue, one for dequeue

### 10. Get Minimum Element in Stack (O(1))
**Problem:** Design stack with getMin() in O(1).
- **Operations:** `push(5), push(3), push(7), getMin()`
- **Output:** `3`
- **Concepts:** Auxiliary min stack or encoding

## Intermediate Questions

### 11. Next Greater Element
**Problem:** Find next greater element for each element in array.
- **Input:** `[4, 5, 2, 10, 8]`
- **Output:** `[5, 10, 10, -1, -1]`
- **Concepts:** Monotonic stack (decreasing)

### 12. Next Smaller Element
**Problem:** Find next smaller element for each element.
- **Input:** `[4, 8, 5, 2, 25]`
- **Output:** `[2, 5, 2, -1, -1]`
- **Concepts:** Monotonic stack (increasing)

### 13. Previous Greater Element
**Problem:** Find previous greater element for each element.
- **Input:** `[10, 4, 2, 20, 40, 12, 30]`
- **Output:** `[-1, 10, 4, -1, -1, 40, 40]`
- **Concepts:** Stack, process left to right

### 14. Stock Span Problem
**Problem:** Find span of stock price (consecutive days with price ≤ current).
- **Input:** `[100, 80, 60, 70, 60, 75, 85]`
- **Output:** `[1, 1, 1, 2, 1, 4, 6]`
- **Concepts:** Stack with indices

### 15. Largest Rectangle in Histogram
**Problem:** Find largest rectangular area in histogram.
- **Input:** `heights = [2, 1, 5, 6, 2, 3]`
- **Output:** `10`
- **Concepts:** Stack for smaller elements, area calculation

### 16. Valid Parentheses (Multiple Types)
**Problem:** Check if string with (), {}, [] is valid.
- **Input:** `"([{}])"`
- **Output:** `true`
- **Concepts:** Stack matching opening/closing pairs

### 17. Remove Adjacent Duplicates
**Problem:** Remove all adjacent duplicate characters.
- **Input:** `"abbaca"`
- **Output:** `"ca"`
- **Concepts:** Stack, compare with top

### 18. Decode String
**Problem:** Decode string with pattern k[encoded_string].
- **Input:** `"3[a]2[bc]"`
- **Output:** `"aaabcbc"`
- **Concepts:** Stack for numbers and strings

### 19. Evaluate Postfix Expression
**Problem:** Evaluate postfix (RPN) expression.
- **Input:** `"231*+9-"` (2 + 3*1 - 9)
- **Output:** `-4`
- **Concepts:** Stack for operands

### 20. Infix to Postfix Conversion
**Problem:** Convert infix expression to postfix.
- **Input:** `"a+b*c"`
- **Output:** `"abc*+"`
- **Concepts:** Operator precedence stack

### 21. Evaluate Reverse Polish Notation
**Problem:** Evaluate RPN expression.
- **Input:** `["2", "1", "+", "3", "*"]` = (2+1)*3
- **Output:** `9`
- **Concepts:** Stack, pop operands, push result

### 22. Remove K Digits
**Problem:** Remove k digits to get smallest number.
- **Input:** `num = "1432219", k = 3`
- **Output:** `"1219"`
- **Concepts:** Monotonic increasing stack

### 23. Daily Temperatures
**Problem:** Days until warmer temperature.
- **Input:** `[73, 74, 75, 71, 69, 72, 76, 73]`
- **Output:** `[1, 1, 4, 2, 1, 1, 0, 0]`
- **Concepts:** Monotonic stack with indices

### 24. Simplify Path
**Problem:** Simplify Unix-style file path.
- **Input:** `"/a/./b/../../c/"`
- **Output:** `"/c"`
- **Concepts:** Stack, handle ., .., directory names

### 25. Asteroid Collision
**Problem:** After collisions, which asteroids remain?
- **Input:** `[5, 10, -5]`
- **Output:** `[5, 10]`
- **Concepts:** Stack, handle collisions

## Advanced Questions

### 26. Maximal Rectangle
**Problem:** Find maximal rectangle in binary matrix.
- **Input:** 2D matrix with 0s and 1s
- **Output:** Area of largest rectangle
- **Concepts:** Largest rectangle in histogram for each row

### 27. Trapping Rain Water
**Problem:** Calculate water trapped after raining.
- **Input:** `[0,1,0,2,1,0,1,3,2,1,2,1]`
- **Output:** `6`
- **Concepts:** Stack or two pointer

### 28. Basic Calculator
**Problem:** Implement basic calculator with +, -, (, ).
- **Input:** `"(1+(4+5+2)-3)+(6+8)"`
- **Output:** `23`
- **Concepts:** Stack for operands and operators

### 29. Basic Calculator II
**Problem:** Calculator with +, -, *, /.
- **Input:** `"3+2*2"`
- **Output:** `7`
- **Concepts:** Stack, handle precedence

### 30. Longest Valid Parentheses
**Problem:** Find length of longest valid parentheses substring.
- **Input:** `"(()"`
- **Output:** `2`
- **Concepts:** Stack with indices or DP

---

## Stack Implementation Patterns

### Array-based Stack
```
class Stack:
    def __init__(self):
        self.items = []
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        return self.items.pop() if self.items else None
    
    def peek(self):
        return self.items[-1] if self.items else None
    
    def is_empty(self):
        return len(self.items) == 0
```

## Tips for Practice
1. **LIFO principle** - Last In, First Out
2. **Stack operations** - All O(1): push, pop, peek
3. **Monotonic stack** - Maintain increasing/decreasing order
4. **Matching problems** - Parentheses, tags use stack
5. **Expression evaluation** - Postfix, prefix, infix
6. **Backtracking** - DFS uses implicit stack (recursion)
7. **Next greater/smaller** - Classic monotonic stack pattern

## Key Patterns
1. **Matching Pairs** - Parentheses, brackets
2. **Monotonic Stack** - Next greater/smaller elements
3. **Expression Parsing** - Postfix, infix evaluation
4. **Histogram Problems** - Largest rectangle
5. **String Manipulation** - Remove duplicates, decode
6. **Min/Max Stack** - Track extremes with auxiliary stack

## Common Use Cases
- **Function call stack** - Recursion
- **Undo operations** - Text editors
- **Browser history** - Back button
- **Expression evaluation** - Calculators
- **Syntax parsing** - Compilers
- **DFS traversal** - Graph/tree algorithms

## Time Complexity
- **Push:** O(1)
- **Pop:** O(1)
- **Peek:** O(1)
- **Search:** O(n)
- **Space:** O(n)

## Edge Cases
1. Stack overflow (capacity limit)
2. Stack underflow (pop from empty)
3. Empty stack operations
4. Single element stack
