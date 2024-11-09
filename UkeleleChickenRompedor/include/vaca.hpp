#ifndef VACA_HPP
#define VACA_HPP

#include "Animal.hpp"
using namespace std;

namespace UkeleleChicken {

class Vaca : public Animal {
private:
    string raza;

public:
    Vaca(string raza);
    void comer() override;
    void dormir() override;
    string obtenerRaza() const override;
};

}

#endif

