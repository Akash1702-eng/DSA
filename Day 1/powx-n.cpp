// Problem: Pow(x, n)
// Difficulty: Medium
// Status: Accepted
// Submitted: June 23, 2026
// URL: https://leetcode.com/problems/powx-n/submissions/2042956313/
class Solution {
private:
    double power(double x, long n) {
        if (n == 0) return 1.0;
        if (n == 1) return x;

        if (n % 2 == 0) {
            return power(x * x, n / 2);