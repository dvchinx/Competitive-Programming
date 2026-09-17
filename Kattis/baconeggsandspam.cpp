/*
Problem: Bacon, Eggs, and Spam
URL: https://open.kattis.com/problems/baconeggsandspam
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& texto) {
    stringstream ss(texto);
    string palabra;
    vector<string> resultado;

    while (ss >> palabra) 
        resultado.push_back(palabra);
    return resultado;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        int N; cin >> N;
        if (N == 0) break;

        // Para almacenar de forma alfabetica alimentos y nombres
        // Se puede optimizar usando 'unordered' y ordenando antes de imprimir
        map<string, set<string>> report;

        cin.ignore();
        while (N--) {
            string name; cin >> name;
            string order; getline(cin, order);
            vector<string> orders = split(order);

            for (string o : orders) {
                // Agregar las comidas al mapa
                report[o].insert(name);
            }
        }
        
        for (auto it : report) {
            cout << it.first << " ";
            for (string names : it.second) {
                cout << names << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}