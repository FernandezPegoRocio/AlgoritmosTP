#include <iostream>
#include "../include/estudiante.hpp"

using namespace std;

int main() {
    const int NUM_ESTUDIANTES = 3;
    Estudiante estudiantes[NUM_ESTUDIANTES]; 

    ingresarDatos(estudiantes, NUM_ESTUDIANTES);

    Estudiante* mejorEstudiante = encontrarMejorEstudiante(estudiantes, NUM_ESTUDIANTES);

    cout << "El estudiante con el mejor promedio es:\n";
    cout << "Nombre: " << mejorEstudiante->nombre << endl;
    cout << "Edad: " << mejorEstudiante->edad << endl;
    cout << "Promedio: " << mejorEstudiante->promedio << endl;

    return 0;
}
