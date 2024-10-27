#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>
using std::string;

class Estudiante {
public:
    string nombre;
    string carrera;
    int anio;

    Estudiante();
    Estudiante(const string& nombre, const string& carrera, int anio);

    // Operadores de comparación
    friend bool operator>(const Estudiante& izq, const Estudiante& der);
    friend bool operator<(const Estudiante& izq, const Estudiante& der);
};

#endif
