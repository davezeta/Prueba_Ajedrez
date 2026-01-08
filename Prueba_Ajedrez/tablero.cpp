#include <iostream>
#include "tablero.h"

using namespace std;

void inicializarTablero(char tablero[N][N]) {
    for (int fil = 0; fil < N; fil++) {
        for (int col = 0; col < N; col++) {
            tablero[fil][col] = VACIA;
        }
    }

    // blancas
    tablero[7][0] = 'T';
    tablero[7][1] = 'H';
    tablero[7][2] = 'B';
    tablero[7][3] = 'K';
    tablero[7][4] = 'Q';
    tablero[7][5] = 'B';
    tablero[7][6] = 'H';
    tablero[7][7] = 'T';

    // peones
    for (int col = 0; col < N; col++) {
        tablero[6][col] = 'P';
    }

    // negras
    tablero[0][0] = 't';
    tablero[0][1] = 'h';
    tablero[0][2] = 'b';
    tablero[0][3] = 'k';
    tablero[0][4] = 'q';
    tablero[0][5] = 'b';
    tablero[0][6] = 'h';
    tablero[0][7] = 't';

    for (int col = 0; col < N; col++) {
        tablero[1][col] = 'p';
    }
}
void mostrarTablero(char tablero[N][N]) {
    cout << "  ";
    for (int col = 0; col < N; col++) {
        cout << col + 1 << " ";
    }
    cout << endl;

    for (int fil = 0; fil < N; fil++) {
        cout << (N - fil) << " ";
        for (int col = 0; col < N; col++) {
            cout << tablero[fil][col] << " ";
        }
        cout << endl;
    }
}
