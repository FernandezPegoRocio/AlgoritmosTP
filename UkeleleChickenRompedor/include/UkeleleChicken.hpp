#ifndef UKELELECHICKEN_HPP
#define UKELELECHICKEN_HPP

#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Orden.hpp"
#include "CarneFresca.hpp"
#include "Animal.hpp"
#include "AltaMilanga.hpp"
#include "Inventario.hpp" 
using namespace std;

namespace UkeleleChicken {

class UkeleleChicken {
private:
    Inventario inventario; 
    Animal* animales[3];
    CarneFresca* carnes[5];
    Cliente* clientes[3];
    Empleado* empleados[2];
    Orden* ordenes[3];
    AltaMilanga* milangas[5];

public:
    UkeleleChicken();
    ~UkeleleChicken(); 
    void cargarDatos();
    void mostrarDatos();
    void procesarPedido(int indexCliente, int indexCarne);
    void mostrarOrdenes() const;
    void crearMilanga();
    void ejecutarMenu();
};

} 

#endif
