#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Articulo.hpp"
#include "Empleado.hpp" 

class Pedido 
{
private:
    std::string codigo;
    Cliente* cliente;
    Empleado* empleado; 
    Articulo** articulos; 
    int cantidadArticulos;
    int capacidad; 

    void expandirArray(); 

public:
    Pedido(std::string codigo, Cliente* cliente, Empleado* empleado); 
    void adjuntar(Articulo* articulo);
    void mostrar();    
    ~Pedido(); 
};

#endif 
