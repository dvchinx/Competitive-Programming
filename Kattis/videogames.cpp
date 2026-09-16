#include <bits/stdc++.h>
using namespace std;

// Mi solución en O(N)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    if (!(cin >> N)) return 0;

    // Usamos unordered_set para búsquedas, inserciones y borrados en O(1)
    unordered_set<string> gamesAlice = {"fishing"};
    unordered_set<string> gamesBob = {"golf"};
    unordered_set<string> gamesCharlie = {"hockey"};

    while (N--) {
        string name; cin >> name;
        cin.ignore(15);
        string game; cin >> game;

        // alice
        if (name == "alice") {
            if (gamesAlice.count(game)) {
                cout << "alice already has " << game << "\n";
            } else if (gamesBob.count(game)) {
                cout << "alice borrows " << game << " from bob" << "\n";
                gamesAlice.insert(game);
                gamesBob.erase(game);
            } else if (gamesCharlie.count(game)) {
                cout << "alice borrows " << game << " from charlie" << "\n";
                gamesAlice.insert(game);
                gamesCharlie.erase(game);
            }

        // bob
        } else if (name == "bob") {
            if (gamesBob.count(game)) {
                cout << "bob already has " << game << "\n";
            } else if (gamesAlice.count(game)) {
                cout << "bob borrows " << game << " from alice" << "\n";
                gamesBob.insert(game);
                gamesAlice.erase(game);
            } else if (gamesCharlie.count(game)) {
                cout << "bob borrows " << game << " from charlie" << "\n";
                gamesBob.insert(game);
                gamesCharlie.erase(game);
            }
        
        // charlie
        } else if (name == "charlie") {
            if (gamesCharlie.count(game)) {
                cout << "charlie already has " << game << "\n";
            } else if (gamesAlice.count(game)) {
                cout << "charlie borrows " << game << " from alice" << "\n";
                gamesCharlie.insert(game);
                gamesAlice.erase(game);
            } else if (gamesBob.count(game)) {
                cout << "charlie borrows " << game << " from bob" << "\n";
                gamesCharlie.insert(game);
                gamesBob.erase(game);
            }
        } 
    }

    return 0;
}