#include "Pedido.h"
#include <iostream>

Pedido::Pedido(){
    std::string descricao = "";
    int numero = 0;
    int quantidade = 0;
    double preco = 0;
}

Pedido::Pedido(std::string descricao, int numero, int quantidade, double preco){
    this->descricao = descricao;
    this->numero = numero;
    this->quantidade = quantidade;
    this->preco = preco;
}

Pedido::~Pedido(){
    //dtor
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade(){
    return quantidade;
}

void Pedido::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Pedido::print(){
    std::cout << descricao << ", Quant: " << quantidade << ", Preco: " << preco <<
    ", Total: " << preco*quantidade << std::endl;
}
