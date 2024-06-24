//Un empresa de viaje nos pide que realicemos un programa para tomar reservas en avión,
//las mismas pueden ser clase Primera, Bussiness y económica,
//además del dni apellido y nombre, aeropuerto origen y destino:
//Código Aeropuerto
//1. Bahía Blanca-BHI
//2. Buenos Aires Aeroparque-AEP
//3. Buenos Aires El Palomar-EPA
//4. Buenos Aires Ezeiza-EZE
//5. San Carlos de Bariloche-BRC
//6. San Fernando del Valle de Catamarca-CTC
//7. Comodoro Rivadavia-CRD
//El usuario introduce los datos personales, la clase y el origen – destino,
//mostrando el resultado por pantalla.

#include <iostream>
#include <string>
using namespace std;
//introducir datos personales
//clase Primera, Bussiness y económica
//Código Aeropuerto / destino

enum class lasClases {Primera,
                      Bussiness,
                      Economica};
enum class destinos {Bahía_Blanca_BHI,
                     Buenos_Aires_Aeroparque_AEP,
                     Buenos_Aires_El_Palomar_EPA,
                     Buenos_Aires_Ezeiza_EZE,
                     San_Carlos_de_Bariloche_BRC,
                     San_Fernando_del_Valle_de_Catamarca_CTC,
                     Comodoro_Rivadavia_CRD};
int main(){
//introduce clases
    string name, lastname, document;
    int opcionClase, opcionOrigen, opcionDestino;
            
//introduce los datos personales
    cout << "Ingresa nombre: ";
    cin >> name;
    cout<<"Ingresa apellido: ";
    cin>>lastname;
    cout<<"Ingresa tu documento de identificación:";
    cin>>document;

//selección de clase
    int opcion;
    cout << "Ingresa la clase en la que viajas" << endl;
    cout << "1- Primera" << endl;
    cout << "2- Bussiness" << endl;
    cout << "3- Economica" << endl;
    cin>> opcionClase;
            
 lasClases claseSeleccionada;
  switch (opcionClase) {
        case 1:
            claseSeleccionada = lasClases::Primera;
            break;
        case 2:
            claseSeleccionada = lasClases::Bussiness;
            break;
        case 3:
            claseSeleccionada = lasClases::Economica;
            break;
         default:
            cout << "Opción inválida. Seleccionando Economica por defecto." << endl;
            claseSeleccionada = lasClases::Economica;
            break;
  }

  //selección de código Aeropuerto de donde sale
    
    cout << "Ingresa tu origen de viaje" << endl;
    cout << "4- Bahía Blanca (BHI)" << endl;
    cout << "5- Buenos Aires Aeroparque (AEP)" << endl;
    cout << "6- Buenos Aires El Palomar (EPA)" << endl;
    cout << "7- Buenos Aires Ezeiza (EZE)" << endl;
    cout << "8- San Carlos de Bariloche (BRC)" << endl;
    cout << "9- San Fernando del Valle de Catamarca (CTC)" << endl;
    cout << "10- Comodoro Rivadavia (CRD)" << endl;
    cin >> opcionOrigen;
    cin.ignore();
    destinos origenSeleccionado;
    origenSeleccionado = static_cast<destinos>(opcionOrigen - 4);

//selección de destino Aeropuerto
   
    cout << "Ingresa tu destino de viaje" << endl;
    cout << "11- Bahía Blanca (BHI)" << endl;
    cout << "12- Buenos Aires Aeroparque (AEP)" << endl;
    cout << "13- Buenos Aires El Palomar (EPA)" << endl;
    cout << "14- Buenos Aires Ezeiza (EZE)" << endl;
    cout << "15- San Carlos de Bariloche (BRC)" << endl;
    cout << "16- San Fernando del Valle de Catamarca (CTC)" << endl;
    cout << "17- Comodoro Rivadavia (CRD)" << endl;
    cin >> opcionDestino;
    cin.ignore();
   destinos destinoSeleccionado;
    destinoSeleccionado = static_cast<destinos>(opcionDestino - 11);


// Mostrar el pedido de viaje completo, === devuelve el valor de lo elegido de las sselecciones anteriores
    cout << "=== Reserva de avión ===" << endl;
    cout << "Nombre"<< name << "Apellido"<< lastname << "Documento"<< document << endl;
    cout<< "ingresa la clase en la que viaja";
    switch (claseSeleccionada) {
        case lasClases::Primera:
            cout << "primera"<< endl;
            break;
        case lasClases::Bussiness:
            cout << "Bussiness"<< endl;
            break;
        case lasClases::Economica:
            cout << "Economica"<< endl;
            break;
}
     cout << "Ingresa tu origen de viaje" << endl;
    switch (origenSeleccionado) {
        case destinos::Bahía_Blanca_BHI:
            cout << "Bahía Blanca (BHI)"<< endl;
            break;
        case destinos::Buenos_Aires_Aeroparque_AEP:
            cout << "Buenos Aires Aeroparque (AEP)"<< endl;
            break;
        case destinos::Buenos_Aires_El_Palomar_EPA:
            cout << "Buenos Aires El Palomar (EPA)"<< endl;
            break;
        case destinos::Buenos_Aires_Ezeiza_EZE:
            cout << "Buenos Aires Ezeiza (EZE)"<< endl;
            break;
        case destinos::San_Carlos_de_Bariloche_BRC:
            cout << "San Carlos de Bariloche (BRC)"<< endl;
            break;
        case destinos::San_Fernando_del_Valle_de_Catamarca_CTC:
            cout << "San Fernando del Valle de Catamarca (CTC)"<< endl;
            break;
         case destinos::Comodoro_Rivadavia_CRD:
            cout << "Comodoro Rivadavia (CRD)"<< endl;
            break;
  }
    cout << "Ingresa tu destino de viaje" << endl;
    switch (destinoSeleccionado) {
        case destinos::Bahía_Blanca_BHI:
            cout << "Bahía Blanca (BHI)"<< endl;
            break;
        case destinos::Buenos_Aires_Aeroparque_AEP:
            cout << "Buenos Aires Aeroparque (AEP)"<< endl;
            break;
        case destinos::Buenos_Aires_El_Palomar_EPA:
            cout << "Buenos Aires El Palomar (EPA)"<< endl;
            break;
        case destinos::Buenos_Aires_Ezeiza_EZE:
            cout << "Buenos Aires Ezeiza (EZE)"<< endl;
            break;
        case destinos::San_Carlos_de_Bariloche_BRC:
            cout << "San Carlos de Bariloche (BRC)"<< endl;
            break;
        case destinos::San_Fernando_del_Valle_de_Catamarca_CTC:
            cout << "San Fernando del Valle de Catamarca (CTC)"<< endl;
            break;
        case destinos::Comodoro_Rivadavia_CRD:
            cout << "Comodoro Rivadavia-CRD"<< endl;
            break;
  }
     
return 0;

}