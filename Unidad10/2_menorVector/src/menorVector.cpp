#include "../include/menorVector.hpp"
#include <iostream>

namespace Numeros {
    void MenorVector::generar(int numeros[], int tamano) {
        std::cout << "Introduce " << tamano << " números:" << std::endl;
        for (int i = 0; i < tamano; i++) {
            std::cin >> numeros[i]; 
        }
    }

    int MenorVector::encontrarMenor(int *numeros, int tamano) {
        int menor = *numeros; 
        for (int i = 1; i < tamano; i++) {
            if (*(numeros + i) < menor) {
                menor = *(numeros + i); 
            }
        }
        return menor;
    }
}
