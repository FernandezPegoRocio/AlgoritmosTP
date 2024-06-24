//Un Verdulería nos pide que armemos el pedido para el mayorista 
//para lo cual deberemos pedir:
//al usuario 
//el código proveedor, 
//razón social, 
//fecha de solicitud 
//fecha de entrega. 
//Las frutas estarán enumeradas (tomar solo 6 a modo de ejemplo), 
//mostrando los datos por pantalla.
#include <iostream>
#include <string>
using namespace std;
//clase de frutas

//código proveedor
enum class ProviderCode {
                   manzana = 401,
                   mandarina = 402,
                   naranja = 403,
                   banana = 404,
                   pera = 405,
                   limon = 406 };

string getFruitName(ProviderCode code){
    switch (code){
                 case ProviderCode::manzana:
                 return "manzana";
                 case ProviderCode:: mandarina:
                 return "mandarina";
                 case ProviderCode::naranja:
                 return "naranja";
                 case ProviderCode:: banana:
                 return "banana";
                 case ProviderCode::pera:
                 return "pera";
                 case ProviderCode::limon:
                 return "limon";
                 default:
                 return "desconocido";
                 }
    }

int main(){
// primero usuario, código, razón social, fecha de solicitud, fecha de entrega. 
//ingles     user,  code,   businessName, applicationDate,    deadLine
string user, 
       code, 
       businessName,
       name,
       lastName,
       adress,
       cuil, 
       applicationDate, 
       deadLine;
//Almacenar la seleccion de frutas
string selectFruit;
           
// usuario user 
    cout<< "Ingresa tu Usuario: ";
    cin >> user;
            
//Ingreso de datos Razón Social
    cout<< "Ingresa los datos de razon social (nombre, apellido, direccion y cuil)" <<endl;
    cout<< "Ingresa nombre: ";
    cin >> name;
    cout<<"Ingresa apellido: ";
    cin>>lastName;
    cout << "Ingresa direccion";      
    cin.ignore();
    getline(cin,adress); 
    cout<<"Ingresa tu CUIL:";
    cin>>cuil;
            
    cout << "Ingrese la fecha de solicitud en formato dd.mm.aa: ";
    cin.ignore();
    getline(cin, applicationDate);
            
    cout << "Ingrese la fecha de entrega en formato dd.mm.aa: ";
    cin.ignore();
    getline(cin,  deadLine);
            
// Selección de frutas para encargar, se puede solicitar más de un opción 
    cout <<"Seleccione las frutas: (ingrese 0 para finalizar el encargo)" << endl;
    cout << "1- manzana" << endl;
    cout << "2- mandarina" << endl;
    cout << "3- naranja" << endl;
    cout << "4- banana" << endl;
    cout << "5- pera" << endl;
    cout << "6- limon" << endl;
    
 //
    int opcionFruit;
    while (true){
    cin >> opcionFruit;
    if (opcionFruit == 0){
    break; } 
    else if (opcionFruit< 1 || opcionFruit > 6); {
    cout << "Opción inválida, por favor intente nuevamente." << endl;    
    }{
    ProviderCode code;        
    switch (opcionFruit) {
        case 1:
        code = ProviderCode::manzana;
        break;
        case 2:
        code = ProviderCode::mandarina;
        break;
        case 3:
        code = ProviderCode::naranja;
        break;
        case 4:
         code = ProviderCode::banana;
        break;
        case 5:
        code = ProviderCode::pera;
        break;
        case 6:
        code = ProviderCode::limon;
        break;
        default:
        cout<< "El dato ingresado no es valido, prueva nuevamente"<< endl;
//al elegir uno se forma la lista y se puede continuar agregando mas frutas hasta poner 0cero
        continue;
// Reinicia el bucle en caso de opción predeterminada
        }
//Todas las frutas encargadas se mostraran con el codigo de cada una
//+= cadena de las frutas seleccionadas 
//(static_cast<int>(code)) El código,se convierte en un valor entero 
//"-" es el espacio entre dos ideas
// getFruitName(code) devuelve el valor con el nombre de la fruta
//"\n" cambio de línea despues de cada opción
 selectFruit += to_string(static_cast<int>(code)) + " - " + getFruitName(code) + "\n";
}
//mostrar junta toda la información, === devuelve el valor de lo elegido
    cout << endl <<"=== Pedido de frutas ===" << endl;   
//hacer lista, con todo lo ingresado anteriormente              
       cout << "Tu Usuario: " << user << endl;
       cout << "Razón Social: " << name <<""<< lastName <<""<< endl;
       cout << "Direccion de entrega"<< adress << endl;  
       cout << "CUIL" << cuil << endl; 
       cout << "Fecha de solicitud"<< applicationDate << endl; 
       cout << "Fecha de entrega"<< deadLine << endl; 
            
      cout << endl <<"=== Pedido de frutas ===" << endl;
      cout << selectFruit;}
             
return 0;
}