/*
Problem: Bracket Matching
URL: https://open.kattis.com/problems/bracketmatching
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; string s; 
    cin >> n;
    cin.ignore();
    cin >> s;

    stack<char> pila;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            pila.push(s[i]);
        } else {
            if (pila.empty()) {
                cout << "Invalid";
                return 0;
            }
            char tope = pila.top();
            if (s[i] == ')' && tope == '(' ||
                s[i] == '}' && tope == '{' ||
                s[i] == ']' && tope == '[') {
                pila.pop();
            } else {
                cout << "Invalid";
                return 0;
            }
        }
    }
    cout << ((pila.empty()) ? "Valid" : "Invalid");
    return 0;
}