#include "admiEstudiantes.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::remove_if;
using std::sort;

void admiEstudiantes::cargarDesdeArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        Estudiante est;
        while (archivo >> est.nombre >> est.carrera >> est.anio) {
            estudiantes.push_back(est);
        }
        archivo.close();
    }
}

void admiEstudiantes::guardarEnArchivo(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    for (const auto& est : estudiantes) {
        archivo << est.nombre << " " << est.carrera << " " << est.anio << endl;
    }
}

void admiEstudiantes::mostrarListado() const {
    for (const auto& est : estudiantes) {
        cout << est.nombre << ", " << est.carrera << ", Año: " << est.anio << endl;
    }
}

void admiEstudiantes::insertarEstudiante(const Estudiante& estudiante) {
    estudiantes.push_back(estudiante);
}

bool admiEstudiantes::eliminarEstudiante(const string& nombre) {
    auto it = remove_if(estudiantes.begin(), estudiantes.end(),
                        [&nombre](const Estudiante& est) { return est.nombre == nombre; });
    if (it != estudiantes.end()) {
        estudiantes.erase(it, estudiantes.end());
        return true;
    }
    return false;
}

void admiEstudiantes::ordenarEstudiantes(bool ascendente) {
    if (ascendente)
        sort(estudiantes.begin(), estudiantes.end(), [](const Estudiante& a, const Estudiante& b) { return a < b; });
    else
        sort(estudiantes.begin(), estudiantes.end(), [](const Estudiante& a, const Estudiante& b) { return a > b; });
}

Estudiante* admiEstudiantes::buscarEstudiante(const string& nombre) {
    auto it = std::find_if(estudiantes.begin(), estudiantes.end(),
                           [&nombre](const Estudiante& est) { return est.nombre == nombre; });
    if (it != estudiantes.end()) {
        return &(*it);
    }
    return nullptr;
}
