/*
Problem: 469A. I Wanna Be the Guy
URL: https://codeforces.com/problemset/problem/469/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 2; cin >> n;
    unordered_set<int> nums(n);
    while (i--) {
        int p, ai; cin >> p;
        for (int i = 0; i < p; i++) {
            cin >> ai;
            if (!nums.count(ai))
                nums.insert(ai);
        }
    }
    cout << ((nums.size() == n) ? "I become the guy." : "Oh, my keyboard!");

    return 0;
}