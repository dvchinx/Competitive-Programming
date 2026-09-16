/*
Problem: 2239. Find Closest Number to Zero
URL: https://leetcode.com/problems/find-closest-number-to-zero/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (abs(nums[i]) < abs(closest)) closest = nums[i];
        }
    
        if (closest < 0 && find(nums.begin(), nums.end(), -closest) != nums.end()) {
            return -closest;
        }
        return closest;
    }
};

/*
Explicación: 
1ro: buscamos el num con el valor absoluto menor.
2do: si el num absoluto menor es negativo, buscamos si existe en positivo
si no existe, retornamos el negativo. Si sí existe, retornamos el positivo.
*/