// Problem: Reverse Integer
// Difficulty: Medium
// Status: Accepted
// Submitted: July 17, 2026
// URL: https://leetcode.com/problems/reverse-integer/submissions/2071352171/?submissionId=2071337583
class Solution {
public:
    int reverse(int x) {
        int rev = 0, rem = 0;
        while(x!=0)
        {
            rem = x % 10;
            x = x / 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8))
                return 0;
                
            rev = rev * 10 + rem; 
        }
        return rev;
    }
};