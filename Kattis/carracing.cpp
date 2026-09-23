/*
Problem: Car Racing
URL: https://open.kattis.com/problems/carracing
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long sum[5] = {}, cnt[5] = {};

    while (n--) {
        int a, b; cin >> a >> b;
        sum[a - 1] += b;
        cnt[a - 1]++;
    }

    int id = -1;
    long long mejor = LLONG_MAX;
    for (int i = 0; i < 5; i++) {
        if (cnt[i] == 0) continue;
        long long avg = sum[i] / cnt[i];
        if (avg < mejor) {
            mejor = avg;
            id = i + 1;
        }
    }

    cout << id << "\n" << mejor;
}
