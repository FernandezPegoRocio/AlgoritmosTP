#include "../include/CarneFresca.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

CarneFresca::CarneFresca(Animal* animal, string nombre, double precio, double peso)
    : Articulo(nombre, precio), animal(animal), peso(peso) {}

void CarneFresca::mostrarDetalles() const {
    cout << "Carne fresca: " << obtenerNombre() << endl;
    cout << "Precio: $" << obtenerPrecio() << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Origen: " << animal->obtenerRaza() << endl;
}

} 