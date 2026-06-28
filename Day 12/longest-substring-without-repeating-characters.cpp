// Problem: Longest Substring Without Repeating Characters
// Difficulty: Medium
// Status: Accepted
// Submitted: June 28, 2026
// URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/2049184569/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];

        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }

        int l = 0, maxLen = 0;

        for (int r = 0; r < s.size(); r++) {
            if (hash[s[r]] != -1) {
                l = max(l, hash[s[r]] + 1);
            }

            maxLen = max(maxLen, r - l + 1);
            hash[s[r]] = r;
        }

        return maxLen;
    }
};