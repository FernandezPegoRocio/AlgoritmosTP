#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "Persona.hpp"
using namespace std;

namespace UkeleleChicken {

class Empleado : public Persona {
private:
    string puesto;

public:
    Empleado(string dni, string nombre, string direccion, string puesto);
    string obtenerPuesto() const;
};

} 

#endif


