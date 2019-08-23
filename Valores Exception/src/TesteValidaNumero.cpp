#include "TesteValidaNumero.h"

TesteValidaNumero::TesteValidaNumero(){
    //ctor
}

TesteValidaNumero::~TesteValidaNumero(){
    //dtor
}

void TesteValidaNumero::validaNumero(int numero){
    if(numero <= 0){
        throw ValorAbaixoException();
    }
    else if(numero >= 100 && numero < 1000){
        throw ValorAcimaException();
    }
    else if(numero >= 100){
        throw ValorMuitoAcimaException();
    }
}
