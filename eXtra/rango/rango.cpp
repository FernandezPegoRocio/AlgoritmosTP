// c++ Un programa que pida un rango, luego que ingrese un número y determine si está dentro del rango solicitados.
//#directiva y biblioteca
#include <iostream> 
#include <cmath>
using namespace std;
//cantiddad de condiciones -1 = igual cantidad de veces que decimos si
// ejemplo de base: ingrese x valor - x valor para determinar el rango entre ambos
 //el rango sera determinado por quien lo use pone el inicio y el fin
    //int inicio y final con void que pone rango
    int inicio;
    int fin;
    // void en este caso hace una secuencia con for en bucle con los datos ingresado
    void printRange(int inicio, int fin){
        for(int i = inicio; i<= fin; ++i){
            cout << i << "";
        }
        cout << endl;
        }
int main()//cabecera de la funcion 
 //la {} es el bloque de instruccion de codigo
{
//pide que ingrese los datos
int inicio, fin, numero;
    cout << "ingrese el inicio del rango";
    cin >> inicio;
    cout<< "ingrese el fin del rango";
    cin >> fin;
    cout << "el rango es";
    printRange  (inicio, fin);
    // realiza la funcion para que se determine el rango 
    // esto que hice estaba mal:cout << "el rango es:"<< inicio<< "-" << fin<<endl;
    // esto fue otra prueba if (numero >= inicio; numero <= fin){ cout << "si esta dentro del rango del numero es:"<<endl;}else {cout << "si esta fuera del rango del numero es:"<<endl; }
    cout << "ingrese numero si esta dentro del rango";
    cin >> numero;
    if (numero >= inicio; numero <= fin){
     cout << "el resultado esta en el rango"<< endl;
     }
     else {
    cout << "el resultado esta fuera del rango"<< endl;
     }
 
    return 0;
     
 }


