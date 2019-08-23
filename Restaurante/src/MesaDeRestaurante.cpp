#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    index = 0;
}

MesaDeRestaurante::~MesaDeRestaurante(){
    //dtor
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    for(int i = 0; i < 10 ; i++){
        if(pedidos[i].getDescricao() == p.getDescricao()){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + p.getQuantidade());
            return;
        }
    }

    pedidos[index] = p;
    index++;
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < 10; i++)
        pedidos[i].setQuantidade(0);
}

double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for(int i = 0; i < 10; i++){
        total += pedidos[i].getPreco() * pedidos[i].getQuantidade();
    }
    return total;
}

void MesaDeRestaurante::print(){
    for(int i = 0; i < 10; i++){
        if(pedidos[i].getQuantidade() > 0){
            pedidos[i].print();
        }
    }
}
