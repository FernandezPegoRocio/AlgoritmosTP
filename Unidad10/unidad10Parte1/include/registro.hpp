#ifndef REGISTRO_HPP
#define REGISTRO_HPP

#include <string>

typedef struct {
    std::string nombre;
    double sueldo;
    int edad;
} tRegistro;

void func(tRegistro *reg, double *irpf, int *edad);

#endif 
