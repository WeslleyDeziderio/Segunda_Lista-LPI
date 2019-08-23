#include <iostream>
#include "include/Medico.h"
#include "include/Cirurgiao.h"
#include "include/Oftalmologista.h"
#include "include/Otorrino.h"
#include "include/Ginecologista.h"

int main(void){
    Cirurgiao *cirurgiao1 = new Cirurgiao("Alex", 74, 1.77);
    Oftalmologista *oftalmologista1 = new Oftalmologista("\nAmanda", 68, 1.66);
    Otorrino *otorrino1  = new Otorrino("\nJefferson", 80, 1.66);
    Ginecologista *ginecologista1 = new Ginecologista("\nRafaela", 66, 1.60);

    std::cout << cirurgiao1->getNome() << std::endl;
    cirurgiao1->imprimeEspecializacao();
    cirurgiao1->imprimeOperacao();

    std::cout << oftalmologista1->getNome() << std::endl;
    oftalmologista1->imprimeEspecializacao();
    oftalmologista1->imprimeOperacao();

    std::cout << otorrino1->getNome() << std::endl;
    otorrino1->imprimeEspecializacao();
    otorrino1->imprimeOperacao();

    std::cout << ginecologista1->getNome() << std::endl;
    ginecologista1->imprimeEspecializacao();
    ginecologista1->imprimeOperacao();

    delete cirurgiao1;
    delete oftalmologista1;
    delete otorrino1;
    delete ginecologista1;

    return 0;
}
