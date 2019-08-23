#include "RestauranteCaseiro.h"
#include <iostream>

RestauranteCaseiro::RestauranteCaseiro(){
    //ctor
}

RestauranteCaseiro::~RestauranteCaseiro(){
    //dtor
}

void RestauranteCaseiro::adicionaAoPedido(int Imesa, Pedido d){
    mesas[Imesa].adicionaAoPedido(d);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;
    for(int i = 0; i < 20; i++){
        total += mesas[i].calculaTotal();
    }
    return total;
}

void RestauranteCaseiro::print(){
    for(int i = 0; i < 20; i++) {
        std::cout << "Mesa " << i << ": \n";
        mesas[i].print();
        std::cout << "\n\n";
    }
}
