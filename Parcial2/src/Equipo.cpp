#include "../include/Equipo.hpp"
#include <iostream>

#include <iostream>

Equipo::Equipo(std::string codigo, std::string nombre)
    : codigo(codigo), nombre(nombre) {}

std::string Equipo::getCodigo() {
    return codigo;
}

std::string Equipo::getNombre() {
    return nombre;
}