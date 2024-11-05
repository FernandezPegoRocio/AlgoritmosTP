#ifndef MATRIZDINAMICA_HPP
#define MATRIZDINAMICA_HPP

void crearMatriz(int **&matriz, int filas, int columnas);
void liberarMatriz(int **matriz, int filas);
void ingresarMatriz(int **matriz, int filas, int columnas);
void sumarMatrices(int **matriz1, int **matriz2, int **resultado, int filas, int columnas);
void mostrarMatriz(int **matriz, int filas, int columnas);

#endif 

