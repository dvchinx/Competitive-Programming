/*
Problem: 2275B. Did not Go to Print
URL: https://codeforces.com/contest/2275/problem/B
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        // Cantidad de documentos (1 -> n)
        int n; cin >> n;
        string s; cin >> s;
 
        stack<int> memo;
        unordered_set<int> imprimir;
        for (int i = 1; i <= n; ++i) {
            if (s[i-1] == '1') {
                memo.push(i);
            }
            else if (s[i-1] == '2' && !memo.empty()) {
                imprimir.insert(memo.top());
                memo.pop();
            }
            else if (s[i-1] == '2' && memo.empty()) {
                imprimir.insert(i);
            }
            else if (s[i-1] == '3') {
                imprimir.insert(i);
            }
        }
 
        // Imprimir 1ro: Cnt Documentos no impresos
        cout << n - imprimir.size() << "\n";
        // Imprimir 2do: Documentos no impresos
        for (int i = 1; i <= n; ++i) {
            if (imprimir.count(i)) continue;
            else cout << i << " ";
        }
        cout << "\n";
    }
 
    return 0;
}