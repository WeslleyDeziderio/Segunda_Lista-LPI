#include "../include/Ginecologista.h"

Ginecologista::Ginecologista(std::string nome, double peso, double altura){
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}

Ginecologista::~Ginecologista(){
    //dtor
}
void Ginecologista::imprimeEspecializacao(){
    std::cout << "Especializacao: ginecologia" << std::endl;
}

void Ginecologista::imprimeOperacao(){
    std::cout << "Operacao: atendimento voltado exames na regiao intima das mulheres" << std::endl;
}
