// Numeros.cpp
#include "Numeros.hpp"
#include <iostream>
using namespace std;

namespace Numeros {

    void llenarImpares(int* array, int& tam) {
        tam = 0;
        for (int num = 1; num < 100; num += 2) {
            array[tam] = num;
            tam++;
        }
    }

    void llenarPrimos(int* array, int& tam) {
        tam = 0;
        for (int num = 2; num <= 100; num++) {
            bool esPrimo = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    esPrimo = false;
                    break;
                }
            }
            if (esPrimo) {
                array[tam] = num;
                tam++;
            }
        }
    }

    void llenarEnteros(int* array, int tam) {
        for (int i = 0; i < tam; i++) {
            array[i] = i + 1;
        }
    }

    void mostrarArray(const int* array, int tam) {
        for (int i = 0; i < tam; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

} // namespace Numeros
