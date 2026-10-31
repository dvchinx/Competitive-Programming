#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> tablero(5);
    int minFaltantes = 5;

    for (int i = 0; i < 5; ++i) {
        cin >> tablero[i];
    }

    for (int i = 0; i < 5; ++i) {
        int marcadasFilas = 0, marcadasColumna = 0;

        for (int j = 0; j < 5; ++j) {
            if (tablero[i][j] == 'o') marcadasFilas++;
            if (tablero[j][i] == 'o') marcadasColumna++;
        }

        minFaltantes = min(minFaltantes, 5 - marcadasFilas);
        minFaltantes = min(minFaltantes, 5 - marcadasColumna);
    }

    // Diagonales
    int marcadasDiag1 = 0;
    for (int i = 0; i < 5; ++i) {
        if (tablero[i][i] == 'o') marcadasDiag1++; 
    }
    minFaltantes = min(minFaltantes, 5 - marcadasDiag1);

    int marcadasDiag2 = 0;
    for (int i = 0; i < 5; ++i) {
        if (tablero[i][i] == 'o') marcadasDiag2++; 
    }
    minFaltantes = min(minFaltantes, 5 - marcadasDiag2);

    cout << minFaltantes << "\n";

    return 0;
}