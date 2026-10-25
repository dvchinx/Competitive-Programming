#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> yi(n);
    for (auto& x : yi) cin >> x;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (yi[i] == k) ans++;
    }
    for (int i = 0; i + 1 < n; ++i) {
        if ((yi[i]-k) * (yi[i+1]-k) < 0) ans++;
    }

    cout << ans << "\n";

    return 0;
}