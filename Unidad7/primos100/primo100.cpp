//Desarrollar un Programa que:
//b)Realizar un Programa Que rellene un array con los números primos comprendidos entre 1 y 100 y los muestre en pantalla
#include <iostream>
using namespace std;

int main() {
  // Muestra los primos entre 1 y 100
    cout << "Los números primos entre 1 y 100 son:" << endl;
  // Comienza del 2 que es el primer primo
    for (int num = 2; num <= 100; num++) {
        bool esPrimo = true;
        for (int i = 2; i * i <= num; i++) {
            // se verifica si es divisible
            if (num % i == 0) {
                // Si es divisible, no es primo
                esPrimo = false;
                break;
            }
        }
        // si es primo lo imprimimos
        if (esPrimo) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
