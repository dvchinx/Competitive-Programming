#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    int original = x;
    int reversed = 0;

    while (x > 0) {
        reversed = (reversed*10) + x%10;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool res = isPalindrome(121);

    cout << (res == 0 ? "false" : "true") << "\n";

    return 0;
}