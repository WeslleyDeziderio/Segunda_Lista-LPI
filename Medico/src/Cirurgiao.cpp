#include "../include/Cirurgiao.h"

Cirurgiao::Cirurgiao(std::string nome, double peso, double altura){
    this->nome = nome;
    this->peso = peso;
    this->altura = altura;
}

Cirurgiao::~Cirurgiao(){
    //dtor
}

void Cirurgiao::imprimeEspecializacao(){
    std::cout << "Especializacao: cirurgiao" << std::endl;
}

void Cirurgiao::imprimeOperacao(){
    std::cout << "Operacao: realiza cirurgias" << std::endl;
}

