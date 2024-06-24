#include <iostream>
#include <cmath>
using namespace std;
//fac= fahrenheit a centigrados
float fac(float GradosFahrenheit){
    float centigrados = (GradosFahrenheit - 32) * 5 / 9;
    return centigrados;
}
//caf=centigrados a fahrenheit
float caf(float GradosCentigrados){
    float fahrenheit = (GradosCentigrados * 9 / 5) + 32;
    return fahrenheit;
}
//menú con opciones para las conversiones
int main(){
    float opcion;
    float grados;

    cout << "Ingrese la opción deseada:\n";
    cout << "1. Fahrenheit a Centigrados\n";
    cout << "2. Centigrados a Fahrenheit\n";
    cin >> opcion;
    
    if (opcion == 1){
        cout << "Ingrese los grados Fahrenheit: ";
        cin >> grados;
        cout << grados << " grados Fahrenheit equivale a " << fac(grados) << " grados Centigrados.\n";
    }
    else if (opcion == 2){
        cout << "Ingrese los grados Celsius: ";
        cin >> grados;
        cout << grados << " grados Centigrados equivale a " << caf(grados) << " grados Fahrenheit.\n";
    }
    else{
        cout << "Opción inválida.\n";
    }
    
    return 0;
}