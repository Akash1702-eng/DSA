// Problem: Integer to Roman
// Difficulty: Medium
// Status: Accepted
// Submitted: July 24, 2026
// URL: https://leetcode.com/problems/integer-to-roman/submissions/2079803885/
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> roman = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };

        string ans = "";

        for (auto &p : roman) {
            while (num >= p.first) {
                ans += p.second;
                num -= p.first;
            }
        }

        return ans;
    }
};