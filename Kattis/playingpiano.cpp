/*
Problem: Playing Piano
URL: https://open.kattis.com/problems/spelapiano
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; cin >> N >> M;
    
    vector<int> t(M); t[0] = 0;

    int maximo = 0, minimo = 0;
    for (int i = 0; i < M-1; i++) {
        int e; cin >> e;
        t[i+1] = t[i] + e;
        if (t[i+1] > maximo) maximo = t[i+1];
        if (t[i+1] < minimo) minimo = t[i+1];
    }

    int limInferior = 1 - minimo;
    int limSuperior = N - maximo;

    if (limInferior <= limSuperior)
        cout << limInferior;
    else
        cout << "finns ingen";

    return 0;
}