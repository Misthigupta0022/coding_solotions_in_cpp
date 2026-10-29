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