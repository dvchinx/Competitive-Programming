#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if (n < 0) return 0;

    if (n == 0) {
        cout << "{}" << "\n";
    }
    else if (n == 1) {
        cout << "{{}}" << "\n";
    }
    else {
        cout << "{"; // inicio

        int j = 1;
        while (n--) {
            for (int i = 1; i <= j; i++) {
                cout << "{";
            }
            for (int i = 1; i <= j; i++) {
                cout << "}";
            }
            if (n) cout << ",";
            j++;
        }
        
        cout << "}" << "\n"; // fin
    }

    return 0;
}