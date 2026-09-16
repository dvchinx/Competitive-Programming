/*
Problem: Mixed Fractions
URL: https://open.kattis.com/problems/mixedfractions
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Fracción de entrada
    int num, den;

    // Entrada hasta centinela doble (0 0)
    while (cin >> num >> den) {
        if (num == 0 && den == 0) break;

        // Fórmula para construir la fracción mixta
        int x, n;
        x = num / den;
        n = num % den;

        cout << x << " " << n << " / " << den << "\n";
    }
    return 0;
}