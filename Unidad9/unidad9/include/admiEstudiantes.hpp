#ifndef ADMIESTUDIANTES_HPP
#define ADMIESTUDIANTES_HPP

#include "estudiante.hpp"
#include <vector>
using std::vector;
using std::string;

class admiEstudiantes {
private:
    vector<Estudiante> estudiantes;

public:
    void cargarDesdeArchivo(const string& nombreArchivo);
    void guardarEnArchivo(const string& nombreArchivo);
    void mostrarListado() const;
    void insertarEstudiante(const Estudiante& estudiante);
    bool eliminarEstudiante(const string& nombre);
    void ordenarEstudiantes(bool ascendente);
    Estudiante* buscarEstudiante(const string& nombre);
};

#endif
