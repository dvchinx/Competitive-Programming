/*
Problem: Patuljci
URL: https://open.kattis.com/problems/patuljci
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int suma_total = 0;
    vector<int> nums(9);
    for (int i = 0; i < 9; i++) { 
        cin >> nums[i];
        suma_total+=nums[i];
    }
    
    // La suma de los 7 enanos debe ser 100
    int suma_impostores = suma_total - 100;

    // Hacemos un twoSum clásico para buscar 2 números
    // que sumados den "suma_impostores" -> O(n)
    unordered_set<int> vistos;
    int imp1 = -1, imp2 = -1;

    for (int num : nums) {
        int complemento = suma_impostores - num;

        // Si encontramos el complemento, encontramos los impostores
        if (vistos.count(complemento)) {
            imp1 = num;
            imp2 = complemento;
            break;
        }
        vistos.insert(num);
    }

    // Imprimir los 7 legitimos manteniendo orden de entrada
    for (int num : nums) {
        if (num != imp1 && num != imp2)
            cout << num << "\n";
    }

    return 0;
}