// Convierte tiempo  de segundos a minutos y horas

#include <iostream>

using namespace std;




int main()
{
    int segundos,minutos,horas;
    cout <<"Ingrese valor de tiempo en segundos: ";
    cin >>segundos;
    cin.ignore();
    minutos=segundos/60;
    horas=minutos/60;
    cout <<"El tiempo es: "<<horas<<" horas, "<<minutos%60<<" minutos "<<segundos%60<<" segundos";
}

