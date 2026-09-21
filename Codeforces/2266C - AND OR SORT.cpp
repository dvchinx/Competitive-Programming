/*
Problem: 2266C. AND, OR, SORT!
URL: https://codeforces.com/problemset/problem/2266/C
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
        int n, res = 0; cin >> n;
        cin.ignore(); 
        string s; cin >> s;

        if (s[0] == '1') {
            res = count(s.begin(), s.end(), '0');
        } else {
            for (int i = n-1; i >= 0; i--){
                if (s[i] == '1') {
                    s[i] = '0';
                } else break;
            }

            for (int i = 0; i < n-1; i++) {
                if (s[i] == '1' && s[i+1] == '1')
                    continue;
                else if (s[i] == '1' && s[i+1] == '0')
                    res++;
            }   
        }
        cout << res << "\n";
    }
    return 0;
}