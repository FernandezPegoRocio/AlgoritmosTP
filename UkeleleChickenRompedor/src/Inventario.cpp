#include "../include/Inventario.hpp"
using namespace std;

namespace UkeleleChicken {

Inventario::Inventario() : cantidad(0) {
    for (int i = 0; i < 10; ++i) {
        articulos[i] = nullptr; 
    }
}

Inventario::~Inventario() {
    for (int i = 0; i < cantidad; ++i) {
        delete articulos[i]; 
    }
}

void Inventario::agregarArticulo(Articulo* articulo) {
    if (cantidad < 10) {
        articulos[cantidad++] = articulo; 
        cout << "Artículo agregado: " << articulo->obtenerNombre() << endl;
    } else {
        cout << "Inventario lo lamento. No se puede agregar más artículos." << endl;
    }
}

void Inventario::eliminarArticulo(int index) {
    if (index >= 0 && index < cantidad) {
        delete articulos[index]; 
        for (int i = index; i < cantidad - 1; ++i) {
            articulos[i] = articulos[i + 1]; 
        }
        articulos[--cantidad] = nullptr; 
        cout << "Artículo eliminado." << endl;
    } else {
        cout << "No válido. Pruebe nuevamente" << endl;
    }
}

void Inventario::mostrarInventario() const {
    cout << "Inventario:" << std::endl;
    for (int i = 0; i < cantidad; ++i) {
       cout << i << ": " << articulos[i]->obtenerNombre() << " - $" << articulos[i]->obtenerPrecio() << endl;
    }
}

}
