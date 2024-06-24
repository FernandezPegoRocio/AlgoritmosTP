//Realice un programa que lea de la entrada estándar los siguientes datos de una persona: 
//Edad: dato de tipo entero. 
//Sexo: dato de tipo carácter. 
//Altura en metros: dato de tipo real. 
//Tras leer los datos, el programa debe mostrarlos en la salida estándar.
#include <iostream>
#include <cmath>
using namespace std;

// el programa pedira los datos de cada uno para armar una ficha
int edad;
//sexo de nacimiento, figura en DNI
char sexo;
// vamos a usar coma
float altura;

int main (){
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cin.ignore();
//un compañero me recomendo usar el cin.ignore
//el el libro decia que Omitir caracteres con la función ignore
// La función ignore se emplea para omitir 
//(leer y descartar) caracteres en el flujo de entrada.
//Es una función con dos argumentos, llamada de esta manera:
// cin.ignore(200, '\n');
    
    cout << "Ingresa tu sexo de nacimiento F/M: ";
    cin >> sexo;
    cin.ignore();
    
    cout << "Ingresa tu altura en metros: ";
    cin >> altura;
    cin.ignore();

    cout << "Datos ingresados por el usuario:" << endl;
    cout << "Tu edad es: " << edad << endl;
    cout << "Tu sexo de nacimiento es: " << sexo << endl;
    cout << "Tu altura es: " << altura << " metros" << endl;
    
    return 0;
}


