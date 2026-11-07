/*
Problem: 2284A1. 15K4JR3B (Easy Version)
URL: https://codeforces.com/contest/2284/problem/A1
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
        int n; cin >> n;
        cout << fixed << setprecision(0) << (pow(n, 2) / 4) << "\n";
    }
    return 0;
}
