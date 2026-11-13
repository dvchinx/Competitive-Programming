/*
Problem: 381A Sereja and Dima
URL: https://codeforces.com/problemset/problem/381/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int i = 0, j = n - 1;
    long long p1 = 0, p2 = 0; // Usar long long previene desbordamientos si los números son grandes

    // Lambda para encapsular la decisión greedy de cada jugador
    auto make_choice = [&](long long& player_score) {
        if (a[i] > a[j]) {
            player_score += a[i];
            i++;
        } else {
            player_score += a[j];
            j--;
        }
    };

    // Simulamos los turnos mientras queden al menos dos elementos
    while (i < j) {
        make_choice(p1);
        make_choice(p2);
    }

    // Si n es impar, quedará exactamente un elemento central que le corresponde a p1
    if (i == j) {
        p1 += a[i];
    }
    
    cout << p1 << " " << p2 << "\n";

    return 0;
}