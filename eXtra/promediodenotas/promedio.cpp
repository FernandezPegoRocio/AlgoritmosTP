//La Nota final de un estudiante es el promedio de tres notas: 
//la nota de laboratorio que cuenta un 30% del total, 
//la nota teórica que cuenta un 60% 
//la nota de Práctica que cuenta el 10% restante. 
//Escriba un programa que lea de la entrada estándar las tres notas de un alumno 
//escriba en la salida estándar su nota final.
//solo compila con numeros enteros sin coma
#include <iostream>
#include <cmath>
using namespace std;
//se trebaja con porcentaje
// el programa pedira la nota de labopratorio
int laboratory;
//ingresas nota teórica
int theorical;
// vamos a terminar el ultimo dato nora práctica
int practical;

float laboratorynote= 0.0;
float theoricalnote= 0.0;
float practicalnote= 0.0;

// ingreso de notas
int main (){
    int laboratory, theorical, practical;
    cout << "ingresa tu nota de laboratory:";
    cin >> laboratory;
    cin.ignore();

    cout << "ingresa tu nota de theorical:";
    cin >> theorical;
    cin.ignore();

    cout << "ingresa tu nota de practical:";
    cin >> practical;
    cin.ignore();

// calcular los datos ingresados por el usuario
 cout << "Promedio del estudiante"<< endl;
float finalnote= (laboratory * 0.3)+(theorical * 0.6)+(practical*0.1);

    //mostrar el promedio del estudiante
    cout << "tu nota final es:"<< finalnote<<endl;
    return 0;
}