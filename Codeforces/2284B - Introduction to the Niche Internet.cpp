/*
Problem: 2284B. Introduction to the Niche Internet
URL: https://codeforces.com/contest/2284/problem/B
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<ll> vi(n);
        for (auto& x : vi) cin >> x;
 
        sort(vi.begin(), vi.end());
        int cntMax = count(vi.begin(), vi.end(), vi[n-1]);
 
        if (k < cntMax) {
            cout << "NO\n";
            continue;
        }
 
        cout << "YES\n";
        for (int i = n-k; i < n; ++i) {
            cout << vi[i] << " ";
        }
        for (int i = n-k-1; i >= 0; --i) {
            cout << vi[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
