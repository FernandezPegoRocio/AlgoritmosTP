#include <iostream>
#include "../include/menorVector.hpp"

int main() {
    int tamano;

    std::cout << "Introduce la cantidad de números que deseas ingresar: ";
    std::cin >> tamano;

    int* numeros; 

    Numeros::MenorVector::generar(numeros, tamano); 
    Numeros::MenorVector::ordenar(numeros, tamano); 
    Numeros::MenorVector::mostrar(numeros, tamano); 

    delete[] numeros; 
    return 0;
}
