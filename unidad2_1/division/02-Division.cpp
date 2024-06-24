#include <iostream>
using namespace std;

int main()
{
   system("cls");
   double numerador, denominador, resultado;
   cout << "Numerador: ";
   cin >> numerador;
   cout << "Denominador: ";
   cin >> denominador;
   resultado = numerador / denominador;
   cout << "Resultado: " << resultado << endl;
   return 0;
}