#include "../include/Empleado.hpp"
#include <iostream>

Empleado::Empleado(std::string codigo, std::string nombre, std::string rol)
    :   codigo(codigo), nombre(nombre), rol(rol){}

std::string Empleado::getCodigo() {
    return codigo;
}

std::string Empleado::getNombre() {
    return nombre;
}

std::string Empleado::getRol() {
    return rol;
}

void Empleado::mostrar() {
    std::cout << "Cliente Código: " << codigo << ", Nombre: " << nombre << ", Rol: " << rol << std::endl;
}