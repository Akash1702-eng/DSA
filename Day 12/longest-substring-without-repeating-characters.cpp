// Problem: Longest Substring Without Repeating Characters
// Difficulty: Medium
// Status: Unknown
// Submitted: June 28, 2026
// URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestNonRepeatingSubstring(string& s) {
        int n = s.size();
        int hash[256];

        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }

        int l = 0, r = 0, maxLen = 0;

        while (r < n) {
            if (hash[s[r]] != -1) {
                l = max(hash[s[r]] + 1, l);
            }

            maxLen = max(maxLen, r - l + 1);
            hash[s[r]] = r;
            r++;
        }

        return maxLen;
    }
};

int main() {
    string s = "cadbzabcd";

    Solution sol;
    cout << "The maximum length is:\n";
    cout << sol.longestNonRepeatingSubstring(s) << endl;

    return 0;
}