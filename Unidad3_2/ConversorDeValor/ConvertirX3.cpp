//Hacer un programa en C++ que convierta:
//centímetros apulgadas  cm a in divide el valor de longitud entre 2,54
//Celsius a Farenheit (0 °C * 9/5) + 32 = 32 °F
//libras a kilogramos - 1 kilogramo son : 2.20462 libras.
//Entonces lo que tienes que hacer es dividir la cantidad de libras entre 2.20462.

#include <iostream>
#include <string>
using namespace std;
//elegir que bloque hacer para convertir las medidas
double pasar (double valor, int opcion){

    switch(opcion){
        case 1:  //convertir centimetro a pulgada
        cout <<"centimetros a pulgadas:";
        return valor / 2.24;
        case 2:  //celsius a Farenheit
        cout <<"celsius a Farenheit:";
        return valor *9/5/ +32;
        case 3: //libras a kilogramos 
        cout <<"libras a kilogramos:";
        return valor/ 2.20462;
        default: //opción invalida, prueba nuevamente
        return 0.0;
        }
    }

 int main(){
    int opcion;
    double valorInicial;
    double valorConvertido;
    double valorPasar;
    
        cout << "Por favor selecciona la medida que quieres convertir" << endl;
        cout << "para la convertsión a realizar de. :";
        cout << "1. centimetros a pulgadas. :";
        cout << "2. celsius a Farenheit. :";
        cout << "3. libras a kilogramos. :";
        cout << "Ingresa la opción que necesitas: ";
        cin  >> opcion;

        cout << "Ingresa el valor a convertir: ";
        cin >> valorInicial;

        valorConvertido = pasar (valorInicial, opcion);

    switch (opcion){
        case 1:
        cout << "valorInicial" << "los centrimetros introducidos son:"<< valorConvertido << "pulgadas"<< endl;
        break;
        case 2:
        cout <<"valorInicial" << "el valor de los grados celsius introducidos son:"<< valorConvertido << "Farenheit"<< endl;
        break;
        case 3:
        cout <<"valorInicial" << "el valor de libras introducidos son:"<< valorConvertido << "kilogramos"<< endl;
        break;
        default:
        cout << "la opción ingresada no es valida ";
        break;}
return 0;
}