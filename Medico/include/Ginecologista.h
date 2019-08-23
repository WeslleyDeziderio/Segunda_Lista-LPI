#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "Medico.h"
#include <string>
#include <iostream>

class Ginecologista : public Medico{
    public:
        Ginecologista(std::string nome, double peso, double altura);
        virtual ~Ginecologista();
        void imprimeEspecializacao();
        void imprimeOperacao();
    protected:

    private:
};

#endif // GINECOLOGISTA_H
