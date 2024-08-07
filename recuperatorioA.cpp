// CONSIGNA:
// Una Empresa que vende “productos de seguridad industrial NicTech” nos convoca para
// realización de una App que permita registrar los Pedidos de Artículos de los clientes. 
// En esta etapa del desarrollo, solo deberemos realizar el módulo “Clientes”
// La misma debe permitir:
// Gestionar los Clientes
// a. Dar de alta el cliente (el código del cliente es la ubicación en el array x 100).
// b. Dar de Baja los clientes x código de cliente.
// c. Modificar los clientes, ingresar el código, mostrarlo y editarlo.
// Listar los Clientes.
// a. Listar todos los Clientes.
// b. Buscar un Clientes x código y mostrarlo (imprimir cartel de no encontrado).
// Todo esto mediante un Menú, Modularizando en Funciones, utilizando Archivos, arreglos y estructuras.


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

const int MAX_Clientes = 100;

typedef struct {
    string codigo;
    string nombre;
    string apellido;
    string direccion;
} TinfoClientes;

TinfoClientes clientes[MAX_Clientes];
int numClientes = 0;

void pauseConsole() {
    cout << "Presione dos veces la tecla Enter para continuar..." << endl;
    cin.ignore();
    cin.get();
}

void clearConsole() {
#ifdef __unix__
    system("clear");
#elif __APPLE__
    system("clear");
#elif defined(_WIN32) || defined(WIN32) || defined(WIN64)
    system("cls");
#endif
}

void cargarDatos() {
    ifstream file("listaClientes.csv");
    if (file.is_open()) {
        string linea;
        while (getline(file, linea)) {
            istringstream iss(linea);
            string field;

            getline(iss, field, ',');
            clientes[numClientes].codigo = field;

            getline(iss, field, ',');
            clientes[numClientes].nombre = field;

            getline(iss, field, ',');
            clientes[numClientes].apellido = field;

            getline(iss, field, ',');
            clientes[numClientes].direccion = field;

            numClientes++;
        }
        file.close();
    } else {
        cout << "No se pudo abrir el archivo. Prueba nuevamente." << endl;
    }
}

void guardarDatos() {
    ofstream file("listaClientes.csv");
    if (file.is_open()) {
        for (int i = 0; i < numClientes; ++i) {
            file << clientes[i].codigo << ","
                 << clientes[i].nombre << ","
                 << clientes[i].apellido << ","
                 << clientes[i].direccion << endl;
        }
        file.close();
    } else {
        cout << "Debido a un error, no se pudo abrir el archivo." << endl;
    }
}

void mostrarListaClientes() {
    clearConsole();
    if (numClientes == 0) {
        cout << "No hay clientes cargados." << endl;
    } else {
        for (int i = 0; i < numClientes; ++i) {
            cout << "Código: " << clientes[i].codigo << " | "
                 << "Nombre: " << clientes[i].nombre << " | "
                 << "Apellido: " << clientes[i].apellido << " | "
                 << "Dirección: " << clientes[i].direccion << endl;
        }
    }
    pauseConsole();
}

void altaCliente() {
    clearConsole();
    if (numClientes < MAX_Clientes) {
        TinfoClientes nuevoCliente;
        nuevoCliente.codigo = to_string(100 + numClientes);
        cout << "Código asignado: " << nuevoCliente.codigo << endl;

        cout << "Ingresa el nombre del cliente: ";
        cin.ignore();
        getline(cin, nuevoCliente.nombre);

        cout << "Ingresa el apellido del cliente: ";
        getline(cin, nuevoCliente.apellido);

        cout << "Ingresa la dirección del cliente: ";
        getline(cin, nuevoCliente.direccion);

        clientes[numClientes] = nuevoCliente;
        numClientes++;
        guardarDatos();

        cout << "El cliente fue agregado correctamente." << endl;
    } else {
        cout << "Ya alcanzaste la capacidad máxima de clientes." << endl;
    }
    pauseConsole();
}

void darDeBaja(string codigo) {
    clearConsole();
    int index = -1;
    for (int i = 0; i < numClientes; ++i) {
        if (clientes[i].codigo == codigo) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < numClientes - 1; ++i) {
            clientes[i] = clientes[i + 1];
        }
        numClientes--;
        guardarDatos();
        cout << "El cliente seleccionado fue eliminado correctamente." << endl;
    } else {
        cout << "Lo lamento, el cliente buscado no fue encontrado." << endl;
    }
    pauseConsole();
}

void buscarCliente(string codigo) {
    clearConsole();
    bool encontrado = false;
    for (int i = 0; i < numClientes; ++i) {
        if (clientes[i].codigo == codigo) {
            cout << "Código: " << clientes[i].codigo << " | "
                 << "Nombre: " << clientes[i].nombre << " | "
                 << "Apellido: " << clientes[i].apellido << " | "
                 << "Dirección: " << clientes[i].direccion << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Lo lamento, pero el cliente buscado no fue encontrado." << endl;
    }
    pauseConsole();
}

void modificarCliente(string codigo) {
    clearConsole();
    bool encontrado = false;
    for (int i = 0; i < numClientes; ++i) {
        if (clientes[i].codigo == codigo) {
            cout << "Modificando cliente con código: " << codigo << endl;

            cout << "Ingresa el nuevo nombre del cliente: ";
            cin.ignore();
            getline(cin, clientes[i].nombre);

            cout << "Ingresa el nuevo apellido del cliente: ";
            getline(cin, clientes[i].apellido);

            cout << "Ingresa la nueva dirección del cliente: ";
            getline(cin, clientes[i].direccion);

            encontrado = true;
            guardarDatos();
            cout << "El cliente elegido, fue modificado correctamente." << endl;
            break;
        }
    }
    if (!encontrado) {
        cout << "Lo lamento, pero el cliente buscado no fue encontrado." << endl;
    }
    pauseConsole();
}

void mostrar_menu() {
    cout << "----Menú clientes, de productos de seguridad industrial NicTech----" << endl;
    cout << "1. Dar de alta nuevo cliente" << endl;
    cout << "2. Dar de baja a cliente existente" << endl;
    cout << "3. Modificar un cliente de la lista" << endl;
    cout << "4. Listar todos los clientes" << endl;
    cout << "5. Buscar cliente por código y mostrarlo" << endl;
    cout << "6. Salir" << endl;
    cout << "Por favor, ingresa la opción que deseas: ";
}

int main() {
    cargarDatos();
    int opcion;
    do {
        clearConsole();
        mostrar_menu();
        cin >> opcion;
        cin.ignore();
        switch (opcion) {
            case 1:
                altaCliente();
                break;
            case 2: {
                string codigo;
                cout << "Ingresa el código del cliente a dar de baja: ";
                getline(cin, codigo);
                darDeBaja(codigo);
                break;
            }
            case 3: {
                string codigo;
                cout << "Ingresa el código del cliente a modificar: ";
                getline(cin, codigo);
                modificarCliente(codigo);
                break;
            }
            case 4:
                mostrarListaClientes();
                break;
            case 5: {
                string codigo;
                cout << "Ingresa el código del cliente a buscar: ";
                getline(cin, codigo);
                buscarCliente(codigo);
                break;
            }
            case 6:
                guardarDatos();
                cout << "Salir, gracias por usar nuestro programa" << endl;
                break;
            default:
                cout << "Tu elección no es válida, prueba nuevamente" << endl;
                pauseConsole();
                break;
        }
    } while (opcion != 6);

    return 0;
}