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
    cout << "   ";
    for (int col = 0; col < N; col++) {
        cout << col + 1 << " ";
    }
    cout << endl;

    for (int fil = 0; fil < N; fil++) {
        cout << (N - fil) << "  ";
        for (int col = 0; col < N; col++) {
            cout << tablero[fil][col] << " ";
        }
        cout << "\n";
    }
}
