// Problem: Longest Consecutive Sequence
// Difficulty: N/A
// Status: Accepted
// Submitted: June 27, 2026
// URL: https://leetcode.com/problems/longest-consecutive-sequence/submissions/2048126944/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0;
        int longest = 1;
        int lastsmaller = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if((nums[i]-1) == lastsmaller)
            {
                cnt = cnt + 1;
                lastsmaller = nums[i];
            }
            else if(lastsmaller != nums[i])
            {
                cnt = 1;
                lastsmaller = nums[i];
            }
        longest = max(longest, cnt);
        }
        return longest;
    }
};