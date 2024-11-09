#ifndef ALTAMILANGA_HPP
#define ALTAMILANGA_HPP

#include <string>
using namespace std;

namespace UkeleleChicken {

class AltaMilanga {
private:
    string nombre;
    double precio;

public:
    AltaMilanga(const string& nombre, double precio);
    string obtenerNombre() const;
    double obtenerPrecio() const;
};

} 

#endif

