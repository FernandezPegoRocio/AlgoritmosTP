#include "../include/Cerdo.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

Cerdo::Cerdo(string raza) : raza(raza) {}

void Cerdo::comer() {
    cout << "El cerdo " << raza << " está comiendo." << endl;
}

void Cerdo::dormir() {
    cout << "El cerdo " << raza << " está durmiendo." << endl;
}

string Cerdo::obtenerRaza() const {
    return raza;
}

} 