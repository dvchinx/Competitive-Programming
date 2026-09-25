/*
Problem: Eight Queens
URL: https://open.kattis.com/problems/8queens
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool fila_usada[8] = {false};
    bool col_usada[8] = {false};
    bool diag1[15] = {false}; // r - c + 7
    bool diag2[15] = {false}; // r + c

    bool es_valido = true;
    int total_damas = 0;

    for (int r = 0; r < 8; ++r) {
        string linea;
        cin >> linea;

        for (int c = 0; c < 8; ++c) {
            if (linea[c] == '*') {
                total_damas++;

                int d1 = r - c + 7;
                int d2 = r + c;

                // Si la fila, columna o diagonal ya fueron ocupadas
                if (fila_usada[r] || col_usada[c] || diag1[d1] || diag2[d2]) {
                    es_valido = false;
                }

                // Marcar la fila, columna y diagonales como ocupadas
                fila_usada[r] = true;
                col_usada[c] = true;
                diag1[d1] = true;
                diag2[d2] = true;
            }
        }
    }
    if (total_damas != 8) es_valido = false;
    cout << (es_valido ? "valid" : "invalid") << "\n";

    return 0;
}