#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, t;
    cin >> n >> k >> t;

    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    ll r = 0, cnt = 0;
    auto fill = [&](ll target) {
        if (r < target) {
            ll c = (target - r + k - 1) / k;
            cnt += c;
            r += c * k;
        }
    };

    for (int i = 0; i < n && r < t; ++i) {
        if (a[i] > r) fill(min(a[i], t));
        if (r >= t) break;
        r = max(r, a[i] + k);
    }
    fill(t);

    cout << cnt << "\n";

    return 0;
}