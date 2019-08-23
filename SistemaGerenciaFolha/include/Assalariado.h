#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"


class Assalariado : public Funcionario{
    public:
        Assalariado(std::string nome, int matricula, double salario);
        virtual ~Assalariado();

        double getSalario();
        void setSalario(double salario);

        double calcularSalario();

    protected:
        double salario;

};

#endif // ASSALARIADO_H
