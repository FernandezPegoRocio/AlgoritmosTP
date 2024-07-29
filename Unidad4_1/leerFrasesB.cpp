//Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero de texto llamado “frasesDeBjarme.txt”.
//Terminará cuando la frase introducida sea &quot;fin&quot; (esa frase no deberá guardarse en el fichero).
//Luego Abrir el archivo y mostrar las frases x pantalla, con cada frase en una línea, con Interlineado.
using namespace std;
#include <iostream>		
#include <fstream>
#include <string>

int main() {
  string filename = "frasesDeBjarme.txt"; 
  ofstream archivo(filename.c_str(), ios::app); 

    if (!archivo.is_open()) { 
        cerr << "Lo siento, hubo un error al abrir el archivo " << filename << endl;
        return 1;
    }

    string frase;
    cout << "Introduce frases. Una vez que quieras terminar escribe la palabra 'fin'." << endl;

    while (true) {
        cout << "Frase de Bjarne Stroustrup: ";
        getline(cin, frase);

        if (frase == "fin") {
            break; 

        archivo << frase << endl; 
    }

    archivo.close(); 

    cout << "Se han guardado las frases en " << filename << endl;

    ifstream archivo_lectura(filename);
    if (!archivo_lectura.is_open()){
    cerr << "Lamentamos no poder abrir el archivo" << filename << "para poder leerlo." << endl;
    return 1;
    }
    string linea;
    cout << "\nMostrando las frases de Bjarne Stroustrup:" << endl;
    while (getline(archivo_lectura, linea)) {
    cout << linea << endl;
    cout << endl;
    }

    archivo_lectura.close();

    return 0;
}