#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, res = 0; cin >> n;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (i % 2 == 0) res += a;
    }
    cout << res << "\n";
    
    return 0;
}