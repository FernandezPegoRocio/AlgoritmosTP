#ifndef MATRIZTRASPUERTA_HPP
#define MATRIZTRASPUERTA_HPP

void crearMatriz(int **&matriz, int filas, int columnas);
void liberarMatriz(int **matriz, int filas);
void ingresarMatriz(int **matriz, int filas, int columnas);
void crearMatrizTraspuesta(int **matriz, int **&matrizTraspuesta, int filas, int columnas);
void mostrarMatriz(int **matriz, int filas, int columnas);

#endif 

