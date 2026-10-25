#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i = 1; cin >> n;

    unordered_map<string, int> acc;
    while (n--) {
        string s; cin >> s;

        if (!acc.count(s)) {
            acc[s] = i++;
        }

        cout << acc[s] << "\n";
    }
    return 0;
}