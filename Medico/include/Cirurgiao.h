#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include "Medico.h"
#include <string>
#include <iostream>

class Cirurgiao : public Medico{
    public:
        Cirurgiao(std::string nome, double peso, double altura);
        virtual ~Cirurgiao();
        void imprimeEspecializacao();
        void imprimeOperacao();
    protected:

};

#endif // CIRURGIAO_H
