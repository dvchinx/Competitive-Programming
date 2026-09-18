/*
Problem: Arrival of the General
URL: https://codeforces.com/problemset/problem/144/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    vector<int> nums(N);
    
    int posMenor = -1, posMayor = -1;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];

        if (posMenor == -1 || nums[i] <= nums[posMenor])
            posMenor = i;

        if (posMayor == -1 || nums[i] > nums[posMayor])
            posMayor = i;
    }

    posMayor++; posMenor++;
    if (posMayor > posMenor) {
        cout << (posMayor - 1) + (N - posMenor) - 1;
    } else {
        cout << ((posMayor - 1) + (N - posMenor));
    }

    return 0;
}