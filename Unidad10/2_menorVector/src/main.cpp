#include <iostream>
#include "../include/menorVector.hpp"

int main() {
    const int TAMANO = 5; 
    int numeros[TAMANO];

    Numeros::MenorVector::generar(numeros, TAMANO); 
    int menor = Numeros::MenorVector::encontrarMenor(numeros, TAMANO);

    std::cout << "El menor número es: " << menor << std::endl;

    return 0;
}
