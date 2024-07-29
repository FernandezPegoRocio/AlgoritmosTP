//Escribe un programa que lea del teclado una frase y a continuación visualice las palabras de la frase en columna
//seguida cada una del número de letras que la componen.
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Variables
    string frase;
    string palabra;
    
    //Inicialización
    cout << "Introduce la frase que te gusta. Termina con la palabra 'fin'." << endl;

    // Leer frase del teclado
    cout << "Frase escrita: ";
    getline(cin, frase);

    // Salir si la frase es 'fin'
    if (frase == "fin") {
        cout << "No se introdujo ninguna frase válida." << endl;
        return 0;
    }

    // Usar stringstream para separar la frase en palabras
    istringstream ss(frase);
    //La frase escrita tiene la longitud de la columna
    cout << "\nPalabras y su longitud:" << endl;
    cout << setw(20) << "Palabra" << setw(10) << "Longitud" << endl;
    
    // Procesar cada palabra de la frase
    while (ss >> palabra) {
        cout << setw(20) << palabra << setw(10) << palabra.length() << endl;
    }

    return 0;
}