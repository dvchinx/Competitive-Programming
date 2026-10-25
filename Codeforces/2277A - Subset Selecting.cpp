/*
Problem: 2277A. Subset Selecting
URL: https://codeforces.com/contest/2277/problem/A
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
        int n, k;
        cin >> n >> k;
 
        vector<int> cnt(n+2, 0);
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            cnt[x]++;
        }
 
        int ans = 0;
        long long pref = 0;
        for (int j = 0; j <= n; ++j) {
            pref += cnt[j];
            if (cnt[j] == 0 || pref < 1LL * k * (j+1)) break;
            ans = j+1;
        }
        cout << ans << "\n";
    }
    return 0;
}