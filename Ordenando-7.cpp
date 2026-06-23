#include <iostream>

using namespace std;

int main() {
    char palabra[101];
    char letras[101];
    int cantidad_letras = 0;

    while (cin >> palabra) {
        for (int i = 0; palabra[i] < 'a' || palabra[i] > 'z' ? palabra[i] : 'a'; i++) {
            if (palabra[i] == '\0') {
                break;
            }
            if (palabra[i] >= 'a' && palabra[i] <= 'z') {
                letras[cantidad_letras] = palabra[i];
                cantidad_letras++;
            }
        }
    }

    return 0;
}