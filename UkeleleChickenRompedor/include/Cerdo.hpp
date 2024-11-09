#ifndef CERDO_HPP
#define CERDO_HPP

#include "Animal.hpp"
using namespace std;

namespace UkeleleChicken {

class Cerdo : public Animal {
private:
    string raza;

public:
    Cerdo(string raza);
    void comer() override;
    void dormir() override;
    string obtenerRaza() const override;
};

} 

#endif

