#include <iostream>

using namespace std;

int main() {
    char texto[101];
    int conteo[26] = {0}; 
    int total_caracteres = 0;

    char c;
    while (cin >> c) {
        texto[total_caracteres] = c;
        total_caracteres++;
        if (c >= 'a' && c <= 'z') {
            conteo[c - 'a']++;
        }
    }

    int letra_actual = 0;
    for (int i = 0; i < total_caracteres; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            while (conteo[letra_actual] == 0) {
                letra_actual++;
            }
            cout << (char)(letra_actual + 'a');
            conteo[letra_actual]--;
        } else {
            cout << texto[i];
        }
    }

    return 0;
}