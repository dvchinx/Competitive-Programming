// 2239 - Find Closest Number to Zero
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