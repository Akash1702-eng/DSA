// Problem: Combination Sum
// Difficulty: Medium
// Status: Accepted
// Submitted: July 15, 2026
// URL: https://leetcode.com/problems/combination-sum/submissions/2068661259/
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(int idx, int target, vector<int>& candidates) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (target < 0)
            return;

        for (int i = idx; i < candidates.size(); i++) {
            temp.push_back(candidates[i]);
            backtrack(i, target - candidates[i], candidates);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(0, target, candidates);
        return ans;
    }
};