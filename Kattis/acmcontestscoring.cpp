/*
Problem: ACM Contest Scoring
URL: https://open.kattis.com/problems/acm
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

struct ProblemInfo {
    int incorrect_attempts = 0;
    int solve_time = 0;
    bool is_solved = false;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<char, ProblemInfo> stats;

    int time;
    while (cin >> time && time != -1) {
        char problem; string status;
        cin >> problem >> status;

        // Ignorar envios posteriores a problemas ya resueltos
        if (stats[problem].is_solved) continue;

        if (status == "right") {
            stats[problem].is_solved = true;
            stats[problem].solve_time = time;
        } else {
            stats[problem].incorrect_attempts++;
        }
    }

    int problemsSolved = 0, totalTime = 0;
    for (auto const& [p, info] : stats) {
        if (info.is_solved) {
            problemsSolved++;
            totalTime += info.solve_time + (info.incorrect_attempts * 20);
        }
    }
    
    cout << problemsSolved << " " << totalTime << "\n";
    
    return 0;
}