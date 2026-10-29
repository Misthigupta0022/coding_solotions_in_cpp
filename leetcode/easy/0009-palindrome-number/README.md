# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` if `x` is a  **palindrome**, and `false` otherwise.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 23.54%)  
**Memory:** 8.3 MB (beats 99.72%)  
**Submitted:** 2026-10-29T09:16:46.888Z  

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long reverse = 0;   // changed here

        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        return original == reverse;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)