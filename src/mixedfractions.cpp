#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, den;

    while (cin >> num >> den) {
        if (num == 0 && den == 0) break;

        int x, n;
        x = num / den;
        n = num % den;

        cout << x << " " << n << " / " << den << "\n";
    }
    return 0;
}