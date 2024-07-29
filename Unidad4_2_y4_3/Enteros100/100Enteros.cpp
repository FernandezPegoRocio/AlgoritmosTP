//Realizar un programa Que rellene un array con los 100 primeros números enteros y los muestre en pantalla

#include <iostream>
using namespace std;
int main(){
    int numerosEnteros [100];
    for (int i = 0; i < 100; ++i){
        numerosEnteros [i] = i + 1;
    }
    cout << "los primeros 100 números enteros son: " << endl;
    for (int i = 0; i < 100; ++i){
        cout << numerosEnteros[i] << " ";
        if ((i + 1)% 10 == 0){
            cout << endl;
        }
    }
    return 0;
}