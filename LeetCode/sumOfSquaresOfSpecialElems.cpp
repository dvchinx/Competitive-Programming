/*
Problem: 2278. Sum of Squares of Special Elements 
URL: https://leetcode.com/problems/sum-of-squares-of-special-elements/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int res = 0, lenNums = (int)nums.size();

        for (int i = 1; i <= lenNums; ++i) {
            if (lenNums % i == 0) {
                if (res == 0) res = nums[i-1] * nums[i-1];
                else res += nums[i-1] * nums[i-1];
            } 
        }
        return res;
    }
};