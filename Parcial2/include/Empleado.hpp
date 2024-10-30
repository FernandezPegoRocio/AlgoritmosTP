#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado
{
private:
    std::string codigo;
    std::string nombre;
    std::string rol;

public:
    Empleado(std::string codigo, std::string nombre, std::string rol);
    std::string getCodigo();
    std::string getNombre();
    std::string getRol();
    void mostrar();
};

#endif 
