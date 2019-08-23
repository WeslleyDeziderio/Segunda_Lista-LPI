#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException() throw(){
    //ctor
}

ValorAbaixoException::~ValorAbaixoException() throw(){
    //dtor
}

std::string ValorAbaixoException::what(){
    return errorMsg;
}

