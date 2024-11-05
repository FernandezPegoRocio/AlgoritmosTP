#include "../include/estudiante.hpp"
#include <iostream>

using namespace std;

void ingresarDatos(Estudiante* estudiantes, int numEstudiantes) {
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Ingrese los datos del estudiante " << (i + 1) << ":\n";
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;
        cout << endl;
    }
}

Estudiante* encontrarMejorEstudiante(Estudiante* estudiantes, int numEstudiantes) {
    Estudiante* mejorEstudiante = &estudiantes[0]; 
    for (int i = 1; i < numEstudiantes; i++) {
        if (estudiantes[i].promedio > mejorEstudiante->promedio) {
            mejorEstudiante = &estudiantes[i]; 
        }
    }
    return mejorEstudiante; 
}
