// Problem: Permutation Sequence
// Difficulty: N/A
// Status: Accepted
// Submitted: July 21, 2026
// URL: https://leetcode.com/problems/permutation-sequence/submissions/2075764765/
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        int fact = 1;

        for (int i = 1; i < n; i++) {
            fact *= i;
            nums.push_back(i);
        }
        nums.push_back(n);

        k--;

        string ans = "";

        while (!nums.empty()) {
            int index = k / fact;
            ans += to_string(nums[index]);

            nums.erase(nums.begin() + index);

            if (nums.empty())
                break;

            k %= fact;
            fact /= nums.size();
        }

        return ans;
    }
};