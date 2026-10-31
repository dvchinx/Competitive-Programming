#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w, n, q;
    cin >> h >> w >> n >> q;

    vector<long long> r(n), c(n);

    for (int i = 0; i < n; ++i) {
        cin >> r[i] >> c[i];
    }

    sort(r.begin(), r.end());
    sort(c.begin(), c.end());

    string out;
    while (q--) {
        int t; long long a, b;
        cin >> t >> a >> b;

        auto& v = (t == 1) ? r : c;
        long long cnt = upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a);

        out += to_string(cnt) + "\n";
    }
    cout << out;

    return 0;
}