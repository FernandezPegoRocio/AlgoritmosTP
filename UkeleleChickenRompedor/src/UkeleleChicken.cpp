#include "../include/UkeleleChicken.hpp"
#include "../include/Vaca.hpp"
#include "../include/Pollo.hpp"
#include "../include/Cerdo.hpp"
#include <iostream>
using namespace std;

namespace UkeleleChicken {

UkeleleChicken::UkeleleChicken() {
    cargarDatos();
}

UkeleleChicken::~UkeleleChicken() {
    for (int i = 0; i < 3; ++i) {
        delete animales[i];
        delete clientes[i];
        delete ordenes[i];
    }
    for (int i = 0; i < 2; ++i) {
        delete empleados[i];
    }
    for (int i = 0; i < 5; ++i) {
        delete milangas[i];
    }
}

void UkeleleChicken::cargarDatos() {
    animales[0] = new Vaca("Vaca Argentina");
    animales[1] = new Pollo("Pollo de Granja");
    animales[2] = new Cerdo("Cerdo Domestico");

    carnes[0] = new CarneFresca(animales[0], "Muslo de pollo", 500.0, 2.0);
    carnes[1] = new CarneFresca(animales[1], "Pechuga de pollo", 300.0, 1.5);
    carnes[2] = new CarneFresca(animales[2], "Matambre de Cerdo", 400.0, 3.0);
    carnes[3] = new CarneFresca(animales[0], "Asado de vaca", 600.0, 2.5);
    carnes[4] = new CarneFresca(animales[1], "Nalga de vaca", 350.0, 1.2);

    clientes[0] = new Cliente("001", "Lola Mento", "Av. Dolores 5698");
    clientes[1] = new Cliente("002", "Estela Maris", "Av. Cebada 5103");
    clientes[2] = new Cliente("003", "Risa Pego", "Calle Falsa 7809");

    empleados[0] = new Empleado("E001", "Laura Esta", "Av. Nek 2000", "Cajero");
    empleados[1] = new Empleado("E002", "Luz Termica", "Av. El apagon 8650", "Repartidor");

    ordenes[0] = new Orden(clientes[0], carnes[0], "01/11/2024");
    ordenes[1] = new Orden(clientes[1], carnes[1], "12/11/2024");
    ordenes[2] = new Orden(clientes[2], carnes[2], "23/11/2024");
}

void UkeleleChicken::crearMilanga() {
    string tipoCarne;
    double precio;

   cout << "Ingrese el tipo de carne de la milanesa que desea (vaca, pollo, cerdo): ";
   cin >> tipoCarne;

    if (tipoCarne != "vaca" && tipoCarne != "pollo" && tipoCarne != "cerdo") {
        cout << "Tipo de carne no válido. Intente de nuevo." << endl;
        return;
    }

    cout << "Ingrese el precio de la milanesa: ";
    cin >> precio;

    string nombre = "Milanesa de " + tipoCarne;
    AltaMilanga* milanga = new AltaMilanga(nombre, precio);

    for (int i = 0; i < 5; ++i) {
        if (milangas[i] == nullptr) {
            milangas[i] = milanga;
            cout << "Milanesa Hecha: " << milanga->obtenerNombre() << " a $" << milanga->obtenerPrecio() << endl;
            return;
        }
    }

    cout << "No se pueden Hacer más milanesas." << endl;
    delete milanga;
}

void UkeleleChicken::mostrarOrdenes() const {
    for (int i = 0; i < 3; ++i) {
        ordenes[i]->mostrarDetalles();
    }
}

void UkeleleChicken::procesarPedido(int indexCliente, int indexCarne) {
    cout << "Procesando pedido de " << clientes[indexCliente]->obtenerNombre()
         << " para carne de " << carnes[indexCarne]->obtenerNombre() << endl;
}

void UkeleleChicken::mostrarDatos() {
    for (int i = 0; i < 3; ++i) {
        cout << "Animal " << i + 1 << ": " << animales[i]->obtenerRaza() << endl;
    }
}

void UkeleleChicken::ejecutarMenu() {
    int opcion;
    do {
        cout << "1. Mostrar animales\n";
        cout << "2. Mostrar ordenes\n";
        cout << "3. Procesar pedido\n";
        cout << "4. Crear milanesa\n";
        cout << "5. Mostrar inventario\n"; 
        cout << "6. Agregar artículo al inventario\n"; 
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarDatos();
                break;
            case 2:
                mostrarOrdenes();
                break;
            case 3: {
                int indexCliente, indexCarne;
                cout << "Ingrese el índice del cliente (0-2): (0=Lola, 1=Estela, 2=Risa) ";
                cin >> indexCliente;
                cout << "Ingrese el índice de la carne (0-4) (0=Muslo de pollo, 1= Pechuga de pollo, 2= Matambre de Cerdo, 3=Asado de vaca, 4= nalga de vaca): ";
                cin >> indexCarne;
                procesarPedido(indexCliente, indexCarne);
                break;
            }
            case 4:
                crearMilanga();
                break;
            case 5:
                inventario.mostrarInventario(); // Mostrar inventario
                break;
            case 6: {
                string nombre;
                double precio;
                cout << "Ingrese el nombre del artículo: ";
                cin >> nombre;
                cout << "Ingrese el precio del artículo: ";
                cin >> precio;
                Articulo* nuevoArticulo = new Articulo(nombre, precio);
                inventario.agregarArticulo(nuevoArticulo); 
                break;
            }
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 0);
}

}
