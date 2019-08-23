#ifndef OTORRINO_H
#define OTORRINO_H

#include "Medico.h"
#include <string>
#include <iostream>

class Otorrino : public Medico{
    public:
        Otorrino(std::string nome, double peso, double altura);
        virtual ~Otorrino();
        void imprimeEspecializacao();
        void imprimeOperacao();

    protected:

    private:
};

#endif // OTORRINO_H
