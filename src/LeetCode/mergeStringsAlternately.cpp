// 1768 - Merge String Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length(), len2 = word2.length();
        string res = "";
        res.reserve(len1 + len2);

        int it = 0;
        while (res.length() != len1 + len2) {
            if (it < len1) res += word1[it];
            if (it < len2) res += word2[it];
            it++;
        }
        return res;
    }
};