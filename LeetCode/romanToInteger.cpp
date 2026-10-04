/*
Problem: 13. Roman to Integer
URL: https://leetcode.com/problems/roman-to-integer
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I')
                res += 1;
            
            else if (s[i] == 'V') {
                if (i > 0 && s[i-1]=='I')
                    res += 3;
                else
                    res += 5;
            }

            else if (s[i] == 'X') {
                if (i > 0 && s[i-1]=='I')
                    res += 8;
                else
                    res += 10;
            }

            else if (s[i] == 'L') {
                if (i > 0 && s[i-1]=='X')
                    res += 30;
                else
                    res += 50;
            }

            else if (s[i] == 'C') {
                if (i > 0 && s[i-1]=='X')
                    res += 80;
                else
                    res += 100;
            }

            else if (s[i] == 'D') {
                if (i > 0 && s[i-1]=='C')
                    res += 300;
                else
                    res += 500;
            }

            else if (s[i] == 'M') {
                if (i > 0 && s[i-1]=='C')
                    res += 800;
                else
                    res += 1000;
            }
        }
        return res;
    }
};