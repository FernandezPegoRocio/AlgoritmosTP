//La Directora nos Encarga llevar un registro de los Alumnos por carrera y año . 
//Para ello deberemos armar un Programa que guarde los datos de los Alumnos en Alumnos.txt.
//Adicionalmente deberá realizar las siguientes Tareas:
//1. Mostrar Listado de los Alumnos x pantalla
//2. Mostrar un Alumno Determinado (buscar y mostrar x plantalla)
//3. Insertar un Alumno
//4. Eliminar un Alumno
//5. Buscar un alumno
//6. Que permita Ordenar de Forma Ascendente y Descendente los Alumnos y Mostrarlos x pantalla
//7. Opcional - Que permita elegir el campo de Ordenamiento.
//Algunas Consideraciones:
//a. Usar Archivo para persistir y recuperar
//b. Usar Estructuras, contador y arrays (max 100 alumnos)
//c. Usar sobrecarga de Operadores
//bool operator&gt;(tRegistro opIzq, tRegistro opDer);
//bool operator&lt;(tRegistro opIzq, tRegistro opDer);
//d. Modularizar en funciones la implementación
//e. Mantener el Main lo mas pequeño posible.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_ESTUDIANTES = 100;

struct Estudiante {
    string apellido;
    string nombre;
    string dni;
    string carrera;
    int curso;
    char division;

    bool operator<(const Estudiante& other) const {
        return apellido < other.apellido;
    }

    bool operator>(const Estudiante& other) const {
        return apellido > other.apellido;
    }
};

Estudiante estudiantes[MAX_ESTUDIANTES];
int numEstudiantes = 0;

void cargarDatos() {
    ifstream file("Alumnos.txt");
    if (file.is_open()) {
        numEstudiantes = 0;
        while (getline(file, estudiantes[numEstudiantes].apellido) &&
               getline(file, estudiantes[numEstudiantes].nombre) &&
               getline(file, estudiantes[numEstudiantes].dni) &&
               getline(file, estudiantes[numEstudiantes].carrera) &&
               file >> estudiantes[numEstudiantes].curso >> estudiantes[numEstudiantes].division &&
               file.ignore()) { // Para ignorar el salto de línea después del carácter
            numEstudiantes++;
        }
        file.close();
    }
}

void guardarDatos() {
    ofstream file("Alumnos.txt");
    if (file.is_open()) {
        for (int i = 0; i < numEstudiantes; ++i) {
            file << estudiantes[i].apellido << '\n'
                 << estudiantes[i].nombre << '\n'
                 << estudiantes[i].dni << '\n'
                 << estudiantes[i].carrera << '\n'
                 << estudiantes[i].curso << '\n'
                 << estudiantes[i].division << '\n';
        }
        file.close();
    }
}

void mostrarListado() {
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << estudiantes[i].apellido << ' ' << estudiantes[i].nombre << ' ' << estudiantes[i].dni << ' '
             << estudiantes[i].carrera << ' ' << estudiantes[i].curso << ' ' << estudiantes[i].division << '\n';
    }
}

void mostrarEstudiante(int index) {
    if (index >= 0 && index < numEstudiantes) {
        cout << estudiantes[index].apellido << ' ' << estudiantes[index].nombre << ' ' << estudiantes[index].dni << ' '
             << estudiantes[index].carrera << ' ' << estudiantes[index].curso << ' ' << estudiantes[index].division << '\n';
    } else {
        cout << "Estudiante no encontrado.\n";
    }
}

void insertarEstudiante() {
    if (numEstudiantes < MAX_ESTUDIANTES) {
        cout << "Ingrese apellido: ";
        getline(cin, estudiantes[numEstudiantes].apellido);
        cout << "Ingrese nombre: ";
        getline(cin, estudiantes[numEstudiantes].nombre);
        cout << "Ingrese DNI: ";
        getline(cin, estudiantes[numEstudiantes].dni);
        cout << "Ingrese carrera: ";
        getline(cin, estudiantes[numEstudiantes].carrera);
        cout << "Ingrese curso: ";
        cin >> estudiantes[numEstudiantes].curso;
        cout << "Ingrese división: ";
        cin >> estudiantes[numEstudiantes].division;
        cin.ignore(); // Limpiar el buffer de entrada después de leer datos numéricos
        numEstudiantes++;
        guardarDatos();
    } else {
        cout << "Capacidad máxima alcanzada.\n";
    }
}

void eliminarEstudiante(int index) {
    if (index >= 0 && index < numEstudiantes) {
        for (int i = index; i < numEstudiantes - 1; ++i) {
            estudiantes[i] = estudiantes[i + 1];
        }
        numEstudiantes--;
        guardarDatos();
    } else {
        cout << "Estudiante no encontrado.\n";
    }
}

void buscarEstudiante(const string& dni) {
    for (int i = 0; i < numEstudiantes; ++i) {
        if (estudiantes[i].dni == dni) {
            mostrarEstudiante(i);
            return;
        }
    }
    cout << "Estudiante no encontrado.\n";
}

void ordenarEstudiantes(bool ascendente) {
    for (int i = 0; i < numEstudiantes - 1; ++i) {
        for (int j = 0; j < numEstudiantes - i - 1; ++j) {
            if ((ascendente && estudiantes[j] > estudiantes[j + 1]) || 
                (!ascendente && estudiantes[j] < estudiantes[j + 1])) {
                Estudiante temp = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = temp;
            }
        }
    }
    mostrarListado();
}

int main() {
    cargarDatos();

    int opcion;
    do {
        cout << "1. Mostrar listado\n";
        cout << "2. Mostrar un estudiante\n";
        cout << "3. Insertar un estudiante\n";
        cout << "4. Eliminar un estudiante\n";
        cout << "5. Buscar un estudiante\n";
        cout << "6. Ordenar estudiantes\n";
        cout << "7. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                mostrarListado();
                break;
            case 2: {
                string dni;
                cout << "Ingrese DNI del estudiante: ";
                getline(cin, dni);
                buscarEstudiante(dni);
                break;
            }
            case 3:
                insertarEstudiante();
                break;
            case 4: {
                string dni;
                cout << "Ingrese DNI del estudiante a eliminar: ";
                getline(cin, dni);
                for (int i = 0; i < numEstudiantes; ++i) {
                    if (estudiantes[i].dni == dni) {
                        eliminarEstudiante(i);
                        break;
                    }
                }
                break;
            }
            case 5: {
                string dni;
                cout << "Ingrese DNI del estudiante a buscar: ";
                getline(cin, dni);
                buscarEstudiante(dni);
                break;
            }
            case 6: {
                int orden;
                cout << "1. Ascendente\n";
                cout << "2. Descendente\n";
                cout << "Ingrese opción de ordenamiento: ";
                cin >> orden;
                cin.ignore(); // Limpiar el buffer de entrada
                ordenarEstudiantes(orden == 1);
                break;
            }
            case 7:
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 7);

    return 0;
}
