#include "../include/matrizDinamica.hpp"
#include <iostream>

using namespace std;

void crearMatriz(int **&matriz, int filas, int columnas) {
    matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas]();
    }
}

void liberarMatriz(int **matriz, int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

void ingresarMatriz(int **matriz, int filas, int columnas) {
    cout << "Introduce los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void sumarMatrices(int **matriz1, int **matriz2, int **resultado, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void mostrarMatriz(int **matriz, int filas, int columnas) {
    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl;
    }
}
