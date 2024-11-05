#include <iostream>
#include "../include/matrizTraspuesta.hpp"

using namespace std;

int main() {
    int filas, columnas;

    cout << "======================================================\n";
    cout << "                 Matriz y su Traspuesta\n";
     cout << "La matriz es la que cambia las filas por las columnas\n";
    cout << "======================================================\n";
    
    cout << "Introduce el número de filas: ";
    cin >> filas;
    cout << "Introduce el número de columnas: ";
    cin >> columnas;

    int **matriz, **matrizTraspuesta;

    crearMatriz(matriz, filas, columnas);

    ingresarMatriz(matriz, filas, columnas);

    crearMatrizTraspuesta(matriz, matrizTraspuesta, filas, columnas);

    mostrarMatriz(matriz, filas, columnas);

    mostrarMatriz(matrizTraspuesta, columnas, filas);

    liberarMatriz(matriz, filas);
    liberarMatriz(matrizTraspuesta, columnas);

    cout << "\nGracias\n";
    return 0;
}
