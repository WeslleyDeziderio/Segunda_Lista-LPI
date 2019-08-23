#include "Horista.h"

Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas){
    this->nome = nome;
    this->matricula = matricula;
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

Horista::~Horista(){

}

double Horista::getSalarioPorHora(){
    return this->salarioPorHora;
}

double Horista::getHorasTrabalhadas(){
    return this->horasTrabalhadas;
}

void Horista::setSalarioPorHora(double salarioPorHora){
    this->salarioPorHora = salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calcularSalario(double salarioPorHora, double horasTrabalhadas){
    double salario;

    salario = salarioPorHora*horasTrabalhadas;
    setSalarioT(salario);
    return salario;

    if(horasTrabalhadas > 40){
        salario = (1.5*salarioPorHora)*horasTrabalhadas;
        setSalarioT(salario);
        return salario;
    }
}

double Horista::getSalarioT(){
    return this->salarioT;
}

void Horista::setSalarioT(double salarioT){
    this->salarioT = salarioT;
}
