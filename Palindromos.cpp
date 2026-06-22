#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    char palabra[105];

    while (N--) {
        cin >> palabra;

        int len = 0;
        while (palabra[len] != '\0') {
            len++;
        }

        bool palindromo = true;

        for (int i = 0; i < len; i++) {
            if (palabra[i] != palabra[len - 1 - i]) {
                palindromo = false;
            }
        }

        if (palindromo)
            cout << "P" << endl;
        else
            cout << "NP" << endl;
    }

    return 0;
}