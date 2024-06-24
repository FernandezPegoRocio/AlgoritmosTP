//Una aplicación para un restaurante que tiene:
//primer plato, plato principal y postre, toma pedidos de los mozos.
//Estos envían la comanda codificada por número para cada plato.
//El cocinero recibe el pedido en formato de texto con:
//el número de mesa, nombre del mozo, fecha, hora,
//primer plato, plato principal y postre.
//Se pide desarrollar una APP que pida la comanda y muestre por pantalla la Info solicitada.

#include <iostream>
using namespace std;
//Primero introducir los platos para el pedido
// Definiciones de tipos enumerados para nombres y platos
//Nombre de mozo
enum class Mozo {
    OnionKing = 1,
    UnicornChef,
    KevinTheDog,
    CatChef
};
// platos del menú
enum class Plato {
    EmpanadaJyQ = 5,
    PinchoBarbacoa,
    SopaCebolla,
    Ensalada,
    BurritoDeCarne,
    PizzaDeTomate,
    HamburguesaconPapas,
    PalitosDePesacoyPapa,
    CopadeFruta,
    FlanconDulcedeLeche,
    pasteldeZanahoria,
    helado
};
//comienzo del programa
int main() {
    int mesaNum;
    Mozo mozo;
    string fecha;
    string hora;
    Plato primerPlato, platoPrincipal, postre;

    // Ingresar número de mesa
    cout << "Ingrese el número de mesa del cliente: ";
    cin >> mesaNum;
    cin.ignore();

    // Ingresar nombre del mozo
    int opcion;
    cout << "Seleccione el mozo de la mesa:" << endl;
    cout << "1- OnionKing" << endl;
    cout << "2- UnicornChef" << endl;
    cout << "3- KevinTheDog" << endl;
    cout << "4- CatChef" << endl;
    cin >> opcion;
    cin.ignore();

    switch (opcion) {
        case 1:
            mozo = Mozo::OnionKing;
            break;
        case 2:
            mozo = Mozo::UnicornChef;
            break;
        case 3:
            mozo = Mozo::KevinTheDog;
            break;
        case 4:
            mozo = Mozo::CatChef;
            break;
        default:
            cout << "Opción inválida. Seleccionando OnionKing por defecto." << endl;
            mozo = Mozo::OnionKing;
            break;
    }

    // Ingresar fecha de comanda
    cout << "Ingrese la fecha en formato dd.mm.aa: ";
    getline(cin, fecha);

    // Ingresar hora de comanda
    cout << "Ingrese la hora en formato hh:mm: ";
    getline(cin, hora);

    // Selección de primer plato empieza de la opción 5
    cout << "Seleccione el primer plato:" << endl;
    cout << "5- EmpanadaJyQ" << endl;
    cout << "6- PinchoBarbacoa" << endl;
    cout << "7- SopaCebolla" << endl;
    cout << "8- Ensalada" << endl;
    cin >> opcion;
    cin.ignore();
    primerPlato = static_cast<Plato>(opcion);

    // Selección de plato principal empieza de la selección 9
    cout << "Seleccione el plato principal:" << endl;
    cout << "9- BurritoDeCarne" << endl;
    cout << "10- PizzaDeTomate" << endl;
    cout << "11- HamburguesaconPapas" << endl;
    cout << "12- PalitosDePesacoyPapa" << endl;
    cin >> opcion;
    cin.ignore();
    platoPrincipal = static_cast<Plato>(opcion);

    // Selección de postre las opciones empiezan desde el 13
    cout << "Seleccione el postre:" << endl;
    cout << "13- CopadeFruta" << endl;
    cout << "14- FlanconDulcedeLeche" << endl;
    cout << "15- pasteldeZanahoria" << endl;
    cout << "16- helado" << endl;
    cin >> opcion;
    cin.ignore();
    postre = static_cast<Plato>(opcion);

    // Mostrar la comanda completa, === devuelve el valor de lo elegido 
    cout << "=== Comanda ===" << endl;
    cout << "Nombre del Mozo: ";
    switch (mozo) {
        case Mozo::OnionKing:
            cout << "OnionKing";
            break;
        case Mozo::UnicornChef:
            cout << "UnicornChef";
            break;
        case Mozo::KevinTheDog:
            cout << "KevinTheDog";
            break;
        case Mozo::CatChef:
            cout << "CatChef";
            break;
        default:
            cout << "Desconocido";
            break;
    }
    cout << endl;

    cout << "Primer plato elegido: ";
    switch (primerPlato) {
        case Plato::EmpanadaJyQ:
            cout << "EmpanadaJyQ";
            break;
        case Plato::PinchoBarbacoa:
            cout << "PinchoBarbacoa";
            break;
        case Plato::SopaCebolla:
            cout << "SopaCebolla";
            break;
        case Plato::Ensalada:
            cout << "Ensalada";
            break;
        default:
            cout << "Desconocido";
            break;
    }
    cout << endl;

    cout << "Plato principal seleccionado: ";
    switch (platoPrincipal) {
        case Plato::BurritoDeCarne:
            cout << "BurritoDeCarne";
            break;
        case Plato::PizzaDeTomate:
            cout << "PizzaDeTomate";
            break;
        case Plato::HamburguesaconPapas:
            cout << "HamburguesaconPapas";
            break;
        case Plato::PalitosDePesacoyPapa:
            cout << "PalitosDePesacoyPapa";
            break;
        default:
            cout << "Desconocido";
            break;
    }
    cout << endl;

    cout << "Postre escogido: ";
    switch (postre) {
        case Plato::CopadeFruta:
            cout << "CopadeFruta";
            break;
        case Plato::FlanconDulcedeLeche:
            cout << "FlanconDulcedeLeche";
            break;
        case Plato::pasteldeZanahoria:
            cout << "pasteldeZanahoria";
            break;
        case Plato::helado:
            cout << "helado";
            break;
        default:
            cout << "Desconocido";
            break;
    }
    cout << endl;

    cout << "Mesa de comanda: " << mesaNum << endl;
    cout << "Fecha: " << fecha << " Hora: " << hora << endl;

    return 0;
}