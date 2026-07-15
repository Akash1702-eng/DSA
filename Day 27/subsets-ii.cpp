// Problem: Subsets II
// Difficulty: Medium
// Status: Accepted
// Submitted: July 15, 2026
// URL: https://leetcode.com/problems/subsets-ii/submissions/2068656318/
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(int idx, vector<int>& nums) {
        ans.push_back(temp);

        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i] == nums[i - 1])
                continue;

            temp.push_back(nums[i]);
            backtrack(i + 1, nums);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(0, nums);
        return ans;
    }
};