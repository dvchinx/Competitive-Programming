/*
Problem: Maximum Number
URL: https://open.kattis.com/problems/maximumnumber
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mayor = 0;
    while (cin >> n && n >= 0) if (n > mayor) mayor = n;
    cout << mayor;

    return 0;
}