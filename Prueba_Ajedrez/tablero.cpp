#include <iostream>
#include "tablero.h"

using namespace std;

void inicializarTablero(char tablero[N][N]) {
    for (int fil = 0; fil < N; fil++) {
        for (int col = 0; col < N; col++) {
            tablero[fil][col] = VACIA;
        }
    }
}

void mostrarTablero(char tablero[N][N]) {
    cout << "\n   ";
    for (int col = 0; col < N; col++) {
        cout << col + 1 << " ";
    }
    cout << "\n";

    for (int fil = 0; fil < N; fil++) {
        cout << fil + 1 << "  ";
        for (int col = 0; col < N; col++) {
            cout << tablero[fil][col] << " ";
        }
        cout << "\n";
    }
}
