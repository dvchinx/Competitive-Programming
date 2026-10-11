#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    long long W;
    if (!(cin >> N >> W)) return 0;

    vector<long long> A(N); // Ganancias
    vector<long long> B(N); // Pesos

    for (int i = 0; i < N; ++i) {
        cin >> A[i] >> B[i];
    }

    long long max_ganancia = 0;
    // 1 << N calcula 2^N de forma eficiente usando desplazamientos de bits
    int total_combinaciones = 1 << N;

    // Evaluamos cada una de las 2^N combinaciones posibles
    for (int mask = 0; mask < total_combinaciones; ++mask) {
        long long peso_actual = 0;
        long long ganancia_actual = 0;

        for (int i = 0; i < N; ++i) {
            // Si el i-ésimo bit está encendido, incluir el elemento 'i'
            if ((mask >> i) & 1) {
                peso_actual += B[i];
                ganancia_actual += A[i];
            }
        }

        // Si la combinación es válida (peso <= W), actualizar el máximo
        if (peso_actual <= W) {
            max_ganancia = max(max_ganancia, ganancia_actual);
        }
    }
    cout << max_ganancia << "\n";

    return 0;
}