//Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el estudiante aprobó o no.
#include <iostream>
using namespace std;
double nota1, nota2, nota3;
double promedio;

int main(){
    cout << "por favor ingresa tus notas";
    cout << "ingresa la primera nota: ";
    cin >> nota1;
    cout << "ingresa la segunda nota: ";
    cin >> nota2;
    cout << "ingresa la tercera nota: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3)/3.0;

    if (promedio >= 7.0) {
        cout << "aprobado" << endl;
    } else {
        cout << "desaprobado" << endl;

        cout << "promedio" << promedio << endl;
    }
return 0;
}