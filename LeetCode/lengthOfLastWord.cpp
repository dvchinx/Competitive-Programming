/*
Problem: 58. Length of Last Word
URL: https://leetcode.com/problems/length-of-last-word/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for (int i = s.length()-1; i >= 0; i--) {
            if (s[i] != ' ') cnt++;
            if (cnt && s[i] == ' ') break;
        } return cnt;
    }
};