#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

int main(void){
    Conta *conta1 =  new Conta("DIOnizio", "00019232-2", 5000, 10000);

    std::cout << "Cliente: " << conta1->getNomeCliente() << std::endl;
    std::cout << "Conta: " << conta1->getNumeroConta() << std::endl;
    std::cout << "Salario: " << conta1->getSalarioMensal() << std::endl;
    std::cout << "Saldo: " << conta1->getSaldo() << std::endl;
    std::cout << "Limite: " << conta1->getLimite()<< std::endl;
    try{
        conta1->sacar(12000);
        std::cout << "O saldo eh: " << conta1->getSaldo() << std::endl;
    }
    catch(SaldoNaoDisponivelException ex){
        std::cerr << "ERROR: " << ex.what() << std::endl;
    }
    catch(...){
        std::cerr << "ERROR: " << std::endl;
    }
    conta1->depositar(1000);
    std::cout << "O saldo eh: " << conta1->getSaldo() << std::endl;

    std::cout << std::endl;

    ContaEspecial *contaEspecial1 = new ContaEspecial("DIOnizio", "089101-1", 5000, 10000);

    std::cout << "Cliente: " << contaEspecial1->getNomeCliente() << std::endl;
    std::cout << "Conta: " << contaEspecial1->getNumeroConta() << std::endl;
    std::cout << "Salario" << contaEspecial1->getSalarioMensal() << std::endl;
    std::cout << "Saldo: " << contaEspecial1->getSaldo() << std::endl;
    std::cout << "Limite" << contaEspecial1->getLimite() << std::endl;
    try{
        contaEspecial1->sacar(2000);
        std::cout << "O saldo atual eh: " << contaEspecial1->getSaldo() << std::endl;
    }
    catch(SaldoNaoDisponivelException ex){
        std::cerr << "ERROR: " << ex.what() << std::endl;
    }
    catch(...){
        std::cerr << "ERROR: " << std::endl;
    }
    contaEspecial1->depositar(1000);
    std::cout << "O saldo atual eh: " << contaEspecial1->getSaldo() << std::endl;

    delete conta1;
    delete contaEspecial1;

    return 0;
}
