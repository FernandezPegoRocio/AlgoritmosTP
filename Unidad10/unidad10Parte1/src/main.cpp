#include <iostream>
#include "../include/registro.hpp"

using namespace std;

int main() {
    tRegistro empleado = {"Juan", 3000.00, 30}; 
    double irpf;                                
    int edad;                                  
    func(&empleado, &irpf, &edad);  

    cout << "Nombre: " << empleado.nombre << endl;
    cout << "Sueldo: " << empleado.sueldo << endl;
    cout << "Edad después de la función: " << edad << endl;
    cout << "IRPF calculado: " << irpf << endl;

    return 0;
}

