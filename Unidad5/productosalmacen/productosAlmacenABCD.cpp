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
#include <string>

using namespace std;

const int MaxProductos = 100;

// Punto A: Declara un tipo tProducto y tLista
// Tipo para representar la información de un producto
struct tProducto {
    int codigo;
    double precio;
    int unidades;
    string tipo;
};

// Tipo para almacenar la lista de productos
typedef tProducto tLista[MaxProductos];

// Variables globales
tLista productos;
int cantidadProductos = 0; // Contador de productos

// Punto B: Subprograma para leer datos del archivo y almacenarlos en la lista
void leerDatosDelArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        cout << "No se ha podido abrir el archivo!" << endl;
        return;
    }

    int codigo;
    double precio;
    int unidad;
    string tipo;

    // Leer los datos del archivo
    while (archivo >> codigo >> precio >> unidad) {
        if (codigo == -1) {
            break; // Termina la lectura si encuentra -1 como código
        }

        archivo.ignore(); // Ignorar el salto de línea o espacio restante
        getline(archivo, tipo); // Leer el tipo del producto

        if (cantidadProductos < MaxProductos) {
            productos[cantidadProductos].codigo = codigo;
            productos[cantidadProductos].precio = precio;
            productos[cantidadProductos].unidades = unidad;
            productos[cantidadProductos].tipo = tipo;
            cantidadProductos++;
        } else {
            cout << "Se ha alcanzado el número máximo de productos." << endl;
            break;
        }
    }
    archivo.close();
}

// Punto C: Subprograma para encontrar el producto con el máximo valor
void encontrarProductoMaximo() {
    if (cantidadProductos == 0) {
        cout << "No hay productos para evaluar." << endl;
        return;
    }

    int indiceMax = 0;
    double valorMax = productos[0].precio * productos[0].unidades;

    for (int i = 1; i < cantidadProductos; ++i) {
        double valorActual = productos[i].precio * productos[i].unidades;
        if (valorActual > valorMax) {
            valorMax = valorActual;
            indiceMax = i;
        }
    }

    // Mostrar el producto con el máximo valor
    cout << "Producto con el máximo valor:" << endl;
    cout << setw(10) << "Código" << setw(20) << "Tipo" << setw(10) << "Precio" << setw(15) << "Unidades" << setw(15) << "Valor" << endl;
    cout << setw(10) << productos[indiceMax].codigo
         << setw(20) << productos[indiceMax].tipo
         << setw(10) << fixed << setprecision(2) << productos[indiceMax].precio
         << setw(15) << productos[indiceMax].unidades
         << setw(15) << fixed << setprecision(2) << valorMax << endl;
}

// Punto D: Subprograma para eliminar un producto dado su identificador
void eliminarProducto(int codigoEliminar) {
    int i;
    bool encontrado = false;

    // Buscar el producto a eliminar
    for (i = 0; i < cantidadProductos; ++i) {
        if (productos[i].codigo == codigoEliminar) {
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Producto con código " << codigoEliminar << " no encontrado." << endl;
        return;
    }

    // Eliminar el producto y desplazar los elementos restantes
    for (; i < cantidadProductos - 1; ++i) {
        productos[i] = productos[i + 1];
    }
    cantidadProductos--; // Actualizar el contador de productos
    cout << "Producto con código " << codigoEliminar << " eliminado." << endl;
}

// Función para mostrar los datos de los productos
void mostrarDatos() {
    cout << "Información de los productos:" << endl;
    cout << setw(10) << "Código" << setw(20) << "Tipo" << setw(10) << "Precio" << setw(15) << "Unidades" << endl;
    for (int i = 0; i < cantidadProductos; ++i) {
        cout << setw(10) << productos[i].codigo
             << setw(20) << productos[i].tipo
             << setw(10) << fixed << setprecision(2) << productos[i].precio
             << setw(15) << productos[i].unidades << endl;
    }
}

int main() {
    string nombreArchivo = "productosAlmacen.txt";

    // Punto B: Leer datos del archivo
    leerDatosDelArchivo(nombreArchivo);

    // Mostrar datos leídos del archivo
    mostrarDatos();

    // Pedir nuevos datos de productos
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

        if (cantidadProductos < MaxProductos) {
            productos[cantidadProductos].codigo = codigo;
            productos[cantidadProductos].tipo = tipo;
            productos[cantidadProductos].precio = precio;
            productos[cantidadProductos].unidades = unidad;
            cantidadProductos++;
        } else {
            cout << "Se ha alcanzado el número máximo de productos." << endl;
            break;
        }
    }

    // Mostrar los datos recolectados
    mostrarDatos();

    // Punto C: Encontrar el producto con el máximo valor
    encontrarProductoMaximo();

    // Punto D: Eliminar un producto dado su identificador
    int codigoEliminar;
    cout << "Introduce el código del producto a eliminar: ";
    cin >> codigoEliminar;
    eliminarProducto(codigoEliminar);

    // Mostrar los datos después de eliminar
    mostrarDatos();

    return 0;
}