#include "../include/Persona.hpp"
using namespace std;

namespace UkeleleChicken {

Persona::Persona(string dni, string nombre, string direccion)
    : dni(dni), nombre(nombre), direccion(direccion) {}

string Persona::obtenerDni() const {
    return dni;
}

string Persona::obtenerNombre() const {
    return nombre;
}

string Persona::obtenerDireccion() const {
    return direccion;
}

} 
