//Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero de texto llamado “frasesDeBjarme.txt”.
//Terminará cuando la frase introducida sea &quot;fin&quot; (esa frase no deberá guardarse en el fichero).
//Luego Abrir el archivo y mostrar las frases x pantalla, con cada frase en una línea, con Interlineado.
//Para el Archivo del ejercicio (a) contar la cantidad de palabras que hay x línea, 
//luego mostrar la cantidad total y el promedio de palabras x línea

using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>  


int main() {
    string filename = "frasesDeBjarme.txt";
    ofstream archivo(filename.c_str(), ios::app);

    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo " << filename << endl;
        return 1;
    }

    string frase;
    cout << "Introduce frases. Termina con la palabra 'fin'." << endl;

    while (true) {
        cout << "Frase de Bjarne Stroustrup: ";
        getline(cin, frase);

        if (frase == "fin") {
            break;
        }

        archivo << frase << endl;
    }

    archivo.close();

    cout << "Frases guardadas en " << filename << endl;

    ifstream archivo_lectura(filename);

    if (!archivo_lectura.is_open()) {
        cerr << "Error al abrir el archivo " << filename << " para lectura." << endl;
        return 1;
    }

   string linea;
    int totalPalabras = 0;
    int totalLineas = 0;

    cout << "\nMostrando las frases de Bjarne Stroustrup:" << endl;

    while (getline(archivo_lectura, linea)) {
        cout << linea << endl;
        totalLineas++;

        int palabrasEnLinea = 0;
        string palabra;
        istringstream ss(linea); 

        while (ss >> palabra) {
            palabrasEnLinea++;
        }

        cout << "En la línea " << totalLineas << " hay: " << palabrasEnLinea << " palabras" << endl;
        totalPalabras += palabrasEnLinea;
    }

    archivo_lectura.close(); 

    if (totalLineas > 0) {
        double promedioPalabrasPorLinea = static_cast<double>(totalPalabras) / totalLineas;
        cout << "\nCantidad total de palabras: " << totalPalabras << endl;
        cout << "Promedio de palabras por línea: " << promedioPalabrasPorLinea << endl;
    } else {
        cout << "El archivo está vacío." << endl;
    }

    return 0;
}