#include "Funcionario.h"

Funcionario::Funcionario(){
    this->nome = "";
    this->matricula = 0;
}

Funcionario::~Funcionario(){

}

std::string Funcionario::getNome(){
    return this->nome;
}

int Funcionario::getMatricula(){
    return this->matricula;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

double Funcionario::calcularSalario(){

}
