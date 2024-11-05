#include "../include/menorVector.hpp"
#include <iostream>

namespace Numeros {
    void MenorVector::generar(int* &numeros, int tamano) {
        numeros = new int[tamano]; 
        std::cout << "Introduce " << tamano << " números:" << std::endl;
        for (int i = 0; i < tamano; i++) {
            std::cin >> numeros[i]; 
        }
    }

    void MenorVector::ordenar(int* numeros, int tamano) {
        for (int i = 0; i < tamano - 1; i++) {
            for (int j = 0; j < tamano - i - 1; j++) {
                if (numeros[j] > numeros[j + 1]) {
                    numeros[j] = numeros[j] + numeros[j + 1];
                    numeros[j + 1] = numeros[j] - numeros[j + 1];
                    numeros[j] = numeros[j] - numeros[j + 1];
                }
            }
        }
    }

    void MenorVector::mostrar(int* numeros, int tamano) {
        std::cout << "Números en orden ascendente:" << std::endl;
        for (int i = 0; i < tamano; i++) {
            std::cout << numeros[i] << " ";
        }
        std::cout << std::endl;
    }
}
