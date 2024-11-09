#ifndef ORDEN_HPP
#define ORDEN_HPP

#include "Cliente.hpp"
#include "Articulo.hpp"
#include <string>
using namespace std;

namespace UkeleleChicken {

class Orden {
private:
    Cliente* cliente;
    Articulo* articulo;
    string fecha;

public:
    Orden(Cliente* cliente, Articulo* articulo, string fecha);
    void mostrarDetalles() const;
};

} 
#endif


