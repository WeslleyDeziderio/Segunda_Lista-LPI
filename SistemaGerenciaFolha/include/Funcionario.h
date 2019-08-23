#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario{
    public:
        Funcionario();
        virtual ~Funcionario();

        std::string getNome();
        int getMatricula();

        void setNome(std::string nome);
        void setMatricula(int matricula);

        virtual double calcularSalario();

    protected:
        std::string nome;
        int matricula;

};

#endif // FUNCIONARIO_H
