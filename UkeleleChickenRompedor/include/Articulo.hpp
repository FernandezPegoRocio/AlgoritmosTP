#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <string>
using namespace std;

namespace UkeleleChicken {

class Articulo {
protected:
    string nombre;
    double precio;

public:
    Articulo(string nombre, double precio);
    virtual string obtenerNombre() const;
    virtual double obtenerPrecio() const;
    virtual ~Articulo() {}
};

} 

#endif
