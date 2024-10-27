//Desarrollar un Programa que:
//c)Realizar un Programa Que rellene un array con los números impares comprendidos entre 1 y 100 y los muestre en pantalla
#include <iostream>
using namespace std;

int main() {
    // Array para almacenar los números impares
    // Hay 50 impares entre 1 y 100
    int impares[50];
    int contador = 0;

    // Completamos con números impares de 1 a 100
    // Comienza en 1 y se incrementa de 2 en 2
    for (int num = 1; num < 100; num += 2) {
        // Guardar el impar
        impares[contador] = num;
        // Incrementar el contador
        contador++;
    }

    // Muestra los números impares
    cout << "Los números impares entre 1 y 100 son:" << endl;
    for (int i = 0; i < contador; i++) {
        // Imprimir solo impar
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}
