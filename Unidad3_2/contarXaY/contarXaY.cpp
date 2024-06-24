//Un Hacer un programa en C++ que 
//lea dos números x e y, luego hacer la diferencia x - y; 
//si la diferencia es menor o igual a 10, 
//entonces escribir todos los números comprendidos entre y y x
#include <iostream>
#include <string>
using namespace std;

// asigna nombre alternativo
int main(){
    //pedir la linea de valor de x e y para comprobar
    double x, y;
    cout << "Ingresa el valor de x :";
    cin  >>  x;
    cout << "Ingresa el valor de y :";
    cin  >>  y;
    
    double diferencia = (x - y);
    int inicio, fin;
    //ya teniendo el valor buscar la diferencia de x - y
    //solo si es igual o menor que 10 (<= 10)
    if (diferencia <= 10 ){
        //mayor que" (>), "menor que" (<)
        //si x es mayor que y
        if (x > y){
          //marcar el inio y fin del recorrido
          inicio = static_cast<int>(y);
          fin = static_cast<int>(x);  
        }
        //si x es menor que y
        //de otro modo
        else{
          inicio = static_cast<int>(x);
          fin = static_cast<int>(y);  }
        }
        else{
        cout << "La diferencia entre x y y es mayor que 10. No se muestra el contador." << endl;
    }
        cout << "los numeros comprendidos entre x a y, son de :" << inicio << "y" << fin << "son: ";
         for (int i = inicio; i <= fin; ++i) {
            cout << i << " ";
        }
        cout << endl;
    
    
return 0;

}

