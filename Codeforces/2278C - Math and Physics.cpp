/*
Problem: 2278C. Math and Physics
URL: https://codeforces.com/contest/2278/problem/C
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
 
        vector<int> vi(n); long long s = 0;
        for (auto& x : vi) { 
            cin >> x;
            s += x;
        }
 
        bool interiorGrande = false;
        for (int i = 1; i < n-1; ++i) {
            if (vi[i] >= 2) interiorGrande = true;
        }
 
        if (interiorGrande){
            cout << s - 1 << "\n";
        } else if (vi[0] >= 2 || vi[n-1] >= 2) {
            cout << s - (n - 1) << "\n";
        } else {
            cout << "-1\n";
        }
    }
 
    return 0;
}