/*
Problem: 1. Two Sum
URL: https://leetcode.com/problems/two-sum/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa; // Clave valor
        mapa.reserve(nums.size()); // Evita rehashing progresivo

        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];

            if (mapa.find(complemento) != mapa.end()) {
                return {mapa[complemento], i};
            }
            mapa[nums[i]] = i;
        }
        return {};
    }
};