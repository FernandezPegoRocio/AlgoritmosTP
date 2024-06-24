#include <iostream>
using namespace std;

int edad (int fecha_de_Nacimiento, int fecha_Actual);

int main()
{
    int fecha_Actual =2024;
    int fecha_de_Nacimento =0;
    cout << "Ingrese fecha_de_Nacimiento";
    cin >> fecha_de_Nacimento;
    cout <<"Tu edad es: "<<edad(fecha_de_Nacimento, fecha_Actual);
    return 0;
}

int edad(int fecha_de_Nacimiento,int fecha_Actual)
{
    return fecha_Actual - fecha_de_Nacimiento;
}