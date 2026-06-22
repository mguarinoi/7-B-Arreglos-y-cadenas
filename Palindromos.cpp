#include <iostream>
using namespace std;

bool esPalindromo(char palabra[]) {
    int len = 0;
    while (palabra[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (palabra[i] != palabra[len - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    char palabra[105];

    while (N--) {
        cin >> palabra;

        if (esPalindromo(palabra))
            cout << "P" << endl;
        else
            cout << "NP" << endl;
    }

    return 0;
}