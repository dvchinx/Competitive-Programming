/*
Problem: Krizaljka
URL: https://open.kattis.com/problems/krizaljka
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b; cin >> a >> b;

    int lenA = a.length(), lenB = b.length();
    int idxA = -1, idxB = -1;

    // Buscar la PRIMERA letra de 'a' que aparezca en 'b'
    for (int i = 0; i < lenA; i++) {
        for (int j = 0; j < lenB; j++) {
            if (a[i] == b[j]) {
                idxA = i; // Columna en el crucigrama
                idxB = j; // Fila en el crucigrama
                break;
            }
        }
        if (idxA != -1) break; // Detener en la primera coincidencia encontrada desde 'a'
    }

    // Imprimir el matriz del crucigrama
    for (int i = 0; i < lenB; i++) {
        for (int j = 0; j < lenA; j++) {
            if (i == idxB) {
                cout << a[j];
            } else if (j == idxA) {
                cout << b[i];
            } else {
                cout << '.';
            }
        }
        cout << "\n";
    }
    return 0;
}