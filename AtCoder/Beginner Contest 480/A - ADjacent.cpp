#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, x2, y1, y2;

    for (int i = 0; i < 2; ++i) {
        string a; cin >> a;
        for (int j = 0; j < 2; ++j) {
            if (a[j] == 'A') {
                x2 = i;
                y2 = j;
            }
            else if (a[j] == 'D') {
                x1 = i;
                y1 = j;
            } 
        }
    }
    // Si la distancia entre 'A' y 'D' es 1, son adyacentes
    cout << ((sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) == 1) ? "Yes" : "No");

    return 0;
}