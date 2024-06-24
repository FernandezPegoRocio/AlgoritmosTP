// Calcula el volumen de un cono con variables tipo double

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double volumen;
    double pi=3.14;
    double radio,altura;
    radio=14,5;
    altura=26,79;
    double cuadrado=pow(radio,2.0);


    volumen= ((pi*cuadrado)/altura)/3;

    cout << "El volumen de un cono es: "<<volumen<<endl;

}