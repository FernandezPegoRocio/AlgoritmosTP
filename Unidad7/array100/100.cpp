//Desarrollar un Programa que:
//a)Realizar un programa Que rellene un array con los 100 primeros números enteros y los muestre en pantalla
#include <iostream>
using namespace std;

int main() {
    // Crear un array para almacenar los 100 primeros números enteros
    int numeros[100];

    // Llenar el array con los números del 1 al 100
    for (int i = 0; i < 100; i++) {
        // Para asignar el número entero correspondiente
        numeros[i] = i + 1; 
    }

    // Mostrar pantalla
    cout << "Los primeros 100 números enteros son:" << endl;
    for (int i = 0; i < 100; i++) {
        // Imprimir el número
        cout << numeros[i] << " "; 
    }
    cout << endl; // Nueva línea al final

    return 0; 
}
