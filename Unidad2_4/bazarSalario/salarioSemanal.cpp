//Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario semanal,
//se sabe que si trabaja 40 horas o menos, se le pagará $200 por hora,
//pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $250 por hora.
#include <iostream>
using namespace std;

const int hsNormal = 40;
const int salarioN = 200;
const int salarioE = 250;

int main(){
int hsExtra;
int hsTrabajadas;
int haberes = 0;

    cout << "por favor ingresa la cantidad de horas laborales: ";
    cin >> hsTrabajadas;

    if (hsTrabajadas <= hsNormal){
      haberes = hsTrabajadas * salarioN;
    } 
    else
        {haberes = hsExtra - hsNormal;
    haberes += hsExtra * salarioE;
    }

    cout << "cantidad de haberes semnales es de $:"<< haberes <<endl;
  
    return 0;
}