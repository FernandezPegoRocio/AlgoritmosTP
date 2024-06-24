//Hacer un programa en C++ que ayude a una empresa a 
//incrementar los salarios de los trabajadores de la siguiente manera:
//Tipo de salario %
//De 0 a $9 000 20%
//De $9 000 a $15 000 10%
//De $15 000 a $20 000 5%
//Más de $20 000 3%
// formula nuevoSalario = sueldoAct * (0 + porcentaje/100)
#include <iostream>
#include <string>
using namespace std;

double incrementarSalario(double sueldoAct, int opcion){
    double nuevoSalario = sueldoAct;
    switch (opcion){
        case 1: //el 20% de aumento
        cout << "Si tu sueldo actual ronda entre 0 a $9.000";
        nuevoSalario *= 1.20;
        break;
        case 2:// el 10% de aumento
        cout << "Si tu sueldo actual ronda entre $9.000 a $15.000";
        nuevoSalario  *= 1.10;
        break;
        case 3: // el 5% de aumento
        cout << "Si tu sueldo actual ronda entre $15.000 a $20.000";
        nuevoSalario  *= 1.05;
        break;
        case 4: // el 3% de aumento
        cout << "Si tu sueldo actual ronda entre $20.000 a $\n";
        nuevoSalario  *= 1.03;
        break;
        default: //opción invalida, prueba nuevamente
        nuevoSalario = sueldoAct;
        break;
    }
        return nuevoSalario;
}
int main(){
    int opcion;
    double sueldoActual;
    

    cout << "Por favor selecciona el sueldo que quieres incrementar" << endl;
        cout << "Incrementa el sueldo de:\n ";
        cout << "1. de 0 a $9.000\n :";
        cout << "2. de $9.000 a $15.000\n :";
        cout << "2. de $15.000 a $20.000\n :";
        cout << "3. mas de $20.000 a $\n :";
        cout << "Ingresa la opcion que necesitas: ";
        cin  >> opcion;
    
        cout << "Ingresa el sueldo actual a incrementar: $";
        cin  >> sueldoActual;
    
        double nuevoSalario = incrementarSalario(sueldoActual, opcion);
    //!= no igual a
        if (nuevoSalario !=sueldoActual){
        cout << "sueldo actual: $" << sueldoActual << endl;
        cout << "nuevo sueldo: $" << nuevoSalario << endl;
        double aumento = nuevoSalario - sueldoActual;
        cout << "incremento: $" << aumento << endl;
        }
        else {
        cout << "no se realiza incremento en sueldo.\n";
        }
      return 0;  
}