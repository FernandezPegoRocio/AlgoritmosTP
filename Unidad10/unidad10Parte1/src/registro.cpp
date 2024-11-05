#include "../include/registro.hpp"

void func(tRegistro *reg, double *irpf, int *edad) {
    const double TIPO = 0.18; 
    reg->edad++;              
    *irpf = reg->sueldo * TIPO; 
    *edad = reg->edad;      
}

