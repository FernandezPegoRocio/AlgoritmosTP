//Realizar un Programa Que rellene un array con los números impares comprendidos entre 1 y 100 y los muestre en pantalla
#include <iostream>
#include <vector>
using namespace std;
bool esImpar(int num) {
    return num % 2 != 0; 
}
int main(){
    cout << "Los números impares del 1 al 100 son: " << endl;
    vector<int> numerosImpares; 
    for (int num = 1; num <= 100; num++) {
        if (esImpar(num)) { 
            numerosImpares.push_back(num); 
        }
    }
    for (size_t i = 0; i < numerosImpares.size(); i++) {
        cout << numerosImpares[i] << " "; 
        if ((i + 1) % 10 == 0) { 
            cout << endl;
        }
    }
    cout << endl; 
    return 0;
}