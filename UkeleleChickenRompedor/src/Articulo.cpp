#include "../include/Articulo.hpp"
using namespace std;

namespace UkeleleChicken {

Articulo::Articulo(string nombre, double precio) : nombre(nombre), precio(precio) {}

string Articulo::obtenerNombre() const {
    return nombre;
}

double Articulo::obtenerPrecio() const {
    return precio;
}

} 
