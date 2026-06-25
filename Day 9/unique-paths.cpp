// Problem: Unique Paths
// Difficulty: Medium
// Status: Accepted
// Submitted: June 25, 2026
// URL: https://leetcode.com/problems/unique-paths/submissions/2045640555/
class Solution {
public:
    int f(int m, int n) {
        if(m == 0 && n == 0) return 1;
        if(m < 0 || n < 0) return 0;
        int up = f(m-1, n);
        int left = f(m, n-1);
        return up+left; 
    }
    int uniquePaths(int i, int j)
    {
        return f(i-1, j-1);
    }
};