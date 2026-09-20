#include <bits/stdc++.h>
using namespace std;

struct Student {
    long long id_num;
    int score;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<char> answers(n);
    for (int i = 0; i < n; i++) cin >> answers[i];

    int m; cin >> m;
    
    vector<Student> students;
    students.reserve(m);

    while (m--) {
        long long id_num; cin >> id_num;
        
        int score = 0;
        for (int i = 0; i < n; i++) {
            char stdAnswer; cin >> stdAnswer;
            if (stdAnswer == answers[i]) {
                score++;
            }
        }
        students.push_back({id_num, score});
    }

    string order; cin >> order;
    if (order == "STUDENT_ID_ASC") {
        sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
            return a.id_num < b.id_num;
        });
    } else if (order == "STUDENT_ID_DESC") {
        sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
            return a.id_num > b.id_num;
        });
    } else if (order == "GRADE_ASC") {
        sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
            if (a.score != b.score) return a.score < b.score;
            return a.id_num < b.id_num;
        });
    } else if (order == "GRADE_DESC") {
        sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
            if (a.score != b.score) return a.score > b.score;
            return a.id_num < b.id_num;
        });
    }

    for (const auto& student : students) {
        cout << student.id_num << " " << student.score << "\n";
    }

    return 0;
}