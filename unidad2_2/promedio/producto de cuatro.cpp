#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, num4;
    cout<<"ingrese el primer número";
    cin >> num1;
    cout<<"ingrese el segundo número";
    cin >> num2;
    cout<<"ingrese el tercer número";
    cin >> num3;
    cout<<"ingrese el cuarto número";
    cin >> num4;

    float promedio = ((num1+num2+num3+num4)/4);
    cout<< "el promedio de los cuatro números:" << promedio << endl;
    return 0;
}