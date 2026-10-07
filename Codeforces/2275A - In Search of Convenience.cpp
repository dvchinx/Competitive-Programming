/*
Problem: 2275A. In Search of Convenience
URL: https://codeforces.com/contest/2275/problem/A
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
        int x, y, r;
        cin >> x >> y >> r;
 
        cout << x << " " << y + r << "\n";
    }
    return 0;
}