#include "../include/Oftalmologista.h"

Oftalmologista::Oftalmologista(std::string nome, double peso, double altura){
    this->nome = nome;
    this->peso = peso;
    this->altura = altura;
}

Oftalmologista::~Oftalmologista(){
    //dtor
}

void Oftalmologista::imprimeEspecializacao(){
    std::cout << "Especializacao: oftalmologia" << std::endl;
}

void Oftalmologista::imprimeOperacao(){
    std::cout << "Operacao: atendimento especifico em oftalmologia" << std::endl;
}
