#include "Assalariado.h"

Assalariado::Assalariado(std::string nome, int matricula, double salario){
    this->nome = nome;
    this->matricula = matricula;
    this->salario = salario;
}

Assalariado::~Assalariado(){

}

double Assalariado::getSalario(){
    return this->salario;
}

void Assalariado::setSalario(double salario){
    this->salario = salario;
}

double Assalariado::calcularSalario(){
    return this->salario;
}
