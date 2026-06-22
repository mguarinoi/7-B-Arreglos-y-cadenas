#include <iostream>
using namespace std;

void imprimir(int freq[], int P) {
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << freq[i] << "\n";
    }
}

int main() {
    int P, n;
    cin >> P >> n;

    int freq[105] = {};

    for (int i = 0; i < n; i++) {
        int F;
        cin >> F;
        freq[F]++;
    }

    imprimir(freq, P);

    return 0;
}