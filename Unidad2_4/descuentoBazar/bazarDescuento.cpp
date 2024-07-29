//Hacer un programa en C++ para un bazar que tiene una promo de descuento para 
//vender al mayor, esta dependerá del número de Productos que se compren. 
//Si son más de diez, se les dará un 12% de descuento sobre el total de la compra; 
//si el número de productos es mayor de veinte pero menor de treinta, se le otorga un 25% de descuento; 
//y si son más treinta productos de le otorgará un 40% de descuento. El precio de cada producto es de $80.
#include <iostream>
using namespace std;
int main(){
    const int precio = 80;
    int cantidad;
    double descuento, valorTotal, factura;

    cout << "por favor ingresa la cantidad que desees adquirir: ";
    cin >> cantidad;
    factura = cantidad * precio;

    if ( cantidad > 30){
        descuento = 0.4;
    }
    else if (cantidad > 20){
        descuento = 0.25;
    }
    else if (cantidad >10){
        descuento = 0.12;
    }
    else {
        descuento = 0;
    }
    valorTotal = factura * (1 - descuento);
    cout << "cantidad agregada al carrito:"<< cantidad <<endl;
    cout << "el valor total de la compra es $: "<< factura <<endl;
    cout << "por la cantidad se le aplica el siguiente descuento:"<< (descuento * 100) << "%"<<endl;
    cout << "el total a facturar es $:" << valorTotal << endl;

return 0;

}