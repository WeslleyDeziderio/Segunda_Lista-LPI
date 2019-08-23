#include "../include/Otorrino.h"

Otorrino::Otorrino(std::string nome, double peso, double altura){
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}

Otorrino::~Otorrino(){
    //dtor
}

void Otorrino::imprimeEspecializacao(){
    std::cout << "Especialização: otorrinolaringologia" << std::endl;
}

void Otorrino::imprimeOperacao(){
    std::cout << "Operacao: realizar exames na regiao da laringe e faringe" << std::endl;
}

