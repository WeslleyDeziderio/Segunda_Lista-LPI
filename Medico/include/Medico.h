#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico{
    public:
        Medico();
        Medico(std::string nome, double peso, double altura);
        virtual ~Medico();
        void imprimeEspecializacao();
        void imprimeOperacao();
        void setNome(std::string nome);
        std::string getNome();
    protected:
        std::string nome;
        double peso;
        double altura;
};

#endif // MEDICO_H
