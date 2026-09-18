/*
Problem: 26. Remove Duplicates from Sorted Array
URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                nums[j+1] = nums[i];
                j++;
            }
        }
        return (j+1);
    }
};