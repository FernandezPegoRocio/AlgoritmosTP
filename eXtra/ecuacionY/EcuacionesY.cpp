//Nos piden un programa que resuelva las siguientes ecuaciones 
//con salida Y por consola (asignar valores a x´s , m y b  via Cin):
//Nos pide los valores de x, s, m y b

#include <iostream>
using namespace std;

//ingresar los valores
#include <iostream>
using namespace std;

int main() {
    float x;
    float s;
    float m;
    float b;
    float y;

    // Ingreso de valores
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de s: ";
    cin >> s;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el valor de b (intersección de y): ";
    cin >> b;
    //para hacerlo necesitamos calcular luego de ingresar los datos
    // Lass ecuaciones son
    // Ecuación 1: y = m * (x - s)
    y = m * (x - s);
    cout << "Resultado de la ecuación y = m * (x - s): " << y << endl;

    // Ecuación 2: y = m * x + b
    y = m * x + b;
    cout << "Resultado de la ecuación y = m * x + b: " << y << endl;

    // Ecuación 3: y = (m^2 - m) / (x^2 - s)
    float m_cuadrado = m * m;
    float x_cuadrado = x * x;
    y = (m_cuadrado - m) / (x_cuadrado - s);
    cout << "Resultado de la ecuación y = (m^2 - m) / (x^2 - s): " << y << endl;

    return 0;
}