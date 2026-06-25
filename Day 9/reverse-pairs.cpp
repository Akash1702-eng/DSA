// Problem: Reverse Pairs
// Difficulty: Hard
// Status: Accepted
// Submitted: June 25, 2026
// URL: https://leetcode.com/problems/reverse-pairs/submissions/2045748091/
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if((long long)nums[i] > 2LL * nums[j])
                {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};