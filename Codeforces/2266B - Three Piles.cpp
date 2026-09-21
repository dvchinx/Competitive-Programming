/*
Problem: 2266B. Three Piles
URL: https://codeforces.com/problemset/problem/2266/B
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
        long long a, b, c; cin >> a >> b >> c;
 
        if (abs(a - b) > abs(a+c - b))
            cout << abs(a-b);
        else
            cout << abs(a+c-b);
        cout << "\n";
    }
    return 0;
}