// Problem: Reverse Pairs
// Difficulty: Hard
// Status: Accepted
// Submitted: June 25, 2026
// URL: https://leetcode.com/problems/reverse-pairs/submissions/2045743880/
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 1; j < nums.size(); j++)
            {
                if(nums[i] > (nums[j] * 2))
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};