#include <iostream>
#include "../include/numerosPares.hpp"

using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int pares[MAX_SIZE];
    int tamano;

   
    Numeros::Pares::generar(pares, tamano);

    
    Numeros::Pares::mostrarPares(pares, tamano);

    return 0;
}
