//Calcula el promedio entre tres numeros ingresados por el usuario

#include <iostream>

using namespace std;
double promedio(double a,int b);

int main()
{
    int count=3,contador=3;
    double num=0;
    double prom;
    while (count)
    {
        cout<<"ingrese valor: ";
        cin >>num;
        cin.ignore();
        num+=num;
        count--;
    }
    prom=promedio(num,contador);
    cout <<"El promedio de los numeros es: "<<prom;

    return 0;
}
double promedio (double num, int contador)
{
    return num/contador;
}