#ifndef POLLO_HPP
#define POLLO_HPP

#include "Animal.hpp"
using namespace std;

namespace UkeleleChicken {

class Pollo : public Animal {
private:
    string raza;

public:
    Pollo(string raza);
    void comer() override;
    void dormir() override;
    string obtenerRaza() const override;
};

} 

#endif

