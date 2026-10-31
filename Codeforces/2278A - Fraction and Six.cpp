#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string p, q; 
        cin >> p >> q;
 
        int cp[26] = {0}, cq[26] = {0};
        for (char c : p) cp[c - 'a']++;
        for (char c : q) cq[c - 'a']++;
 
        for (int i = 0; i < 26; ++i) {
            int k = min(cp[i], cq[i]);
            cp[i] -= k;
            cq[i] -= k;
        }
 
        bool ok = true;
        for (int i = 0; i < 26; ++i) {
            char c = 'a' + i;
            int esperado = (c == 's' || c == 'i' || c == 'x') ? 1 : 0;
            if (cp[i] != esperado) ok = false;
            if (cq[i] != 0) ok = false;
        }
 
        cout << (ok ? "YES" : "NO") << "\n";
    }
 
    return 0;
}