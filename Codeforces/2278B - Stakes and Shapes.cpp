/*
Problem: 2278B. Stakes and Shapes
URL: https://codeforces.com/contest/2278/problem/B
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int n = x + y + z;
        char c;

        if (y >= z) c = 'R';       // gana y, pierde z
        else if (z >= x) c = 'S';  // gana z, pierde x
        else c = 'P';              // gana x, pierde y (aquí x >= y es seguro)
        
        cout << string(n, c) << "\n";
    }
    return 0;
}