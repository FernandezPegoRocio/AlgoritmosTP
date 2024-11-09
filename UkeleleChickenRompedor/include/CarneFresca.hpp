#ifndef CARNEFRESCA_HPP
#define CARNEFRESCA_HPP

#include "Articulo.hpp"
#include "Animal.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

class CarneFresca : public Articulo {
private:
    Animal* animal;
    double peso;

public:
    CarneFresca(Animal* animal, string nombre, double precio, double peso);
    void mostrarDetalles() const;
};

} 
#endif


