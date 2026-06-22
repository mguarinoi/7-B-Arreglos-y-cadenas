#include <iostream>
using namespace std;

void imprimir(int freq[], int V) {
    for (int i = 1; i <= V; i++) {
        cout << freq[i] << "\n";
    }
}

int main() {
    int V, C;
    cin >> V >> C;

    int freq[1005] = {};

    for (int i = 0; i < C; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    imprimir(freq, V);

    return 0;
}