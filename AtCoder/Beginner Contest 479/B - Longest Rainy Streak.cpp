#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;

    int l = 0, best = 0;
    for (int r = 0; r < (int)s.size(); ++r) {
        if (s[r] == 'S') l = r + 1;
        best = max(best, r - l + 1);
    }
    cout << best << "\n";
    
    return 0;
}