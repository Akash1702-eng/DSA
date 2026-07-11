// Problem: Max Consecutive Ones
// Difficulty: Easy
// Status: Accepted
// Submitted: July 11, 2026
// URL: https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, ans = 0;
        
        for (int num : nums) {
            if (num == 1) {
                count++;
                ans = max(ans, count);
            } else {
                count = 0;
            }
        }
        
        return ans;
    }
};