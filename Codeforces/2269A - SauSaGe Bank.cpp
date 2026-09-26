/*
Problem: 2269A. SauSaGe Bank
URL: https://codeforces.com/contest/2269/problem/A
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
 
        if (k == n) {
            cout << n * 2 << "\n";
        } else {
            int res = 0, acc = 1;
 
            k--;
            for (int i = 0; i < k; i++) {
                res += 2;
            }
            n -= k;
            while (n--) {
                acc *= 2;
            }
            cout << acc + res << "\n";
        }
    }
    return 0;
}
