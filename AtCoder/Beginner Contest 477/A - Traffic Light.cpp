#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char c; cin >> c;
    if (c == 'B') {
        cout << 'Y';
    } else if (c == 'R') {
        cout << 'B';
    } else if (c == 'Y') {
        cout << 'R';
    }

    return 0;
}