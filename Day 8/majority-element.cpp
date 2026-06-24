// Problem: Majority Element
// Difficulty: Easy
// Status: Accepted
// Submitted: June 24, 2026
// URL: https://leetcode.com/problems/majority-element/submissions/2044460908/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ele;
        for(int i=0; i<nums.size(); i++)
        {
            if(cnt == 0)
            {
                ele = nums[i];
                cnt = 1;
            }
            else if(nums[i] == ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == ele)
            {
                cnt1++;
            }
        }
        if(cnt1 > (nums.size()/2))
        {
            return ele;
        }
    return -1;
    }
};