/*
Problem: 167. Two Sum II - Input Array Is Sorted
URL: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;
        while (numbers[i] + numbers[j] != target) {
            if (numbers[i] + numbers[j] < target)
                i++;
            else j--;
        }
    return {i+1, j+1};
    }
};