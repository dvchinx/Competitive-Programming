/*
Problem: 2267A. Turn Into a Palindrome
URL: https://codeforces.com/problemset/problem/2267/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; char c; string s;
        cin >> n >> c >> s;

        int i = 0, j = n-1, res = 0;
        while (i < j) {
            if (s[i] != s[j]) {
                if (s[i] != c) res++;
                if (s[j] != c) res++;
            }
            i++; j--;
        }
        cout << res << "\n";
    }
    
    return 0;
}