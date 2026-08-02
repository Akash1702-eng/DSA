// Problem: Unique Binary Search Trees
// Difficulty: N/A
// Status: Accepted
// Submitted: August 2, 2026
// URL: https://leetcode.com/problems/unique-binary-search-trees/submissions/2091766533/
class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = dp[1] = 1;

        for (int nodes = 2; nodes <= n; nodes++) {
            for (int root = 1; root <= nodes; root++) {
                dp[nodes] += dp[root - 1] * dp[nodes - root];
            }
        }

        return dp[n];
    }
};