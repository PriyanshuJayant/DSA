# Strings - Interview Questions for Small Startups

## Pattern: Two Pointer

### 1. Valid Palindrome
**Problem:** Check if string is palindrome (alphanumeric only, case-insensitive).
- **Input:** `"A man, a plan, a canal: Panama"`
- **Output:** `true`
- **Company Tags:** Very common in startups
- **Difficulty:** Easy
- **Approach:** Two pointers, skip non-alphanumeric, ignore case

### 2. Reverse String
**Problem:** Reverse a string in-place.
- **Input:** `['h','e','l','l','o']`
- **Output:** `['o','l','l','e','h']`
- **Company Tags:** Warm-up question
- **Difficulty:** Easy
- **Approach:** Swap using two pointers from ends

### 3. Reverse Vowels of String
**Problem:** Reverse only the vowels in a string.
- **Input:** `"hello"`
- **Output:** `"holle"`
- **Company Tags:** String manipulation basics
- **Difficulty:** Easy
- **Approach:** Two pointers, swap only vowels

## Pattern: Frequency Counter / Hash Map

### 4. Valid Anagram
**Problem:** Check if two strings are anagrams.
- **Input:** `s = "anagram", t = "nagaram"`
- **Output:** `true`
- **Company Tags:** **Most asked string question**
- **Difficulty:** Easy
- **Approach:** Frequency map or sort both strings

### 5. First Unique Character in String
**Problem:** Find index of first non-repeating character.
- **Input:** `"leetcode"`
- **Output:** `0`
- **Company Tags:** Very popular
- **Difficulty:** Easy
- **Approach:** Two passes - count frequency, find first with count 1

### 6. Ransom Note
**Problem:** Check if ransom note can be constructed from magazine.
- **Input:** `ransomNote = "aa", magazine = "aab"`
- **Output:** `true`
- **Company Tags:** Hash map basics
- **Difficulty:** Easy
- **Approach:** Count characters in magazine, check availability

