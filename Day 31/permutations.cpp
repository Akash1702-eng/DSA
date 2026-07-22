// Problem: Permutations
// Difficulty: Medium
// Status: Accepted
// Submitted: July 22, 2026
// URL: https://leetcode.com/problems/permutations/submissions/2077381215/
class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            used[i] = true;
            temp.push_back(nums[i]);

            backtrack(nums, temp, ans, used);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        backtrack(nums, temp, ans, used);

        return ans;
    }
};