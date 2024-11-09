#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

#include "Articulo.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace UkeleleChicken {

class Inventario {
private:
    Articulo* articulos[5];
    int cantidad; 
public:
    Inventario();
    ~Inventario();
    void agregarArticulo(Articulo* articulo);
    void eliminarArticulo(int index);
    void mostrarInventario() const;
};

} 

#endif
