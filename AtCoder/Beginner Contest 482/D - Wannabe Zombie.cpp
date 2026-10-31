#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<long long> vl(n);

    for (auto& x : vl) cin >> x;

    string out;
    for (int k = 0; k < n; ++k) {
        if (n == 1) {
            out += "0\n";
            continue;
        }

        long long mejor = LLONG_MAX;
        if (k + 1 < n) {
            mejor = min(mejor, max(vl[n-1] - vl[k], vl[k+1] - vl[0]) / 2);
        }

        if (k - 1 >= 0) {
            mejor = min(mejor, max(vl[k] - vl[0], vl[n-1] - vl[k-1]) / 2);
        }
        out += to_string(mejor) + "\n";
    }
    cout << out;

    return 0;
}