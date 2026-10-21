#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> candidates;
    vector<string> order;

    for (int i = 0; i < n; ++i){
        string s; cin >> s;

        if (candidates.find(s) == candidates.end()) {
            order.push_back(s);
        }
        candidates[s] = 0;
    }

    for (int i = 0; i < m; ++i) {
        string t; cin >> t;

        if (candidates.count(t)) {
            candidates[t]++;
        } else {
            int matches = 0; string match = "";
            for (auto it : candidates) {
                if (it.first.length() != t.length()) continue;

                int diferentes = 0;
                for (int j = 0; j < (int)t.length(); ++j) {
                    if (t[j] != it.first[j]) {
                        diferentes++;
                        if (diferentes > 1) {
                            break;
                        }
                    }
                }
                if (diferentes == 1) {
                    match = it.first;
                    matches++;
                }
            }
            if (matches == 1) {
                candidates[match]++;
            }
        }
    }

    for (const string& s : order) {
        cout << candidates[s] << "\n";   
    }

    return 0;
}