#include <iostream>
#include "Pedido.h"
#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"

int main(void){
    RestauranteCaseiro rc = RestauranteCaseiro();

    Pedido p1;
    p1 = Pedido("Calabresa acebolada", 12, 1, 15);
    rc.adicionaAoPedido(1, p1);
    p1 = Pedido("Cerveja", 124, 1, 7);
    rc.adicionaAoPedido(1, p1);
    p1 = Pedido("Agua com gas", 120, 2, 7);
    rc.adicionaAoPedido(1, p1);

    p1 = Pedido("Vinho", 200, 1, 40);
    rc.adicionaAoPedido(3, p1);
    p1 = Pedido("Vinho", 200, 2, 40);
    rc.adicionaAoPedido(3, p1);
    p1 = Pedido("Vinho", 200, 1, 40);
    rc.adicionaAoPedido(3, p1);

    rc.print();

    std::cout << "Total rest: " << rc.calculaTotalRestaurante();

    return 0;
}
