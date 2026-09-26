#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    if (s[s.size()-1] == 'e') cout << s + "r";
    else cout << s + "er"; 
    
    return 0;
}