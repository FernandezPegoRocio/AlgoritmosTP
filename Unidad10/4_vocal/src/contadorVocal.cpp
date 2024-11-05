#include "../include/contadorVocal.hpp"
#include <iostream>

namespace Contador {
    void CadenaVocal::contarVocales(const char *cadena, int &a, int &e, int &i, int &o, int &u) {
        a = e = i = o = u = 0; 

        while (*cadena) {
            switch (*cadena) {
                case 'a': case 'A': a++; break;
                case 'e': case 'E': e++; break;
                case 'i': case 'I': i++; break;
                case 'o': case 'O': o++; break;
                case 'u': case 'U': u++; break;
            }
            cadena++; 
        }
    }
}

