// Calcula la edad del usuario realizando una diferencia entre el año actual y el año de nacimiento. Se pide el año de nacimiento al usuario.
#include <iostream>

using namespace std;
int edad(int a, int b);

int main()
{
    int fecha_actual=2022;
    int fecha_nacimiento=0;

    cout << "Ingrese fecha de nacimiento: ";
    cin >> fecha_nacimiento;
    cout <<"Tu edad es: "<<edad(fecha_actual,fecha_nacimiento);
    return 0;
}
int edad(int a, int b)
{
    return a-b;
}