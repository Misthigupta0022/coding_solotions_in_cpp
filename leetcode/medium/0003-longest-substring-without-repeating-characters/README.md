# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 561 ms (beats 5.06%)  
**Memory:** 17.3 MB (beats 99.56%)  
**Submitted:** 2026-10-29T09:21:57.659Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            temp = "";

            for (int j = i; j < s.length(); j++) {
                if (temp.find(s[j]) != string::npos) {
                    break;
                }
                temp += s[j];
            }

            if (temp.length() > maxLen) {
                maxLen = temp.length();
            }
        }

        return maxLen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)