#include "Comissionado.h"

Comissionado::Comissionado(std::string nome, int matricula, double salario, double vendasSemanais, double percentualComissao){
    this->nome = nome;
    this->matricula = matricula;
    this->salario = salario;
    this->vendasSemanais = vendasSemanais;
    this->percentualComissao = percentualComissao;
}

Comissionado::~Comissionado(){

}

double Comissionado::getVendasSemanais(){
    return this->vendasSemanais;
}

double Comissionado::getPercentualComissao(){
    return this->percentualComissao;
}

double Comissionado::getSalario(){
    return this->salario;
}

void Comissionado::setVendasSemanais(double vendasSemanais){
    this->vendasSemanais = vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}

void Comissionado::setSalario(double salario){
    this->salario = salario;
}

double Comissionado::calcularSalario(double vendasSemanais, double salario, double percentualComissao){
    double salarioTotal;

    salarioTotal = salario + (vendasSemanais*percentualComissao);
    setSalario(salarioTotal);
    return salarioTotal;
}
