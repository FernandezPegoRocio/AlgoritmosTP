//realizar un programa para saber si el numero es primo
#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    int numero;
    //el while no funciono
    //el bool es el que determina si es o no es
    bool esPrimo = true;
// entrada del numero
    cout << "Ingresa un número para saber si es primo: ";
    cin >> numero;
//sentencia si el numero es menor o =a1
    if (numero <= 1) {
        esPrimo = false;
//si el numero es divisible entre mas de dos no es primo
//tube que usar i y no a ni b
    } else {
        for (int i = 2; i <= sqrt(numero); ++i) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
// lo habia terminado antes falto la sentencia de declaracion del programa
//al finalizar dice si es o no es primo
    if (esPrimo) {
        cout << "El número es primo." << endl;
    } else {
        cout << "El número no es primo." << endl;
    }

    return 0;
}
