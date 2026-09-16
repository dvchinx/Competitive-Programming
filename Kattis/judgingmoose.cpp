/*
Problem: Judging Moose
URL: https://open.kattis.com/problems/judgingmoose
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Solo almacena números positivos (0 -> ...)
    unsigned int l, r;
    cin >> l >> r;

    if (l == 0 && r == 0) cout << "Not a moose" << "\n";
    else if (l == r) cout << "Even " << l+r << "\n";
    else cout << "Odd " << max(l, r)*2 << "\n";
    
    return 0;
}