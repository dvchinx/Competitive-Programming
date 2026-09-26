/*
Problem: 2269B. KiaKio and Squared Numbers
URL: https://codeforces.com/contest/2269/problem/B
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

ll sumaCuadradosDigitos(ll x) {
    int suma = 0;
    if (x < 0) x = -x;
    while (x > 0) {
        int digito = x % 10;
        suma += digito * digito;
        x /= 10;
    }
    return suma;
}
 
ll valorIt100(ll x) {
    for (int i = 0; i < 100; ++i) {
        x = sumaCuadradosDigitos(x);
    }
    return x;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        unordered_map<ll, ll> freq;
 
        for (int i = 0; i < n; ++i) {
            ll a_i; cin >> a_i;
            ll final_val = valorIt100(a_i);
            freq[final_val]++;
        }
 
        ll total_pares = 0;
        for (auto it : freq) {
            if (it.second > 1) {
                total_pares += it.second * (it.second-1) / 2;
            }
        }
        cout << total_pares << "\n";
    }
 
    return 0;
}