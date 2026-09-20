/*
Problem: 35. Search Insert Position
URL: https://leetcode.com/problems/search-insert-position/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        return distance(nums.begin(), it);
    }
};