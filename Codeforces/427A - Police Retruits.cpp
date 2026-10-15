/*
Problem: 427A Police Recruits
URL: https://codeforces.com/problemset/problem/427/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, polices = 0, crimes = 0; 
    cin >> n;
    while (n--) {
        int a; cin >> a;

        if (a == -1) {
            if (!polices) crimes++;
            else polices--;
        } else {
            polices += a;
        }
    }
    cout << crimes << "\n";

    return 0;
}