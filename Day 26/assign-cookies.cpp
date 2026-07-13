// Problem: Assign Cookies
// Difficulty: Easy
// Status: Accepted
// Submitted: July 13, 2026
// URL: https://leetcode.com/problems/assign-cookies/submissions/2066158538/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i = 0, j = 0;
        
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                i++;
            }
            j++;
        }
        
        return i;
    }
};