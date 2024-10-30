#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente 
{
private:
    std::string codigo;
    std::string nombre;
    std::string direccion;

public:
    Cliente(std::string codigo, std::string nombre, std::string direccion);
    std::string getCodigo();
    std::string getNombre();
    std::string getDireccion();
    void mostrar();
};

#endif 
