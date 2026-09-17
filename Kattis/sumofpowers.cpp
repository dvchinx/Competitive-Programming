/*
Problem: Sum of Powers
URL: https://open.kattis.com/problems/sumofpowers
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

typedef vector<long long> Big;          // little-endian, base 1e9
const long long BASE = 1000000000LL;

void trim(Big &a) {
    while (a.size() > 1 && a.back() == 0) a.pop_back();
}

// a *= m  (m pequeño, 0..100)
void mulSmall(Big &a, long long m) {
    if (m == 0) { a.assign(1, 0); return; }
    long long carry = 0;
    for (auto &d : a) {
        long long t = d * m + carry;
        d = t % BASE;
        carry = t / BASE;
    }
    while (carry) { a.push_back(carry % BASE); carry /= BASE; }
}

// acc += a * m
void addMul(Big &acc, const Big &a, long long m) {
    if (acc.size() < a.size()) acc.resize(a.size(), 0);
    long long carry = 0;
    size_t i = 0;
    for (; i < a.size(); i++) {
        long long t = acc[i] + a[i] * m + carry;
        acc[i] = t % BASE;
        carry = t / BASE;
    }
    for (; carry; i++) {
        if (i == acc.size()) acc.push_back(0);
        long long t = acc[i] + carry;
        acc[i] = t % BASE;
        carry = t / BASE;
    }
}

int cmpBig(const Big &a, const Big &b) {
    if (a.size() != b.size()) return a.size() < b.size() ? -1 : 1;
    for (int i = (int)a.size() - 1; i >= 0; i--)
        if (a[i] != b[i]) return a[i] < b[i] ? -1 : 1;
    return 0;
}

// a -= b  (requiere a >= b)
void subBig(Big &a, const Big &b) {
    long long borrow = 0;
    for (size_t i = 0; i < a.size(); i++) {
        long long t = a[i] - borrow - (i < b.size() ? b[i] : 0);
        if (t < 0) { t += BASE; borrow = 1; } else borrow = 0;
        a[i] = t;
    }
    trim(a);
}

void printBig(const Big &a) {
    printf("%lld", a.back());
    for (int i = (int)a.size() - 2; i >= 0; i--) printf("%09lld", a[i]);
    printf("\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k;
    int n;
    cin >> k >> n;

    vector<int> cnt(2001, 0);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }

    long long a = llabs(k);
    Big cur{1}, pos{0}, neg{0};

    for (int e = 0; e <= mx; e++) {
        if (e > 0) mulSmall(cur, a);             // cur = |k|^e
        if (cnt[e]) {
            if (k < 0 && (e & 1)) addMul(neg, cur, cnt[e]);
            else                  addMul(pos, cur, cnt[e]);
        }
    }

    trim(pos); trim(neg);
    int c = cmpBig(pos, neg);
    if (c == 0) {
        printf("0\n");
    } else if (c > 0) {
        subBig(pos, neg);
        printBig(pos);
    } else {
        subBig(neg, pos);
        printf("-");
        printBig(neg);
    }
    return 0;
}