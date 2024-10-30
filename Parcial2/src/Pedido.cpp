#include "../include/Pedido.hpp"
#include <iostream>
#include <string>

Pedido::Pedido(std::string codigo, Cliente* cliente, Empleado* empleado)
    : codigo(codigo), cliente(cliente), empleado(empleado), cantidadArticulos(0), capacidad(2) 
{
    articulos = new Articulo*[capacidad]; }

void Pedido::expandirArray() {
    capacidad *= 2; 
    Articulo** nuevoArray = new Articulo*[capacidad]; 

    for (int i = 0; i < cantidadArticulos; i++) {
        nuevoArray[i] = articulos[i]; 
    }
    delete[] articulos; 
    articulos = nuevoArray; 
}

void Pedido::adjuntar(Articulo* articulo) {
    if (cantidadArticulos == capacidad) {
        expandirArray(); // Expande el array si se alcanza la capacidad
    }
    articulos[cantidadArticulos] = articulo; 
    cantidadArticulos++;
}

void Pedido::mostrar() {
    std::cout << "Cliente: " << cliente->getNombre() << std::endl;
    std::cout << "Empleado: " << empleado->getNombre() << std::endl; 
    for (int i = 0; i < cantidadArticulos; i++) {
        std::cout << "Código de Artículo: " << articulos[i]->getCodigo() << std::endl;
        std::cout << "Nombre de Artículo: " << articulos[i]->getNombre() << std::endl;
        std::cout << std::endl;
    }
}

Pedido::~Pedido() {
    delete[] articulos; 
}
