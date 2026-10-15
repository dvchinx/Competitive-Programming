/*
Problem: Danish Date Format
URL: https://open.kattis.com/problems/danishdateformat
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    unordered_map<string, string> months = {
        {"01", "januar"}, {"02", "februar"}, {"03", "marts"},
        {"04", "april"}, {"05", "maj"}, {"06", "juni"},
        {"07", "juli"}, {"08", "august"}, {"09", "september"},
        {"10", "oktober"}, {"11", "november"}, {"12", "december"}
    };

    string month = s.substr(0, 2);

    if (s[3] != '0') cout << s[3];
    cout << s[4] << ". " << months[month] << " ";
    for (int i = 6; i < 10; ++i){
        cout << s[i];
    }
    cout << "\n";

    return 0;
}