// main.cpp
#include <iostream>
#include "Numeros.hpp"

using namespace std;

int main() {
    int opcion;
    int tam = 50;
    int array[100]; // Suficiente tamaño para cualquiera de los arreglos

    cout << "Seleccione una opción:" << endl;
    cout << "1. Mostrar los primeros 100 números enteros" << endl;
    cout << "2. Mostrar los números impares entre 1 y 100" << endl;
    cout << "3. Mostrar los números primos entre 1 y 100" << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            Numeros::llenarEnteros(array, 100);
            Numeros::mostrarArray(array, 100);
            break;
        case 2:
            Numeros::llenarImpares(array, tam);
            Numeros::mostrarArray(array, tam);
            break;
        case 3:
            Numeros::llenarPrimos(array, tam);
            Numeros::mostrarArray(array, tam);
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}
