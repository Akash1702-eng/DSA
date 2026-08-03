// Problem: Ugly Number
// Difficulty: Easy
// Status: Accepted
// Submitted: August 3, 2026
// URL: https://leetcode.com/problems/ugly-number/submissions/2093043933/
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        return n == 1;
    }
};