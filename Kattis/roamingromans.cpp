/*
Problem: Roaming Romans
URL: https://open.kattis.com/problems/romans
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, total;
    cin >> x;

    // Fórmula del enunciado
    total = x * 1000 * (5280 / 4854);
    // Redondear e imprimir
    cout << fixed << setprecision(0) << total << "\n";

    return 0;
}