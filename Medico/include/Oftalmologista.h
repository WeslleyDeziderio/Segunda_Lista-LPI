#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include "Medico.h"
#include <iostream>
#include <string>

class Oftalmologista : public Medico{
    public:
        Oftalmologista(std::string nome, double peso, double altura);
        virtual ~Oftalmologista();
        void imprimeEspecializacao();
        void imprimeOperacao();
    protected:
};

#endif // OFTALMOLOGISTA_H