### 7. Group Anagrams
**Problem:** Group strings that are anagrams together.
- **Input:** `["eat","tea","tan","ate","nat","bat"]`
- **Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`
- **Company Tags:** Common in startups
- **Difficulty:** Medium
- **Approach:** Use sorted string as key in hash map

## Pattern: Sliding Window

### 8. Longest Substring Without Repeating Characters
**Problem:** Find length of longest substring without duplicates.
- **Input:** `"abcabcbb"`
- **Output:** `3`
- **Company Tags:** **Very popular**
- **Difficulty:** Medium
- **Approach:** Sliding window with hash set/map

### 9. Longest Repeating Character Replacement
**Problem:** Find longest substring with same letter after k replacements.
- **Input:** `s = "AABABBA", k = 1`
- **Output:** `4`
- **Company Tags:** Sliding window variant
- **Difficulty:** Medium
- **Approach:** Window with frequency count, check window_length - max_freq <= k

### 10. Permutation in String
**Problem:** Check if one string contains permutation of another.
- **Input:** `s1 = "ab", s2 = "eidbaooo"`
- **Output:** `true`
- **Company Tags:** Sliding window + frequency
- **Difficulty:** Medium
- **Approach:** Fixed sliding window with frequency matching

## Pattern: String Manipulation

### 11. Reverse Words in String
**Problem:** Reverse the order of words.
- **Input:** `"the sky is blue"`
- **Output:** `"blue is sky the"`
- **Company Tags:** Common interview question
- **Difficulty:** Medium
- **Approach:** Split, reverse array, join (or two reversals)

### 12. Implement strStr()
**Problem:** Find first occurrence of needle in haystack.
- **Input:** `haystack = "hello", needle = "ll"`
- **Output:** `2`
- **Company Tags:** String matching basics
- **Difficulty:** Easy
- **Approach:** Sliding window or KMP (basic solution sufficient)

### 13. Length of Last Word
**Problem:** Return length of last word in string.
- **Input:** `"Hello World"`
- **Output:** `5`
- **Company Tags:** Edge case handling
- **Difficulty:** Easy
- **Approach:** Trim and traverse from end

### 14. Longest Common Prefix
**Problem:** Find longest common prefix in array of strings.
- **Input:** `["flower","flow","flight"]`
- **Output:** `"fl"`
- **Company Tags:** Common warm-up
- **Difficulty:** Easy
- **Approach:** Vertical scanning or compare with first string

### 15. Valid Parentheses
**Problem:** Check if parentheses/brackets are valid.
- **Input:** `"()[]{}"`
- **Output:** `true`
- **Company Tags:** **Must know** (uses stack)
- **Difficulty:** Easy
- **Approach:** Stack to match opening/closing pairs

## Pattern: String Parsing

### 16. String to Integer (atoi)
**Problem:** Convert string to 32-bit signed integer.
- **Input:** `"   -42"`
- **Output:** `-42`
- **Company Tags:** Edge case testing
- **Difficulty:** Medium
- **Approach:** Handle whitespace, sign, overflow

### 17. Roman to Integer
**Problem:** Convert roman numeral to integer.
- **Input:** `"MCMXCIV"`
- **Output:** `1994`
- **Company Tags:** Parsing logic
- **Difficulty:** Easy
- **Approach:** Add current, subtract if next is larger

### 18. Integer to Roman
**Problem:** Convert integer to roman numeral.
- **Input:** `58`
- **Output:** `"LVIII"`
- **Company Tags:** Reverse of Roman to Integer
- **Difficulty:** Medium
- **Approach:** Greedy with value-symbol pairs

### 19. Add Binary
**Problem:** Add two binary strings.
- **Input:** `a = "11", b = "1"`
- **Output:** `"100"`
- **Company Tags:** Bit manipulation alternative
- **Difficulty:** Easy
- **Approach:** Add digit by digit with carry

### 20. Excel Sheet Column Number
**Problem:** Convert Excel column title to number.
- **Input:** `"AB"`
- **Output:** `28`
- **Company Tags:** Base conversion
- **Difficulty:** Easy
- **Approach:** Base-26 conversion

## Pattern: Subsequence / Substring

### 21. Is Subsequence
**Problem:** Check if s is subsequence of t.
- **Input:** `s = "abc", t = "ahbgdc"`
- **Output:** `true`
- **Company Tags:** Two pointer basics
- **Difficulty:** Easy
- **Approach:** Two pointers, greedy matching

### 22. Longest Palindromic Substring
**Problem:** Find longest palindromic substring.
- **Input:** `"babad"`
- **Output:** `"bab"` or `"aba"`
- **Company Tags:** Popular medium question
- **Difficulty:** Medium
- **Approach:** Expand around center (O(n²))

### 23. Palindromic Substrings
**Problem:** Count all palindromic substrings.
- **Input:** `"abc"`
- **Output:** `3` ("a", "b", "c")
- **Company Tags:** Similar to longest palindrome
- **Difficulty:** Medium
- **Approach:** Expand around center for each position

## Advanced Pattern Problems

### 24. Minimum Window Substring
**Problem:** Find minimum window containing all characters of target.
- **Input:** `s = "ADOBECODEBANC", t = "ABC"`
- **Output:** `"BANC"`
- **Company Tags:** Harder startup question
- **Difficulty:** Hard
- **Approach:** Sliding window with two maps

### 25. Word Pattern
**Problem:** Check if string follows same pattern as pattern string.
- **Input:** `pattern = "abba", s = "dog cat cat dog"`
- **Output:** `true`
- **Company Tags:** Bijection mapping
- **Difficulty:** Easy
- **Approach:** Two hash maps for bidirectional mapping

---

## Interview Preparation Checklist
- [ ] Master two pointer technique for palindromes and reversal
- [ ] Know when to use frequency array vs hash map
- [ ] Understand sliding window for substring problems
- [ ] Can handle edge cases (empty string, special chars, whitespace)
- [ ] Know string immutability in your language
- [ ] Practice with and without built-in functions
- [ ] Understand O(n) vs O(n²) approaches

## Key Patterns to Master
1. **Two Pointer** - Palindrome checking, reversal, vowel manipulation
2. **Sliding Window** - Longest substring problems, permutation matching
3. **Frequency Counter** - Anagrams, unique characters, ransom note
4. **String Building** - Reversal, compression, manipulation
5. **Stack** - Valid parentheses, expression parsing
6. **Hash Map** - Pattern matching, grouping

## Common Techniques
- **Frequency Array** - For lowercase letters: `int[26]`
- **Hash Set** - For tracking seen characters
- **StringBuilder** - For efficient string building
- **Character arithmetic** - `c - 'a'` for indexing
- **Two passes** - First to count, second to process

## Time Complexity Targets
- **Palindrome/Reversal:** O(n)
- **Anagram:** O(n) with hash map or O(n log n) with sorting
- **Substring search:** O(n) with sliding window
- **String matching:** O(n·m) basic, O(n+m) with KMP
