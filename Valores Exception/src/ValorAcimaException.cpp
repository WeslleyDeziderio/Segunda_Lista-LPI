#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException() throw(){
    //ctor
}

ValorAcimaException::~ValorAcimaException() throw(){
    //dtor
}

std::string ValorAcimaException::what(){
    return errorMsg;
}
