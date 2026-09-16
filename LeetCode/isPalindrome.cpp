/*
Problem: 9. Is Palindrome
URL: https://leetcode.com/problems/palindrome-number/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long reversed = 0;

        while (x > 0) {
            // Algoritmo de Inversión de Dígitos por Descomposición Aritmética
            reversed = (reversed*10) + x % 10;
            x /= 10;
        }
        return reversed == original;
    }
};