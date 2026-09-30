/*
Problem: Arm Coordination
URL: https://open.kattis.com/problems/armcoordination
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, r;
    cin >> x >> y >> r;

    cout <<
        x-r << " " << y-r << "\n" <<
        x-r << " " << y+r << "\n" <<
        x+r << " " << y+r << "\n" <<
        x+r << " " << y-r;
         
    return 0;
}