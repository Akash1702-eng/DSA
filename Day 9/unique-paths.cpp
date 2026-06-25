// Problem: Unique Paths
// Difficulty: Medium
// Status: Accepted
// Submitted: June 25, 2026
// URL: https://leetcode.com/problems/unique-paths/submissions/2045631065/
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;

        for(int i = 1; i <= r; i++)
        {
            res = res*(N-r+i)/i;
        }
        return (int)res;
    }
};