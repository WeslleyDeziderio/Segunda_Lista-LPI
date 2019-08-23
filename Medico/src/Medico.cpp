#include "../include/Medico.h"

Medico::Medico(){
    std::string nome = "";
    double peso = 0;
    double altura = 0;
}

Medico::Medico(std::string nome, double peso, double altura){
    this->nome = nome;
    this->peso = peso;
    this->altura = altura;
}

Medico::~Medico(){
    //dtor
}

void Medico::imprimeEspecializacao(){

}

void Medico::imprimeOperacao(){

}

void Medico::setNome(std::string nome){
    this->nome = nome;
}

std::string Medico::getNome(){
    return nome;
}



