#include "../include/Orden.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

Orden::Orden(Cliente* cliente, Articulo* articulo, string fecha)
    : cliente(cliente), articulo(articulo), fecha(fecha) {}

void Orden::mostrarDetalles() const {
    cout << "Detalles de la orden:" << endl;
    cout << "Cliente: " << cliente->obtenerNombre() << endl;
    cout << "Dirección: " << cliente->obtenerDireccion() << endl;
    cout << "Producto: " << articulo->obtenerNombre() << endl;
    cout << "Precio: $" << articulo->obtenerPrecio() << endl;
    cout << "Fecha de compra: " << fecha << endl;
}

} 