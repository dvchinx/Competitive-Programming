#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, total;
    cin >> x;

    total = x * 1000 * (5280 / 4854);
    cout << fixed << setprecision(0) << total << "\n";

    return 0;
}