//Nos piden un programa que resuelva las siguientes ecuaciones 
//con salida Y por consola (asignar valores a x´s , m y b  via Cin):
//Nos pide los valores de x, s, m y b

#include <iostream>
using namespace std;

//ingresar los valores
float x,s,m,b;
int main(){
    float x;
    float y;
    float m;
    float b;
    
    //ingresa los valores 
    cout << "ingresa el valor de x";
    cin >> x;
    cout << "ingresa el valor de m";
    cin >> m;
    cout << "ingresa el valor de b intersección de y";
    cin >> b;

    //Usar ecuación para calcular x, m de pendiente y b como intersección de Y
    //Y se calcula usando la formula de Y= mx + b
    //para hacerlo necesitamos calcular luego de ingresar los datos

    y= m* x + b;

    //el resultado será
    cout << "El valor de la función es:"<< y<<endl;
    
    return 0;
}