#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radio = 14.5;
    double altura = 26.79;
    double volumen = (3.141592 * pow(radio, 2) * altura) / 3;

    cout << "El volumen de un cono es: " << volumen << endl;

    return 0;
}