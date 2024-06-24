//Un empresA nos pide el armado de una App para la toma de pedidos, 
//primero deberá presentar un menú de Opciones de 4 productos
// -Simple
// -medio
// -calidad
// -Premiun,
//luego nos deberá mostrar en menú de tipo de envio:
// -normal 
// -express 
// -Fast Delivery
//A posteriori deberá mostrar por consola el producto seleccionado y el tipo de envío que eligió.
//PD. Usar Funciones, manteniendo un Main lo “mas pequeño posible”, desacoplando las funcionalidades. 
//Trabajar con la visibilidad de los operadores vistos, while Switch If ….

#include <iostream>
#include <string>
using namespace std;

int verMenuProductos(){
    int opcion;
//primero deberá presentar un menú de Opciones de 4 productos Simple-medio-calidad-Premiun.
    cout << "Armado del pedido" << endl;
    cout << "selecciona entre el producto de interes :"<< endl;
    cout << "1. simple :"<< endl;
    cout << "2. medio :"<< endl;
    cout << "3. calidad :"<< endl;
    cout << "4. premiun :"<< endl;
    cout << "el producto seleccionado es: "<< endl;
    cin  >> opcion;
    return opcion;
}
//luego nos deberá mostrar en menú de tipo de envio:-normal-express-Fast Delivery
int verMenuEnvios(){
    {int opcion;
    cout << "Armado del pedido" << endl;
    cout << "selecciona el tipo de envio :"<< endl;
    cout << "1. normal :"<< endl;
    cout << "2. express :"<< endl;
    cout << "3. Fast Delivery :"<< endl;
    cout << "el envio seleccionado es: "<< endl;
    cin  >> opcion;
    return opcion;
}
}

string obtenerNombreProducto (int opcion){ 

    switch (opcion){
        
        case 1:
        return "simple";
        case 2:
        return "medio";
        case 3:
        return "calidad";
        case 4:
        return "premiun";
        default: //opción invalida, prueba nuevamente
        return "no valido, intenta nuevamente";
    }
}

string obtenerTipoEnvio (int opcion){
    switch (opcion){
        case 1:
        return "normal";
        case 2:
        return "express";
        case 3:
        return "fast delivery";
        default: //opción invalida, prueba nuevamente
        return "no valido, intenta nuevamente";
        }
}
int main(){
    int opcionProducto, opcionEnvio;

    opcionProducto = verMenuProductos();
    while (opcionProducto < 1 || opcionProducto > 4 ){
    cout << " opcion no valida, intenta nuevamente";
    cin  >> opcionProducto;
}
    opcionEnvio = verMenuEnvios();
    while (opcionEnvio < 1 || opcionEnvio > 3 ){
    cout << " opcion no valida, intenta nuevamente";
    cin  >> opcionEnvio;
}

    string nombreProductos = obtenerNombreProducto(opcionProducto);
    string tipoEnvios = obtenerTipoEnvio (opcionEnvio);

    cout << "\n Pedido realizazo :"<< endl;
    cout << "El producto encargado es :"<< nombreProductos <<endl;
    cout << "El envio seleccionado es :"<< tipoEnvios <<endl;
return 0;

}