#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario{
    public:
        Comissionado(std::string nome, int matricula, double salario, double vendasSemanais, double percentualComissao);
        virtual ~Comissionado();

        double getVendasSemanais();
        double getPercentualComissao();
        double getSalario();
        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);
        void setSalario(double salario);

        double calcularSalario(double vendasSemanais, double salario, double percentualComissao);

    protected:
        double vendasSemanais;
        double percentualComissao;
        double salario;

};

#endif // COMISSIONADO_H
