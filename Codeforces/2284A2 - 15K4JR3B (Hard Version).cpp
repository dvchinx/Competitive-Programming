/*
Problem: 2284A2. 15K4JR3B (Hard Version)
URL: https://codeforces.com/contest/2284/problem/A2
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
        
        vector<long long> vi(n);
        long long s = 0;
 
        for (auto &x : vi) {
            int a; cin >> a;
            x = 1LL << a;
            s += x;   
        }
 
        sort(vi.rbegin(), vi.rend());
 
        long long T = s / 2, X = 0;
        for (auto x : vi) {
            if (X + x <= T) X += x; 
        }
        cout << X * (s - X) << "\n";
    }
 
    return 0;
}
