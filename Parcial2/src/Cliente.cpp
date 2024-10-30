#include "../include/Cliente.hpp"
#include <iostream>

Cliente::Cliente(std::string codigo, std::string nombre, std::string direccion)
    : codigo(codigo), nombre(nombre), direccion(direccion) {}

std::string Cliente::getCodigo() {
    return codigo;
}

std::string Cliente::getNombre() {
    return nombre;
}

std::string Cliente::getDireccion() {
    return direccion;
}
void Cliente::mostrar() {
    std::cout << "Cliente Código: " << codigo << ", Nombre: " << nombre << ", Dirección: " << direccion << std::endl;
}