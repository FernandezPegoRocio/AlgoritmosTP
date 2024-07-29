//Un archivo de texto contiene información acerca de los productos que se venden en un almacén. 
//Lo único que se sabe acerca del número de productos es que no puede superar un cierto valor MaxProductos. 
//De cada producto se guarda información sobre su código:
//identificador (entero positivo), 
//su precio (real) 
//el número de unidades existentes (entero positivo). 
//El formato en el que se guarda la información dentro del archivo es el siguiente:
//id1 precio1 unidades1
//id2 precio2 unidades2
//…
//idN precioN unidadesN
//‐1
//A: Declara un tipo tProducto que represente la información de un producto y un tipo tLista que mantenga la información de todos los productos
//B: Escribe un subprograma que lea los datos del archivo de texto que almacena la información, los guarde en la lista y luego los muestre en la pantalla.
//C: Escribe un subprograma que encuentre el producto con máximo valor en el almacén, considerando que el valor del producto i es precioi*unidades i.
//D: Escribe un subprograma que dado un identificador de producto a eliminar del almacén, lo busque en la lista y lo elimine actualizando la lista como corresponda.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int MaxProductos = 100;

typedef double tPrecio[MaxProductos];
typedef int tUniExistentes[MaxProductos];
typedef string tTipo[MaxProductos];

// Variables pedidas
tPrecio precios;
tUniExistentes unidades;
tTipo tipos;
int codigos[MaxProductos]; // Array para almacenar los códigos de los productos.
int productos = 0; // Contador de productos leídos

int main() {
    int codigo;
    double precio;
    int unidad;
    string tipo;

    cout << "Introduce los datos de los productos. Para terminar, introduce -1 como código." << endl;
    while (true) {
        // Pedir el código
        cout << "Código: ";
        cin >> codigo;
        if (codigo == -1) {
            break; // Termina la lectura si encuentra -1 como código
        }

        // Pedir el tipo de producto
        cout << "Tipo: ";
        cin.ignore(); // Ignorar cualquier carácter sobrante en el buffer de entrada
        getline(cin, tipo);

        // Pedir el precio
        cout << "Precio: ";
        cin >> precio;

        // Pedir las unidades
        cout << "Unidades: ";
        cin >> unidad;

        if (productos < MaxProductos) {
            codigos[productos] = codigo;
            tipos[productos] = tipo;
            precios[productos] = precio;
            unidades[productos] = unidad;
            productos++;
        } else {
            cout << "Se ha alcanzado el número máximo de productos." << endl;
            break;
        }
    }

    // Mostrar los datos recolectados
    cout << "Información de los productos:" << endl;
    cout << setw(10) << "Código" << setw(20) << "Tipo" << setw(10) << "Precio" << setw(15) << "Unidades" << endl;
    for (int i = 0; i < productos; ++i) {
        cout << setw(10) << codigos[i]
             << setw(20) << tipos[i]
             << setw(10) << fixed << setprecision(2) << precios[i]
             << setw(15) << unidades[i] << endl;
    }

    return 0;
}