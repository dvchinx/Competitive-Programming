#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    unordered_map<int, int> idx(n);
    vector<int> res;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        idx[x[i]] = i+1;
    }
    sort(x.begin(), x.end());

    for (int i = 0; i < n; i++) {
        if (i == 0 && abs(x[i]-x[i+1]) >= d) res.push_back(idx[x[i]]);
        else if (i == n-1 && abs(x[i]-x[i-1]) >= d) res.push_back(idx[x[i]]);
        else if (i != 0 && i != n-1 && 
            abs(x[i]-x[i-1]) >= d && abs(x[i]-x[i+1]) >= d)
            res.push_back(idx[x[i]]);
    }
    sort(res.begin(), res.end());
    cout << res.size() << "\n";
    for (int i : res) {
        cout << i << " ";
    }

    return 0;
}