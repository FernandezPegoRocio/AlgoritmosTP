#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>

class Equipo
{
private:
    std::string codigo;
    std::string nombre;
 

public:
   Equipo(std::string codigo, std::string nombre);
    std::string getCodigo();
    std::string getNombre();
};

#endif 
