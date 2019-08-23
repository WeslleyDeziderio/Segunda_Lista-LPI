#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario{
    public:
        Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
        virtual ~Horista();

        double getSalarioPorHora();
        double getHorasTrabalhadas();
        double getSalarioT();
        void setSalarioPorHora(double salarioPorHora);
        void setHorasTrabalhadas(double horasTrabalhadas);
        void setSalarioT(double salarioT);

        double calcularSalario(double salarioPorHora, double horasTrabalhadas);

    protected:
        double salarioPorHora;
        double horasTrabalhadas;
        double salarioT;

};

#endif // HORISTA_H
