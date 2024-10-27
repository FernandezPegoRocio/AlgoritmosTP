#include "estudiante.hpp"

Estudiante::Estudiante() : nombre(""), carrera(""), anio(0) {}

Estudiante::Estudiante(const string& nombre, const string& carrera, int anio)
    : nombre(nombre), carrera(carrera), anio(anio) {}

// Definición de operadores para ordenar por nombre
bool operator>(const Estudiante& izq, const Estudiante& der) {
    return izq.nombre > der.nombre;
}

bool operator<(const Estudiante& izq, const Estudiante& der) {
    return izq.nombre < der.nombre;
}
