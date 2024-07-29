//Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, 
//luego mostrar los números y el promedio.
#include <iostream>
using namespace std;

int main() {
    int num;
    int suma = 0;
    int numeros = 0;
    double promedio = 0.0;

    cout << "Por favor ingresa tus números. Usa el 99 para finalizar" << endl;
    
    while (true) {
        cin >> num;

        if (num == 99) {
            break; // Salir del bucle si se ingresa 99
        }

        suma += num;
        numeros++;
    }

    if (numeros > 0) {
        promedio = static_cast<double>(suma) / numeros;
    }

    cout << "Números ingresados:" << endl;
    for (int i = 0; i < numeros; ++i) {
        cout << "Número " << i + 1 << ": " << endl;
    }

    cout << "Promedio: " << promedio << endl;

    if (promedio >= 7.0) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Desaprobado" << endl;
    }

    return 0;
}