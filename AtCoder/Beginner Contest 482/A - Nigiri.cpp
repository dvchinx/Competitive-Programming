#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;

    int n = 0; 
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'o') n++;
    }

    cout << ((n % 2 == 0) ? "even" : "odd") << "\n"; 

    return 0;
}