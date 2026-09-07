#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(std::vector<int>& nums, int target) {
    unordered_map<int, int> mapa;

    for (int i = 0; i < nums.size(); i++) {
        int complemento = target - nums[i];

        if (mapa.find(complemento) != mapa.end()) {
            return {mapa[complemento], i};
        }
        mapa[nums[i]] = i;
    }
    return {};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> res = twoSum(nums, target);

    for (int x : res) {
        cout << x << "\n";
    }

    return 0;
}