/*
Problem: Beekeper
URL: https://open.kattis.com/problems/beekeeper
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n != 0) {
        string mejorS = ""; int mejor = -1;
        while (n--) {
            string s; cin >> s;

            int cnt = 0;
            for (size_t i = 0; i+1 < s.size(); i++) {
                if (s[i] == 'a' || s[i] == 'e' || 
                    s[i] == 'i' || s[i] == 'o' || 
                    s[i] == 'u' || s[i] == 'y') {

                    if (s[i] == s[i+1]) {
                        cnt++;
                        i++;
                    }
                }
            }
            if (cnt > mejor) {
                mejorS = s;
                mejor = cnt;
            }
        }
        cout << mejorS << "\n";
    }
    return 0;
}