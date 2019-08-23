#include <iostream>
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include "TesteValidaNumero.h"

int main(void){
    TesteValidaNumero *validaNum1 = new TesteValidaNumero();

    try{
        std::cout << "Numero 4" << std::endl;
        validaNum1->validaNumero(4);
        std::cout << "Numero 17" << std::endl;
        validaNum1->validaNumero(17);
        std::cout << "Numero 300" << std::endl;
        validaNum1->validaNumero(300);
        std::cout << "Numero 1001" << std::endl;
        validaNum1->validaNumero(1001);
    }
    catch(ValorAbaixoException ex){
        std::cerr << "ERROR: " << ex.what() << std::endl;
    }
    catch(ValorAcimaException ex){
        std::cerr << "ERROR: " << ex.what() << std::endl;
    }
    catch(ValorMuitoAcimaException ex){
        std::cerr << "ERROR: " << ex.what() << std::endl;
    }
    catch(...){
        std::cerr << "ERROR: " << std::endl;
    }

    return 0;
}
