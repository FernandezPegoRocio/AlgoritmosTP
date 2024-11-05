#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

void ingresarDatos(Estudiante* estudiantes, int numEstudiantes);
Estudiante* encontrarMejorEstudiante(Estudiante* estudiantes, int numEstudiantes);

#endif 


