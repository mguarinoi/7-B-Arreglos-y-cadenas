#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P >> n;

    int freq[105] = {};

    for (int i = 0; i < n; i++) {
        int F;
        cin >> F;
        freq[F]++;
    }

    for (int i = 1; i <= P; i++) {
        cout << i << "-" << freq[i] << "\n";
    }

    return 0;
}