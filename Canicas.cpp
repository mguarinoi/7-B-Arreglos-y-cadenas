#include <iostream>
using namespace std;

int main() {
    int V, C;
    cin >> V >> C;

    int freq[1005] = {0};

    for (int i = 0; i < C; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= V; i++) {
        cout << freq[i] << "\n";
    }

    return 0;
}