//Realizar un Programa Que rellene un array con los números primos comprendidos entre 1 y  100 y los muestre en pantalla
#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;   
    if (num == 2) return true;   
    if (num % 2 == 0) return false; 
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false; 
    } 
    return true; 
}

int main() {
    cout << "Los números primos del 1 al 100 son: " << endl;
    vector<int> numerosPrimos; 
    for (int num = 2; num <= 100; num++) {
        if (esPrimo(num)) { 
            numerosPrimos.push_back(num); 
        }
    }
    for (size_t i = 0; i < numerosPrimos.size(); i++) {
        cout << numerosPrimos[i] << " "; 
        if ((i + 1) % 10 == 0) { 
            cout << endl;
        }
    }
    cout << endl; 
    return 0;
}
