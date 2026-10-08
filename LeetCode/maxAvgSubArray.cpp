/*
Problem: 69. Maximum Average Subarray I
URL: https://leetcode.com/problems/maximum-average-subarray-i
Language: C++
Author: dvchinx
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double actual = 0, best = LLONG_MIN;

        for (int r = 0; r < n; r++) {
            actual += nums[r];
            if (r >= k) actual -= nums[r-k];
            if (r >= k-1) best = max(best, actual);
        }
        return best / k;
    }
};