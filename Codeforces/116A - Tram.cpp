/*
Problem: 116A. Tram
URL: https://codeforces.com/contest/116/problem/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    int actual = 0, ans = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;

        actual = actual - a + b;
        ans = max(ans, actual);
    }
    cout << ans << "\n";

    return 0;
}