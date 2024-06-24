#include <iostream>
using namespace std;

int main()
{
  system("cls");
  double base, altura, area;                        // Declaraciones
  cout << "Introduzca la base del triángulo: ";                 // 1
  cin >> base;                                                  // 2
  cout << "Introduzca la altura del triángulo: ";               // 3
  cin >> altura;                                                // 4
  area = base * altura / 2;                                     // 5
  cout << "El área de un triángulo de base " << base            // 6
       << " y altura " << altura << " es: " << area << endl;
     
  return 0;
}
