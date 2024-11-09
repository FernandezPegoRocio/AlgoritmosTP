#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Persona.hpp"
using namespace std;

namespace UkeleleChicken {

class Cliente : public Persona {
public:
    Cliente(string dni, string nombre, string direccion);
};

} 

#endif


