/*
Problem: 1768. Merge String Alternately
URL: https://leetcode.com/problems/merge-strings-alternately
Language: C++
Author: dvchinx
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length(), len2 = word2.length();
        string res = "";
        // Reservar tamaño en memoria que ya sabemos
        res.reserve(len1 + len2);

        // Mi solución en O(n) optimizado
        int it = 0;
        while (res.length() != len1 + len2) {
            if (it < len1) res += word1[it];
            if (it < len2) res += word2[it];
            it++;
        }
        return res;
    }
};