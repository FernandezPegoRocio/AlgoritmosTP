#include <iostream>

using namespace std;

int main() {
int horas, segundos, minutos;

cout << "Ingrese el valor de tiempo transcurrido en segundos: ";
cin >> segundos;

horas = segundos / 3600;
minutos = (segundos % 3600) / 60;
segundos = segundos % 60;

cout << "El tiempo es: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << endl;

return 0;
}