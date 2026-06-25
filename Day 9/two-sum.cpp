// Problem: Two Sum
// Difficulty: Easy
// Status: Accepted
// Submitted: June 25, 2026
// URL: https://leetcode.com/problems/two-sum/submissions/2045797928/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i = 0; i<nums.size(); i++)
        {
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end())
            {
                return {mpp[more], i};
            }
            mpp[a] = i;        
        }    
        return {};
    }
};