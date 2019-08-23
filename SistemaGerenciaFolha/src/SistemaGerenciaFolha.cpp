#include "SistemaGerenciaFolha.h"

#include <iostream>
#include <vector>
#include <windows.h>

SistemaGerenciaFolha::SistemaGerenciaFolha(){

}

SistemaGerenciaFolha::~SistemaGerenciaFolha(){

}

void SistemaGerenciaFolha::setFuncionarios(){
    int matricula, selecao;
    std::string nome;
    double salario, aux, aux2;

    system("cls");
    std::cout << "Selecione: \n1> Adicionar funcionario\n2> Remover funcionario: " << std::endl;
    std::cin >> selecao;
    switch(selecao){
        case 1:
            std::cout << "Digite o nome  do funcionario: ";
            std::cin >> nome;
            std::cout << "Digite a matricula do funcionario: ";
            std::cin >> matricula;
            std::cout << "Qual tipo de funcionario deseja cadastrar?\n" << "1> Assalariado\n2> Comissionado\n3> Horista\n" << std::endl;
            std::cin >> selecao;

            switch(selecao){
                case 1:
                    system("cls");
                    std::cout << "Digite o salario do funcionario: ";
                    std::cin >> salario;
                    funcionarios.push_back(new Assalariado(nome, matricula, salario));
                    break;
                case 2:
                    system("cls");
                    std::cout << "Digite o salario do funcionario: ";
                    std::cin >> salario;
                    std::cout << "Digite a quantidade de vendas semanais do funcionario: ";
                    std::cin >> aux;
                    std::cout << "Digite o percentual de comissao: ";
                    std::cin >> aux2;
                    funcionarios.push_back(new Comissionado(nome, matricula, salario, aux, aux2));
                    break;
                case 3:
                    system("cls");
                    std::cout << "Digite o valor da hora trabalhada do funcionario: ";
                    std::cin >> salario;
                    std::cout << "Digite a quantidade de horas trabalhadas: ";
                    std::cin >> aux;
                    funcionarios.push_back(new Horista(nome, matricula, salario, aux));
                    break;
        }
        break;
        case 2:
            for (unsigned int i = 0; i<funcionarios.size(); i++){
                std::cout << "Funcionario #" << i << "\n\tNome: " << funcionarios[i]->getNome() <<  std::endl;
            }
            std::cout << "Selecione o funcionário que deseja  remover :";
            std::cin >> selecao;
            funcionarios.erase(funcionarios.begin()+selecao);
            break;
    }
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    unsigned int i;
    double total = 0;

    for(i = 0; i < funcionarios.size(); i++){
        total += funcionarios[i]->calcularSalario();
    }

    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(){
    unsigned int i, selecao;

    for(i = 0; i < funcionarios.size(); i++){
        std::cout << "Funcionario #" << i << "\n\t" << funcionarios[i]->getNome() << std::endl;
    }

    std::cout << "Selecione o funcionario para consultar o salario:" << std::endl;
    std::cin >> selecao;

    return funcionarios[selecao]->calcularSalario();
}
