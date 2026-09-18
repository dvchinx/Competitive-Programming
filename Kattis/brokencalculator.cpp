/*
Problem: Broken Calculator
URL: https://open.kattis.com/problems/brokencalculator
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    addition : (n1 + n2) - ans
    substraction : (n1 - n2) * ans
    multiplication : (n1 * n2) ^ 2
    division : if n1 es par -> n1 / 2
               else (n1 + 1) / 2

    nums hasta 10^18 (usamos long long)
    */
    int N; cin >> N;
    long long ans = 1;
    while (N--) {
        long long n1, n2, res;
        char op;
        cin >> n1 >> op >> n2;

        if (op == '+') {
            res = (n1 + n2) - ans;
        } else if (op == '-') {
            res = (n1 - n2 ) * ans;
        } else if (op == '*') {
            res = pow((n1 * n2), 2);
        } else if (op == '/') {
            if (n1 % 2 == 0) {
                res = n1 / 2;
            } else {
                res = (n1 + 1) / 2;
            }
        }
        cout << res << "\n";
        ans = res;
    }

    return 0;
}