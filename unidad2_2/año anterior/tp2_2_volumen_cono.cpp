//Calcula el volumen de un cono

#include <iostream>

using namespace std;

double volumen_funcion(double,double,double);

int main()
{
    double volumen, radio, pi, altura;

    radio=14.5;
    pi=3.141592;
    altura=26.79;

    cout<<"El volumen del cono es: "<<volumen_funcion(radio,altura,pi);

    return 0;
}

double volumen_funcion(double radio, double altura, double pi)
{
    return ((pi*(radio*radio)*altura)/3);
}