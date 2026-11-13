/*
Problem: Alphabet Spam
URL: https://open.kattis.com/problems/alphabetspam
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    double n = s.length();

    double spc = 0, lwc = 0, upc = 0, sym = 0;
    for (double i = 0; i < n; ++i) {
        if (s[i] == '_') spc++;
        else if (islower(s[i])) lwc++;
        else if (isupper(s[i])) upc++;
        else sym++;
    }

    cout << fixed << setprecision(8) 
    << spc / n << '\n' 
    << lwc / n << '\n'
    << upc / n << '\n'
    << sym / n << '\n';

    return 0;
}