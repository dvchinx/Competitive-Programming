/*
Problem: Medicine Drug
URL: https://open.kattis.com/problems/medicinedrug
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l;
    cin >> n >> k >> l;
    int res = ceil((float)(n * k) / l);

    cout << res; 

    return 0;
}