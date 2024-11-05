#include "../include/numerosPares.hpp"
#include <iostream>

namespace Numeros {
    void Pares::generar(int pares[], int &tamano) {
        tamano = 10; 
        for (int i = 0; i < tamano; i++) {
            pares[i] = i * 2; 
        }
    }

    void Pares::mostrarPares(int *pares, int tamano) {
        std::cout << "Números pares y sus posiciones en memoria:" << std::endl;
        for (int i = 0; i < tamano; i++) {
            std::cout << "Número: " << pares[i] << ", Posición en memoria: " << (pares + i) << std::endl;
        }
    }
}
