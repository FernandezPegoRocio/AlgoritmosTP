#include "admiEstudiantes.hpp"
#include "estudiante.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    admiEstudiantes admin;
    admin.cargarDesdeArchivo("Alumnos.txt");

    int opcion;
    do {
        cout << "1. Mostrar Listado de Alumnos\n";
        cout << "2. Insertar un Estudiante\n";
        cout << "3. Eliminar un Estudiante\n";
        cout << "4. Buscar un Estudiante\n";
        cout << "5. Ordenar Ascendente\n";
        cout << "6. Ordenar Descendente\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                admin.mostrarListado();
                break;
            case 2: {
                string nombre, carrera;
                int anio;
                cout << "Nombre: ";
                cin >> nombre;
                cout << "Carrera: ";
                cin >> carrera;
                cout << "Año: ";
                cin >> anio;
                admin.insertarEstudiante(Estudiante(nombre, carrera, anio));
                break;
            }
            case 3: {
                string nombre;
                cout << "Nombre del estudiante a eliminar: ";
                cin >> nombre;
                admin.eliminarEstudiante(nombre);
                break;
            }
            case 4: {
                string nombre;
                cout << "Nombre del estudiante a buscar: ";
                cin >> nombre;
                Estudiante* est = admin.buscarEstudiante(nombre);
                if (est) {
                    cout << "Encontrado: " << est->nombre << ", " << est->carrera << ", Año: " << est->anio << endl;
                } else {
                    cout << "Estudiante no encontrado." << endl;
                }
                break;
            }
            case 5:
                admin.ordenarEstudiantes(true);
                admin.mostrarListado();
                break;
            case 6:
                admin.ordenarEstudiantes(false);
                admin.mostrarListado();
                break;
        }
    } while (opcion != 0);

    admin.guardarEnArchivo("Alumnos.txt");

    return 0;
}
