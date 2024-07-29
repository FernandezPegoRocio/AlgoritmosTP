//CORREGIDO
//Implementa un programa que permita realizar operaciones sobre matrices de NxN. 
//El programa debe permitir al usuario la selección de alguna de las siguientes operaciones:
//A Sumar 2 matrices.
//B Restar 2 matrices.
//C  Multiplicar 2 matrices.
//D Trasponer una matriz.
//E Mostrar una matriz señalando cuáles son los puntos de silla 
//(los puntos de silla de una matriz son aquellos elementos de la misma que cumplen ser el mínimo de su fila y el máximo de su columna).
//Habrá también dos subprogramas para leer del teclado o mostrar en la pantalla una matriz.
#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 100; // Tamaño máximo para las matrices

// Función para ingresar los elementos de una matriz
void ingresarMatriz(int matriz[][MAX_SIZE], int n) {
    cout << "Introduce los elementos de la matriz (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j]; // Lee el elemento de la matriz
        }
    }
}

// Función para mostrar una matriz en formato tabla
void mostrarMatriz(const int matriz[][MAX_SIZE], int n) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(5) << matriz[i][j] << " "; // Ajusta el formato de salida
        }
        cout << endl;
    }
}

// Función para sumar dos matrices
void sumaMatrices(const int matriz1[][MAX_SIZE], const int matriz2[][MAX_SIZE], int resultado[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j]; // Suma los elementos de las matrices
        }
    }
    mostrarMatriz(resultado, n); // Muestra la matriz resultado
}

// Función para restar dos matrices
void restaMatrices(const int matriz1[][MAX_SIZE], const int matriz2[][MAX_SIZE], int resultado[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j]; // Resta los elementos de las matrices
        }
    }
    mostrarMatriz(resultado, n); // Muestra la matriz resultado
}

// Función para multiplicar dos matrices
void multiplicarMatrices(const int matriz1[][MAX_SIZE], const int matriz2[][MAX_SIZE], int resultado[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = 0; // Inicializa el elemento de la matriz resultado
            for (int k = 0; k < n; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j]; // Multiplica y suma los elementos
            }
        }
    }
    mostrarMatriz(resultado, n); // Muestra la matriz resultado
}

// Función para transponer una matriz
void transponerMatriz(const int matriz[][MAX_SIZE], int transpuesta[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transpuesta[j][i] = matriz[i][j]; // Intercambia filas por columnas
        }
    }
    mostrarMatriz(transpuesta, n); // Muestra la matriz transpuesta
}

// Función para encontrar los puntos de silla en una matriz
void encontrarPuntosDeSilla(const int matriz[][MAX_SIZE], int n) {
    bool encontrado = false; // Bandera para verificar si se encontró algún punto de silla
    for (int i = 0; i < n; ++i) {
        int filaMin = matriz[i][0];
        int colMin = 0;
        for (int j = 1; j < n; ++j) {
            if (matriz[i][j] < filaMin) {
                filaMin = matriz[i][j];
                colMin = j;
            }
        }
        bool esPuntoDeSilla = true;
        for (int k = 0; k < n; ++k) {
            if (matriz[k][colMin] > filaMin) {
                esPuntoDeSilla = false;
                break;
            }
        }
        if (esPuntoDeSilla) {
            cout << "Punto de silla encontrado en (" << i << ", " << colMin << ") con valor " << filaMin << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron puntos de silla." << endl;
    }
}

int main() {
    int n, opcion;
    int matriz1[MAX_SIZE][MAX_SIZE], matriz2[MAX_SIZE][MAX_SIZE], resultado[MAX_SIZE][MAX_SIZE];

    cout << "Ingrese el tamaño de la matriz (NxN): ";
    cin >> n;

    cout << "Seleccione una operación:\n";
    cout << "1. Sumar 2 matrices\n";
    cout << "2. Restar 2 matrices\n";
    cout << "3. Multiplicar 2 matrices\n";
    cout << "4. Trasponer una matriz\n";
    cout << "5. Mostrar puntos de silla\n";
    cin >> opcion;

    cout << "Ingrese los elementos de la primera matriz:\n";
    ingresarMatriz(matriz1, n);

    switch (opcion) {
        case 1:
            cout << "Ingrese los elementos de la segunda matriz:\n";
            ingresarMatriz(matriz2, n);
            sumaMatrices(matriz1, matriz2, resultado, n);
            break;
        case 2:
            cout << "Ingrese los elementos de la segunda matriz:\n";
            ingresarMatriz(matriz2, n);
            restaMatrices(matriz1, matriz2, resultado, n);
            break;
        case 3:
            cout << "Ingrese los elementos de la segunda matriz:\n";
            ingresarMatriz(matriz2, n);
            multiplicarMatrices(matriz1, matriz2, resultado, n);
            break;
        case 4:
            transponerMatriz(matriz1, resultado, n);
            break;
        case 5:
            encontrarPuntosDeSilla(matriz1, n);
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}

