#include "../include/Empleado.hpp"
using namespace std;

namespace UkeleleChicken {

Empleado::Empleado(string dni, string nombre, string direccion, string puesto)
    : Persona(dni, nombre, direccion), puesto(puesto) {}

string Empleado::obtenerPuesto() const {
    return puesto;
}

} 
