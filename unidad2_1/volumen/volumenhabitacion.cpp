// Calcula el volume de una habitación

#include <iostream>
using namespace std;

int main()
{
// tuve muchos errores porque use float en todas las dimenciones, en lugar de usarlo solo con la coma.
// otro error fue no poner el volumen
    double volumen;
    int largo=5;
    int ancho=4;
    float alto=2.5;

//el volumen se obtiene multiplicando las dimenciones
    volumen =largo*ancho*alto;

    cout << "El volumen de la habitacion es: " << volumen << endl;

    return 0;

}