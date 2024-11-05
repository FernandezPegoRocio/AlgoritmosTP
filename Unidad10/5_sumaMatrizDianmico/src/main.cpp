#include <iostream>
#include "../include/matrizDinamica.hpp"

using namespace std;

int main() {
    int filas, columnas;

    cout << "====================================\n";
    cout << "       Suma de Matrices\n";
    cout << "====================================\n";
    
    cout << "Introduce el número de filas: ";
    cin >> filas;
    cout << "Introduce el número de columnas: ";
    cin >> columnas;

    int **matriz1, **matriz2, **resultado;

    crearMatriz(matriz1, filas, columnas);
    crearMatriz(matriz2, filas, columnas);
    crearMatriz(resultado, filas, columnas);

    cout << "\n--- Ingreso de Matriz 1 ---\n";
    ingresarMatriz(matriz1, filas, columnas);
    
    cout << "\n--- Ingreso de Matriz 2 ---\n";
    ingresarMatriz(matriz2, filas, columnas);

    sumarMatrices(matriz1, matriz2, resultado, filas, columnas);

    mostrarMatriz(resultado, filas, columnas);

    liberarMatriz(matriz1, filas);
    liberarMatriz(matriz2, filas);
    liberarMatriz(resultado, filas);

    cout << "\nGracias, por probar la suma!\n";
    return 0;
}
