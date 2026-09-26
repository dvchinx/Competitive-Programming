#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s, t; cin >> s >> t;

    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '*') t[i] = s[i];
    }
    cout << ((t == s) ? "Yes" : "No");
    
    return 0;
}