#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>
using namespace std;

namespace UkeleleChicken {

class Persona {
protected:
    string dni;
    string nombre;
    string direccion;

public:
    Persona(string dni, string nombre, string direccion);
    string obtenerDni() const;
    string obtenerNombre() const;
    string obtenerDireccion() const;
};

} 

#endif


