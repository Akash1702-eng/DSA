// Problem: Palindrome Number
// Difficulty: Easy
// Status: Accepted
// Submitted: July 17, 2026
// URL: https://leetcode.com/problems/palindrome-number/submissions/2071353362/?submissionId=2071344031
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        int rev = 0;

        while (x != 0) {
            int rem = x % 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7))
                return false;

            rev = rev * 10 + rem;
            x /= 10;
        }

        return original == rev;
    }
};