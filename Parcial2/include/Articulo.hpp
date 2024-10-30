#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>

class Articulo
{
private:
    std::string codigo;
    std::string nombre;
    double precio;

public:
    Articulo(std::string codigo, std::string nombre, double precio);
    std::string getCodigo();
    std::string getNombre();
    double getPrecio();
    void mostrar();
};

#endif 
