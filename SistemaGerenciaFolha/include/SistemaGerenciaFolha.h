#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

#include <vector>

class SistemaGerenciaFolha{
    public:
        SistemaGerenciaFolha();
        virtual ~SistemaGerenciaFolha();

        void setFuncionarios();

        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

    protected:
        std::vector <Funcionario*> funcionarios;

};

#endif // SISTEMAGERENCIAFOLHA_H
