#include <iostream>
#include "../include/contadorVocal.hpp"

using namespace std;

int main() {
    const int MAX_LENGTH = 100;
    char cadena[MAX_LENGTH];

    cout << "Introduce una cadena (max 100 caracteres): ";
    cin.getline(cadena, MAX_LENGTH);

    int a, e, i, o, u;
    Contador::CadenaVocal::contarVocales(cadena, a, e, i, o, u);

    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    int contadores[] = {a, e, i, o, u};

    cout << "Cantidad de vocales:\n";
    for (int j = 0; j < 5; j++) {
        cout << vocales[j] << ": " << contadores[j] << endl;
    }

    return 0;
}

