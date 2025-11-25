# Strings - Practice Questions

## Basic Understanding Questions

### 1. Reverse a String
**Problem:** Reverse a given string.
- **Input:** `"hello"`
- **Output:** `"olleh"`
- **Concepts:** Two pointer, string manipulation

### 2. Check Palindrome
**Problem:** Check if a string is a palindrome.
- **Input:** `"racecar"`
- **Output:** `true`
- **Concepts:** Two pointer from ends

### 3. Count Vowels and Consonants
**Problem:** Count the number of vowels and consonants in a string.
- **Input:** `"hello world"`
- **Output:** `Vowels: 3, Consonants: 7`
- **Concepts:** Character checking, counting

### 4. Convert to Uppercase/Lowercase
**Problem:** Convert all characters in a string to uppercase or lowercase.
- **Input:** `"HeLLo WoRLd"`
- **Output:** `"hello world"` or `"HELLO WORLD"`
- **Concepts:** Character manipulation, ASCII values

### 5. Count Occurrences of Character
**Problem:** Count how many times a character appears in a string.
- **Input:** `s = "programming", c = 'g'`
- **Output:** `2`
- **Concepts:** Linear traversal, counting

### 6. First Non-Repeating Character
**Problem:** Find the first character that doesn't repeat.
- **Input:** `"leetcode"`
- **Output:** `'l'`
- **Concepts:** Frequency map, two passes

### 7. Remove Spaces from String
**Problem:** Remove all spaces from a string.
- **Input:** `"hello world from earth"`
- **Output:** `"helloworldfromearth"`
- **Concepts:** String building, filtering

### 8. Check if String Contains Only Digits
**Problem:** Verify if string contains only numeric characters.
- **Input:** `"12345"`
- **Output:** `true`
- **Concepts:** Character validation

### 9. String Comparison (Lexicographic)
**Problem:** Compare two strings lexicographically.
- **Input:** `s1 = "apple", s2 = "banana"`
- **Output:** `s1 < s2` (returns -1 or similar)
- **Concepts:** Character-by-character comparison

### 10. Count Words in String
**Problem:** Count the number of words in a string.
- **Input:** `"Hello world from earth"`
- **Output:** `4`
- **Concepts:** Space detection, state tracking

## Intermediate Questions

### 11. Valid Anagram
**Problem:** Check if two strings are anagrams of each other.
- **Input:** `s = "listen", t = "silent"`
- **Output:** `true`
- **Concepts:** Frequency counting, sorting

### 12. Longest Common Prefix
**Problem:** Find the longest common prefix among array of strings.
- **Input:** `["flower", "flow", "flight"]`
- **Output:** `"fl"`
- **Concepts:** Vertical/horizontal scanning

### 13. Valid Palindrome (Alphanumeric Only)
**Problem:** Check if string is palindrome considering only alphanumeric chars.
- **Input:** `"A man, a plan, a canal: Panama"`
- **Output:** `true`
- **Concepts:** Two pointer, filtering, case insensitive

### 14. Reverse Words in String
**Problem:** Reverse the order of words in a string.
- **Input:** `"the sky is blue"`
- **Output:** `"blue is sky the"`
- **Concepts:** Split, reverse, join

### 15. String to Integer (atoi)
**Problem:** Convert string to integer, handle edge cases.
- **Input:** `"  -42"`
- **Output:** `-42`
- **Concepts:** Parsing, overflow handling, whitespace

### 16. Longest Substring Without Repeating Characters
**Problem:** Find length of longest substring without duplicates.
- **Input:** `"abcabcbb"`
- **Output:** `3` (substring: `"abc"`)
- **Concepts:** Sliding window, hash set

### 17. Check Rotation
**Problem:** Check if one string is rotation of another.
- **Input:** `s1 = "waterbottle", s2 = "erbottlewat"`
- **Output:** `true`
- **Concepts:** Concatenation trick (s1+s1 contains s2)

### 18. Remove Duplicates from String
**Problem:** Remove all duplicate characters from string.
- **Input:** `"programming"`
- **Output:** `"progamin"`
- **Concepts:** Set/hash map, maintaining order

### 19. Check Subsequence
**Problem:** Check if string s is subsequence of string t.
- **Input:** `s = "abc", t = "ahbgdc"`
- **Output:** `true`
- **Concepts:** Two pointer, greedy matching

### 20. Compress String
**Problem:** Compress string using count of repeated characters.
- **Input:** `"aabcccccaaa"`
- **Output:** `"a2b1c5a3"`
- **Concepts:** Run-length encoding, counting

### 21. Reverse Only Letters
**Problem:** Reverse only alphabetic characters, keep others in place.
- **Input:** `"a-bC-dEf-ghIj"`
- **Output:** `"j-Ih-gfE-dCba"`
- **Concepts:** Two pointer, character filtering

### 22. Valid Parentheses (Balanced)
**Problem:** Check if parentheses are balanced.
- **Input:** `"()[]{}"`
- **Output:** `true`
- **Concepts:** Stack, matching pairs

### 23. Longest Palindromic Substring
**Problem:** Find the longest palindromic substring.
- **Input:** `"babad"`
- **Output:** `"bab"` or `"aba"`
- **Concepts:** Expand around center, DP

### 24. Group Anagrams
**Problem:** Group strings that are anagrams together.
- **Input:** `["eat","tea","tan","ate","nat","bat"]`
- **Output:** `[["eat","tea","ate"],["tan","nat"],["bat"]]`
- **Concepts:** Hash map with sorted string as key

### 25. Implement strStr() / Find Needle in Haystack
**Problem:** Find first occurrence of substring in string.
- **Input:** `haystack = "hello", needle = "ll"`
- **Output:** `2`
- **Concepts:** String matching, sliding window

### 26. Length of Last Word
**Problem:** Return length of last word in string.
- **Input:** `"Hello World"`
- **Output:** `5`
- **Concepts:** Reverse traversal, trimming

### 27. Add Binary Strings
**Problem:** Add two binary strings and return sum as binary.
- **Input:** `a = "11", b = "1"`
- **Output:** `"100"`
- **Concepts:** Carry addition, string building

### 28. Multiply Strings
**Problem:** Multiply two non-negative integers represented as strings.
- **Input:** `num1 = "123", num2 = "456"`
- **Output:** `"56088"`
- **Concepts:** Grade school multiplication, carry handling

### 29. Zigzag Conversion
**Problem:** Convert string to zigzag pattern on given number of rows.
- **Input:** `s = "PAYPALISHIRING", numRows = 3`
- **Output:** `"PAHNAPLSIIGYIR"`
- **Concepts:** Pattern recognition, simulation

### 30. Minimum Window Substring
**Problem:** Find minimum window in s containing all chars of t.
- **Input:** `s = "ADOBECODEBANC", t = "ABC"`
- **Output:** `"BANC"`
- **Concepts:** Sliding window, frequency map

---

## Tips for Practice
1. **String immutability** - In many languages, strings are immutable; use StringBuilder/list
2. **Two pointer** - Very common for palindrome and reversal problems
3. **Sliding window** - Essential for substring problems
4. **Frequency map** - Use hash map or array (26 letters) for counting
5. **Edge cases** - Empty string, single character, special characters
6. **ASCII values** - Know how to work with character codes
7. **In-place vs new string** - Understand when you can modify vs need new space
