/*
Problem: 27. Remove Element
URL: https://leetcode.com/problems/remove-element/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};