#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    int cnt0 = 0, cnt1 = 0; 
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == '0') {
            cnt0++;
            cnt1 = 0;
        }
        else {
            cnt1++;
            cnt0 = 0;
        }

        if (cnt0 == 7 || cnt1 == 7) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}