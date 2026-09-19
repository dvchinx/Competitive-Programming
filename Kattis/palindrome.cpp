/*
Problem: Palindrome
URL: https://open.kattis.com/problems/palindrome
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    bool palindrome = true;
    
    int i = 0;
    int j = s.size() - 1;
    while (i < s.size()) {
        if (s[i] != s[j]) {
            palindrome = false;
            break;
        }
        i++; j--;
    }
    cout << (palindrome ? "Palindrome!" : "Nothing special about this string :(");

    return 0;
}