#include <iostream>

using namespace std;

int main() {
    char palabra[101];
    char letras[101];
    int cantidad_letras = 0;

    while (cin >> palabra) {
        for (int i = 0; ; i++) {
            if (palabra[i] == '\0') {
                break;
            }
            if (palabra[i] >= 'a' && palabra[i] <= 'z') {
                letras[cantidad_letras] = palabra[i];
                cantidad_letras++;
            }
        }
    }

    for (int i = 0; i < cantidad_letras - 1; i++) {
        for (int j = i + 1; j < cantidad_letras; j++) {
            if (letras[i] > letras[j]) {
                char temporal = letras[i];
                letras[i] = letras[j];
                letras[j] = temporal;
            }
        }
    }

    return 0;
}