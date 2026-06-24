// Problem: Majority Element
// Difficulty: Easy
// Status: Accepted
// Submitted: June 24, 2026
// URL: https://leetcode.com/problems/majority-element/submissions/2044452552/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for(auto it:mpp)
        {
            if(it.second > (nums.size()/2))
            {
                return it.first;
            }
        }
        return -1;
    }
};