#include "../include/Vaca.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

Vaca::Vaca(string raza) : raza(raza) {}

void Vaca::comer() {
    cout << "La vaca " << raza << " está comiendo." << endl;
}

void Vaca::dormir() {
    cout << "La vaca " << raza << " está durmiendo." << endl;
}

string Vaca::obtenerRaza() const {
    return raza;
}

} 

