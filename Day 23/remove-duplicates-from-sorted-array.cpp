// Problem: Remove Duplicates from Sorted Array
// Difficulty: Easy
// Status: Accepted
// Submitted: July 9, 2026
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2062081498/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};