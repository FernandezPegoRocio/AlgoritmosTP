
#include <iostream>
using namespace std;
#include <cmath>

int main() 
{
float grados_fahrenheit, grados_celsius;
cout << "convertir grados_faherenheit a gados_Celsius";
cout << "Ingrese la temperatura en grados_Fahrenheit para convertir:";
cin >> grados_fahrenheit;

grados_celsius = 5.0/9.0*(grados_fahrenheit - 32.0);

cout << "La temperatura en grados_Celsius es:" << grados_celsius << " °C" << endl;

return 0;
}

