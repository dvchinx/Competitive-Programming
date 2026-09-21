/*
Problem: 2266A. Good Contest
URL: https://codeforces.com/problemset/problem/2266/A
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
        vector<int> participants(3);
 
        for (int i = 0; i < 3; i++) {
            cin >> participants[i];
        }
        auto min = min_element(participants.begin(), participants.end());
        cout << n - *min << "\n";
    }
    return 0;
}