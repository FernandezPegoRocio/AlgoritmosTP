#include <iostream>
using namespace std;
#include  <cmath> 
// PrintAverage no modifica los valores de los parámetros sum y count. Solamente usa sus valores actuales.
void PrintAverage (float sum, int count)
// precondición:
// se asigna la suma && count > 0
// poscondición:
// la suma / cuenta promedio ha sido producida en línea
{
cout<< "El promedio es:" << sum / float (count) << endl;
}
int main()
{
float num1, num2, num3;
cout<< "Ingrese el primer número:";
cin >> num1;
cout<< "Ingrese el segundo número:";
cin >> num2;
cout<< "Ingrese el tercer número:";
cin >> num3;
float sum= num1+num2+num3;
PrintAverage(sum, 3);
return 0;
}
