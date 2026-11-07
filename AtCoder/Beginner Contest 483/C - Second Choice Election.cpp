#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<ll> cnt(n+1, 0);
    vector<vector<int>> moved(n+1);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        cnt[a]++;
        moved[a].push_back(b);
    }

    vector<int> order(n);
    iota(order.begin(), order.end(), 1);
    sort(order.begin(), order.end(), [&](int x, int y) {
        if (cnt[x] != cnt[y]) return cnt[x] > cnt[y];
        return x < y;
    });

    vector<ll> extra(n+1, 0);
    vector<int> mark(n+1, 0);

    for (int k = 1; k <= n; ++k) {
        mark[k] = k;
        vector<int> touched;
        for (int b : moved[k]) {
            if (mark[b] != k) {
                mark[b] = k;
                touched.push_back(b);
            }
            extra[b]++;
        }

        ll bestV = -1;
        int bestC = INT_MAX;
        auto consider = [&](int c, ll v) {
            if (v > bestV || (v == bestV && c < bestC)) {
                bestV = v; bestC = c;
            }
        };

        for (int c : touched) consider(c, cnt[c] + extra[c]);

        for (int c : order) {
            if (mark[c] == k) continue;
            consider(c, cnt[c]);
            break;
        }

        cout << bestC << "\n";
        for (int c : touched) extra[c] = 0;
    }

    return 0;
}