#include "SistemaGerenciaFolha.h"

#include <iostream>
#include <locale>

int main(){
    setlocale(LC_ALL, "");
    SistemaGerenciaFolha pagamentos;

    pagamentos.setFuncionarios();
    pagamentos.setFuncionarios();
    pagamentos.setFuncionarios();

    std::cout << "Salario: " << pagamentos.consultaSalarioFuncionario() << std::endl;
    std:: cout << "Total a ser pago: " << pagamentos.calculaValorTotalFolha() << std::endl;

    return 0;
}
