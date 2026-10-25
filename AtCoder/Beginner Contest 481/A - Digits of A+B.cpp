#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int ans = a+b;
    string s = to_string(ans);
    cout << s.length() << "\n";

    return 0;
}