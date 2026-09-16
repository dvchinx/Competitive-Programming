// 14 - Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            for (int j = res.length()-1; j >= 0; j--) {
                if (j > strs[i].length()) {
                    continue;
                } else {
                    if (res[j] != strs[i][j]) {
                        res = res.substr(0, j);
                    }
                }
            }
        }
        return res;
    }
};