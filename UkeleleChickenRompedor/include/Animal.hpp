#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
using namespace std;

namespace UkeleleChicken {

class Animal {
public:
    virtual void comer() = 0;
    virtual void dormir() = 0;
    virtual string obtenerRaza() const = 0;
    virtual ~Animal() {}
};

} 

#endif


