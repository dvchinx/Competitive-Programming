/*
Problem: Sudoku Verify
URL: https://open.kattis.com/problems/sudokuverify
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Matriz de frecuencias: [índice][número] -> guardará true si ya se vio ese número
    bool filas[9][10] = {false};
    bool columnas[9][10] = {false};
    bool areas[9][10] = {false};

    bool flag = true;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int val; 
            cin >> val;

            int area_idx = (i / 3) * 3 + (j / 3);

            // Validar si el valor está fuera del rango permitido [1, 9]
            if (val < 1 || val > 9) {
                flag = false;
            } else {
                // Si el número ya apareció en esa fila, columna o área 3x3:
                if (filas[i][val] || columnas[j][val] || areas[area_idx][val]) {
                    flag = false;
                }

                // Marcar el número como visto
                filas[i][val] = true;
                columnas[j][val] = true;
                areas[area_idx][val] = true;
            }
        }
    }
    cout << (flag ? "VALID" : "INVALID!");

    return 0;
}