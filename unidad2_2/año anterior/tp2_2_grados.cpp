//Convierte grados Farenheit en Celsius

#include <iostream>

using namespace std;
double conversor_grados_farenheit_celsius(double);

int main()
{
    double gradosF;
    double gradosC;

    cout <<"Ingrese grados Farenheit: ";
    cin >>gradosF;
    cin.ignore();

    cout <<"La temperatura en grados Celsius es: "<<conversor_grados_farenheit_celsius(gradosF);
}
double conversor_grados_farenheit_celsius(double gradosF)
{
    return (gradosF-32)*5/9;
}