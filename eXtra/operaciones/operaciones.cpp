
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float opcion, numero;
    float suma = 0;
    float resta = 0;
    float multiplicacion = 0;
    float division = 0;
    int count = 0;

    while (count <= 100,000.000) {
        cin >> numero;
        suma = suma + numero;
        resta = resta - numero;
        multiplicacion = multiplicacion * numero;
        division = division / numero;
        count++;
    }

    cout << "Ingrese la opción deseada:\n";
    cout << "1. suma\n";
    cout << "2. resta\n";
    cout << "3. multiplicación\n";
    cout << "4. división\n";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese número para la suma: ";
        cin >> numero;
        suma = suma + numero;
        cout << "El resultado de la suma es: " << suma << endl;
    }
    else if (opcion == 2) {
        cout << "Ingrese número para la resta: ";
        cin >> numero;
        resta = resta - numero;
        cout << "El resultado de la resta es: " << resta << endl;
    }
    else if (opcion == 3) {
        cout << "Ingrese número para la multiplicación: ";
        cin >> numero;
        multiplicacion = multiplicacion * numero;
        cout << "El resultado de la multiplicación es: " << multiplicacion << endl;
    }
    else if (opcion == 4) {
        cout << "Ingrese número para la división: ";
        cin >> numero;
        division = division / numero;
        cout << "El resultado de la división es: " << division << endl;
    }
    else {
        cout << "Opción inválida.\n";
    }

    return 0;
}
