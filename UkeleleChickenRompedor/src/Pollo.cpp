#include "../include/Pollo.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

Pollo::Pollo(string raza) : raza(raza) {}

void Pollo::comer() {
    cout << "El pollo " << raza << " está comiendo." << endl;
}

void Pollo::dormir() {
    cout << "El pollo " << raza << " está durmiendo." << endl;
}

string Pollo::obtenerRaza() const {
    return raza;
}

} 
