#include "../include/Articulo.hpp"
#include <iostream>

Articulo::Articulo(std::string codigo, std::string nombre, double precio)
    : codigo(codigo), nombre(nombre), precio(precio) {}

std::string Articulo::getCodigo() {
    return codigo;
}

std::string Articulo::getNombre() {
    return nombre;
}

double Articulo::getPrecio() {
    return precio;
}
void Articulo::mostrar() {
    std::cout << "Código: " << codigo << ", Nombre: " << nombre << ", Precio: $" << precio << std::endl;
}