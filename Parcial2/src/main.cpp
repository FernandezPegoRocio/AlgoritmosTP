#include "../include/Articulo.hpp"
#include "../include/Cliente.hpp"
#include "../include/Pedido.hpp"
#include "../include/Empleado.hpp"
#include "../include/Equipo.hpp"
#include <iostream>

int main() {
    Equipo equipoRopa("EQ001", "Ropa");
    Equipo equipoCalzado("EQ002", "Calzado");

    Articulo* articulo1 = new Articulo("A001", "Bermuda", 50.0);
    Articulo* articulo2 = new Articulo("A002", "Zapato", 80.0);
    Articulo* articulo3 = new Articulo("A003", "Ojota", 30.0);

    Cliente* cliente1 = new Cliente("C001", "Levantando Paredes", "310 Calle Genova");
    Cliente* cliente2 = new Cliente("C002", "Lola Mento ", "861 Calle Avda. Juan B. Justo");

    Empleado* empleado1 = new Empleado("E001", "Parahoy", "Vendedor");

    Pedido* pedidoCliente1 = new Pedido("O001", cliente1, empleado1); 
    pedidoCliente1->adjuntar(articulo1);

    Pedido* pedidoCliente2 = new Pedido("O002", cliente2, empleado1); 
    pedidoCliente2->adjuntar(articulo2);
    pedidoCliente2->adjuntar(articulo3);

    pedidoCliente1->mostrar();
    pedidoCliente2->mostrar();
    
    delete articulo1;
    delete articulo2;
    delete articulo3;
    delete cliente1;
    delete cliente2;
    delete empleado1;
    delete pedidoCliente1;
    delete pedidoCliente2;

    return 0;
}


