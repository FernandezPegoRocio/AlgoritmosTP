#include "../include/AltaMilanga.hpp"
using namespace std;

namespace UkeleleChicken {

AltaMilanga::AltaMilanga(const std::string& nombre, double precio)
    : nombre(nombre), precio(precio) {}

std::string AltaMilanga::obtenerNombre() const {
    return nombre;
}

double AltaMilanga::obtenerPrecio() const {
    return precio;
}

} 