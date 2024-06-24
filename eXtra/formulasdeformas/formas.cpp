//Realizar un programa que pida los datos necesarios y Calcule los Perímetros:
//Podes hardcodearlo (poner los valores vos) o pedir por consola
//forma cuadrado- formula p=4 - variable S longitud del cuadrado
//forma rectandulo - formula P=2L+2W - variable L y W longitud y ancho
//Forma triangulo - formula a+b+c - variable a,b,c son longitud de lado
#include <iostream>
using namespace std;

// Función para calcular el perímetro del cuadrado
float PCuadrado(float lado) {
    return 4 * lado;
}

// Función para calcular el perímetro del rectángulo
float PRectangulo(float largo, float ancho) {
    return 2 * (largo + ancho);
}

// Función para calcular el perímetro del triángulo
float PTriangulo(float ladoA, float ladoB, float ladoC) {
    return ladoA + ladoB + ladoC;
}

int main() {
    int opcion;
    cout << "Calcular perímetro" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectángulo" << endl;
    cout << "3. Triángulo" << endl;
    cout << "Elija la opción de la forma que desea (1/2/3): ";
    cin >> opcion;
    
 //datos desde terminal para cada forma almacenando los datos que se dan.
    if (opcion == 1) {
        // Cuadrado
        float ladoCuadrado;
        cout << "Ingrese la longitud del lado del cuadrado: ";
        cin >> ladoCuadrado;
        float perimetroCuadrado = PCuadrado(ladoCuadrado);
        cout << "El perímetro del cuadrado es: " << perimetroCuadrado << endl;
    } else if (opcion == 2) {
        // Rectángulo
        float largo, ancho;
        cout << "Ingrese la longitud y el ancho del rectángulo separados por espacio: ";
        cin >> largo >> ancho;
        float perimetroRectangulo = PRectangulo(largo, ancho);
        cout << "El perímetro del rectángulo es: " << perimetroRectangulo << endl;
    } else if (opcion == 3) {
        // Triángulo
        float ladoA, ladoB, ladoC;
        cout << "Ingrese las longitudes de los tres lados del triángulo separados por espacio: ";
        cin >> ladoA >> ladoB >> ladoC;
        float perimetroTriangulo = PTriangulo(ladoA, ladoB, ladoC);
        cout << "El perímetro del triángulo es: " << perimetroTriangulo << endl;
    } else {
        cout << "Opción no válida. Por favor, seleccione 1, 2 o 3." << endl;
    }

    return 0;
}
