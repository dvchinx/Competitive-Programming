#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);               // a[0] = top of the stack
    iota(a.begin(), a.end(), 1);    // +i = up, -i = down

    while (q--) {
        int k; cin >> k;
        reverse(a.begin(), a.begin() + k);        // flip order of top k
        for (int i = 0; i < k; ++i) a[i] = -a[i]; // flip each one over
    }

    for (int x : a)
        cout << (x < 0 ? "-" : "") << abs(x) << "\n";

    return 0;
}