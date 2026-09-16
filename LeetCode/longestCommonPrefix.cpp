/*
Problem: 14. Longest Common Prefix
URL: https://leetcode.com/problems/longest-common-prefix/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Como referencia el 1er string
        string res = strs[0];

        // Por cada string del vector
        for (int i = 1; i < strs.size(); i++) {
            // Lo recorremos de forma inversa
            for (int j = res.length()-1; j >= 0; j--) {
                if (j > strs[i].length()) {
                    continue; // Optimización
                } else {
                    // Si no son iguales en idx 'j', recortar 'res'
                    if (res[j] != strs[i][j]) {
                        res = res.substr(0, j);
                    }
                }
            }
        }
        return res;
    }
};